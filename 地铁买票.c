#include <stdio.h>
int main(void)
{
	int num, people;
	printf("���Ⱥ�����������վ��:\n");
	scanf("%d %d", &people, &num);
	if(num>=1&&num<=4) printf("Ӧ����Ϊ%d", 3*people);
	if(num>=5&&num<=9) printf("Ӧ����Ϊ%d", 4*people);
	if(num>9) printf("Ӧ����Ϊ%d", 5*people);
	return 0;
}

