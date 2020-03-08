#include <stdio.h>
int main(void)
{
	int num, people;
	printf("请先后输入人数和站数:\n");
	scanf("%d %d", &people, &num);
	switch(num)
	{
		case 1:
		case 2:
		case 3:
		case 4:printf("应付款为%d", 3*people);break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:printf("应付款为%d", 4*people);break;
		default: printf("应付款为%d", 5*people);break;
	}
	return 0;
}

