#include<stdio.h>
int main() 
{
	printf("%d\n",(1!=1,2==2,3));
	
	int a=0;
	a+=1,(a*=2);
	printf("%d\n",a);
	
	
    a=0;
	0&&(a=3);
	printf("%d\n",a);
	
	a=0;
	1||(a=3);
	printf("%d\n",a); 
	return 0; 
}

