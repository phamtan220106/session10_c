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
	return 0 ;
}
