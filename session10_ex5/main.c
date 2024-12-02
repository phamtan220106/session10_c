#include<stdio.h>

int main()
{
	int arr[100] , length ;
	printf("\nMoi ban nhap so luong mang : ");
	scanf("%d",&length);
	arr[length];
	printf("\nMoi ban nhap cac phan tu : ");
	for (int i = 0 ; i < length ; i++)
	{
		printf("\nSo phan tu thu %d cua mang la : " , i+1);
		scanf("%d",&arr[i]);
	}
	printf("\nSo phan tu co trong mang ban dau la : ");
	for(int i = 0 ; i < length ; i++)
	{
		printf("%d ",arr[i]);
	}
	for(int i = 0 ; i< length ; i++)
	{
		int min = arr[i];
		for(int j = i+1 ; j < length ; j++)
		{
			if(arr[j]<min)
			{
				min = arr[j];
				arr[j] = arr[i];
				arr[i] = min ;
			}
		}
	}
	printf("\nSo phan tu sau khi da sap xep la  : ");
	for(int i = 0 ; i < length ; i++)
	{
		printf("%d ",arr[i]);
	}
	int value;
	printf("\nMoi ban nhap phan tu : ");
	scanf("%d",&value);
	int start = 0  , end = length ;
	int mid ;
	while(start<=end)
	{	mid = (start + end )/2;
		if(arr[mid]==value)
		{
			printf("\nVi tri phan tu la : %d",mid);
			return 0 ;
		}
		else if (arr[mid] > value )
		{
			end = mid - 1;
		}
		else
		{
			start = mid + 1 ;
		}

	}
	printf("\nKhong co gia tri ban tim kiem ");
	return 0 ;
}
