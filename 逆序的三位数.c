#include <stdio.h>
int main()
{
	int m = 0; 
	scanf("%d", &m);
	
	int ones = m % 10;
	int tens = m % 100 / 10;   // OR int tens = m / 10 % 10;
	int hundreds = m / 100;
	int n = ones * 100 + tens * 10 + hundreds;
	
	printf("%d", n); 
	
	return 0;
	
}

