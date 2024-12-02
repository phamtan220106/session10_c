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
	for(i = 0 ; i < length ; i++)
	{
		if(value == arr[i])
		{
			flag = i ;
			break ;
		}
	}
	if(flag!=-1){
		printf("\nPhan tu co o trong mang va nam o vi tri thu : %d " , flag+1);
	}
	else
	{
		printf("\nVi tri khong co trong mang .");
	}

	return 0 ;
}
