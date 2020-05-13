#include <stdio.h>
int main()
{
	int f1 = 1, f2 = 1, i;
	for(i = 2; i < 22; i+=2){
		printf("%d %d ", f1, f2);
		f1 += f2;
		f2 += f1;
	}
	return 0;
}
