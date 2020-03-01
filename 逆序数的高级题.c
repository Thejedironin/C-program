#include <stdio.h>
int main(void)
{
	int x;
	printf("请输入一个不大于五位的正整数x:");
	scanf("%d",&x);
	if(x>=0)
	{
		if(x<10)
		{
			printf("一位整数\n");
			printf("各位对应的数字是%d\n",x);
			printf("逆序后的数字是%d\n",x);
		}
		else if(x<100)
		{
			int a=x/10,b=x%10;
			printf("两位整数\n");
			printf("各位对应的数字是%d,%d\n",a,b);
			printf("逆序后的数字是%d%d\n",b,a);
		}
		else if(x<1000)
		{
			int a=x/100,b=x%100/10,c=x%10;
			printf("三位整数\n");
			printf("各位对应的数字是%d,%d,%d\n",a,b,c);
			printf("逆序后的数字是%d%d%d\n",c,b,a);
		}
		else if(x<10000)
		{
			int a=x/1000,b=x%1000/100,c=x%100/10,d=x%10;
			printf("四位整数\n");
			printf("各位对应的数字是%d,%d,%d,%d\n",a,b,c,d);
			printf("逆序后的数字是%d%d%d%d\n",d,c,b,a);
		}
		else if(x<100000)
		{
			int a=x/10000,b=x%10000/1000,c=x%10000%1000/100,d=x%100/10,e=x%10;
			printf("五位整数\n");
			printf("各位对应的数字是%d,%d,%d,%d,%d\n",a,b,c,d,e);
			printf("逆序后的数字是%d%d%d%d%d\n",e,d,c,b,a);
		}
		else
		{
			printf("您输入的数字不符合要求\n");
		}
	}
	else
	{
		printf("您输入的数字不符合要求!\n");
	}
	return 0;
}
