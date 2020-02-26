#include <stdio.h>
int main(void)
{
	int i=6, a, b;
	
	printf("%d\n", ++i);
	printf("%d\n", i++);
	
	a=--i; printf("%d\n", a);
	b=i--, printf("%d\n", b);
	
	printf("%d\n",-i++);//œ»À„-i£¨‘Ÿ++ 
	printf("i=%d\n", i);
	return 0;
}
