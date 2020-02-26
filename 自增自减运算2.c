#include <stdio.h>
int main(void)
{
	int i=5, j=7, p, q, m;
	p=(++i)+(++i);
	q=(j++)+(j++);
	m=(i++)+(++i);
	printf("p=%d\ni=%d\n", p, i);
	printf("q=%d\nj=%d\n", q, j);
	printf("m=%d\ni=%d\n", m, i);
	return 0;
}
