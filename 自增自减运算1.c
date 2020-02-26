#include <stdio.h>
int main(void)
{
	int i, j, p, q;
	i=1;
	j=4;
	p=i+++j;//先算i++，此时i=2,j=4 
	q=i+++j+++i;//先算i++,再加j++,再加i 
	printf("p=%d\nq=%d\n",p,q);
	printf("i=%d\nj=%d", i, j);
	return 0;
}
