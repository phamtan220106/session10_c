#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("pham_nhat_tan_session10_ex10.\n");
    int row,col,x,rong=4;
    printf(" nhap vao so hang va so cot. ");
    scanf("%d %d",&row,&col);
    int Arr[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&Arr[i][j]);
        }
        printf("\n");
    }
    if(row>col){
        x=col;
    }else{
        x=row;
    }
    int Anew[x],min,index;
    for(int i=0;i<x;i++){
        for(int j=0;j<x;j++){
            if(i+j==x-1){
                Anew[i]=Arr[i][j];
            }
        }
    }
    for(int i=0;i<x-1;i++){
        min=Anew[i];
        index=i;
        for(int j=i+1;j<x;j++){
            if(Anew[j]<min){
                min=Anew[j];
                index=j;
            }
            int temp = Anew[i];
            Anew[i] = Anew[index];
            Anew[index] = temp;
        }
    }
    for(int i=0;i<x;i++){
        for(int j=0;j<x;j++){
            if(i+j==x-1){
                Arr[i][j]=Anew[i];
            }
        }
    }
    for(int i=0;i<x;i++){
        for(int j=0;j<x;j++){
            if(i+j==x-1){
                printf("%*d",rong,Arr[i][j]);
            }else{
                printf("%*c",rong,' ');
            }
        }
        printf("\n");
    }
    printf("Hello world!\n");
    return 0;
}
