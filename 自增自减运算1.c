#include <stdio.h>
int main(void)
{
	int i, j, p, q;
	i=1;
	j=4;
	p=i+++j;//����i++����ʱi=2,j=4 
	q=i+++j+++i;//����i++,�ټ�j++,�ټ�i 
	printf("p=%d\nq=%d\n",p,q);
	printf("i=%d\nj=%d", i, j);
	return 0;
}
