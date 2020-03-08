#include <stdio.h>
int main(void)
{
	int num, people;
	printf("请先后输入人数和站数:\n");
	scanf("%d %d", &people, &num);
	if(num>=1&&num<=4) printf("应付款为%d", 3*people);
	if(num>=5&&num<=9) printf("应付款为%d", 4*people);
	if(num>9) printf("应付款为%d", 5*people);
	return 0;
}

