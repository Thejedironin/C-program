#include <stdio.h>
#define NUM 10
int main()
{
	int s[NUM];
	int i, sum = 0;
	for( i = 0; i<10; i++ ){
		printf("�������%dλͬѧ�ĳɼ�:", i+1);
		scanf("%d", &s[i]);
		sum += s[i];
	}
	printf("�ɼ�¼����ϣ��ôο��Ե�ƽ���ɼ���%.2f", (double)sum/NUM);
	return 0;
}
