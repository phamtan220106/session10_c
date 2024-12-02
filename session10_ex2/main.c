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
	for(int i = 0 ; i < length ; i++)
	{
		for(int j = 0 ; j < length-1-i ; j++)
		{
			if(arr[j+1]<arr[j])
			{
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	printf("\nPhan tu sau khi duoc sap xep : ");
	for(int i = 0 ; i < length ; i++)
	{
		printf("%d ",arr[i]);
	}
	return 0 ;
}
