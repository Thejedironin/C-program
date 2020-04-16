#include <stdio.h>
int main()
{
    int i, j, n;
    for(i=1; i<=10; i++){		//注意测试范围不要太大，否则会崩溃 
        for(j=1; j<=10; j++){
            //printf("第%d次打印\n", i*j);
            for(n=1; n<=10; n++){
            	printf("I Love You\t");
			}
			printf("\n");
        }
        printf("\n");
    }
    return 0;			//这次实验的时间复杂度为O(n^3) 
}

