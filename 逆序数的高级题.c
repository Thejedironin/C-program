#include <stdio.h>
int main(void)
{
	int x;
	printf("������һ����������λ��������x:");
	scanf("%d",&x);
	if(x>=0)
	{
		if(x<10)
		{
			printf("һλ����\n");
			printf("��λ��Ӧ��������%d\n",x);
			printf("������������%d\n",x);
		}
		else if(x<100)
		{
			int a=x/10,b=x%10;
			printf("��λ����\n");
			printf("��λ��Ӧ��������%d,%d\n",a,b);
			printf("������������%d%d\n",b,a);
		}
		else if(x<1000)
		{
			int a=x/100,b=x%100/10,c=x%10;
			printf("��λ����\n");
			printf("��λ��Ӧ��������%d,%d,%d\n",a,b,c);
			printf("������������%d%d%d\n",c,b,a);
		}
		else if(x<10000)
		{
			int a=x/1000,b=x%1000/100,c=x%100/10,d=x%10;
			printf("��λ����\n");
			printf("��λ��Ӧ��������%d,%d,%d,%d\n",a,b,c,d);
			printf("������������%d%d%d%d\n",d,c,b,a);
		}
		else if(x<100000)
		{
			int a=x/10000,b=x%10000/1000,c=x%10000%1000/100,d=x%100/10,e=x%10;
			printf("��λ����\n");
			printf("��λ��Ӧ��������%d,%d,%d,%d,%d\n",a,b,c,d,e);
			printf("������������%d%d%d%d%d\n",e,d,c,b,a);
		}
		else
		{
			printf("����������ֲ�����Ҫ��\n");
		}
	}
	else
	{
		printf("����������ֲ�����Ҫ��!\n");
	}
	return 0;
}
