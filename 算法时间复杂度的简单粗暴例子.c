#include <stdio.h>
int main()
{
    int i, j, n;
    for(i=1; i<=10; i++){		//ע����Է�Χ��Ҫ̫�󣬷������� 
        for(j=1; j<=10; j++){
            //printf("��%d�δ�ӡ\n", i*j);
            for(n=1; n<=10; n++){
            	printf("I Love You\t");
			}
			printf("\n");
        }
        printf("\n");
    }
    return 0;			//���ʵ���ʱ�临�Ӷ�ΪO(n^3) 
}

