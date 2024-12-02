#include<stdio.h>

int main()
{
	int arr[100] , length , value ;
	printf("\nMoi ban nhap so luong phan tu : ");
	scanf("%d",&length);
	arr[length];
	printf("\nMoi ban nhap lan luot cac phan tu : ");
	for(int i = 0 ; i < length ; i++)
	{
		printf("\nPhan tu thu %d cua mang la : ",i+1);
		scanf("%d",&arr[i]);
	}
	printf("\nMoi ban nhap phan tu :");
	scanf("%d",&value);
	int flag = -1 ;
	int i ;
	int dem = 0 ;
	for(i = 0 ; i < length ; i++)
	{
		if(value == arr[i])
		{
			flag = i ;
			dem++;
		}
	}
	if(flag!=-1){
		printf("\nPhan tu co o trong mang va co  %d phan tu  " , dem);
	}
	else
	{
		printf("\nVi tri khong co trong mang .");
	}

	return 0 ;
}
