#include <stdio.h>
int main()
{
    int a[5][6]= {0};
    int i, j;
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            a[i][j]=rand()%19;
            printf("%2d ", a[i][j]);
        }
        printf("\n");
    }
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            a[i][5]+=a[i][j];
        }
    }
    printf("运算完程序后的方阵是:\n");
    for(i=0; i<5; i++){
        for(j=0; j<6; j++){
            printf("%2d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}

