#include <stdio.h>
#include <stdlib.h>		//���Ѽ���ʹ��malloc��free�г��ֵ����� 

int main(void)
{
    void *p=0;		//ָ���������ʱ�͸�����һ����ֵ 
    int cnt = 0;
    while ( (p = malloc(1024*1024)) ){
        cnt++;
    }
    printf("������%dMB�Ŀռ�\n", cnt);
    free(p);		//����ռ�����free, ����ʱ�������ڴ�ͻ��½�
					//����free������ȥfree, �������� 
					//���ܵ�ַ����ˣ�ֱ��ȥfree 
    
    return 0;
}

