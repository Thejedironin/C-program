#include <stdio.h>
int main(void)
{
	int num, people;
	printf("���Ⱥ�����������վ��:\n");
	scanf("%d %d", &people, &num);
	switch(num)
	{
		case 1:
		case 2:
		case 3:
		case 4:printf("Ӧ����Ϊ%d", 3*people);break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:printf("Ӧ����Ϊ%d", 4*people);break;
		default: printf("Ӧ����Ϊ%d", 5*people);break;
	}
	return 0;
}

