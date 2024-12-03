#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m;
    printf("Nhap so dong n: ");
    scanf("%d", &n);
    printf("Nhap so cot m: ");
    scanf("%d", &m);
    int arr[n][m];
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    for(int j=0;j<m;j++){
        for(int i=0;i<n;i++){
            int key = arr[i][j];
            // Lấy ra phần mảng đã được sắp xếp bên phía tay trái
            int t = i - 1;
            while(t >= 0 && key < arr[t]) {
                arr[t + 1][j] = arr[t][j];
                t = t - 1;
            }
            arr[t + 1][j] = key;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("Hello world!\n");
    return 0;
}
