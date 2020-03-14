//计算从1到n分之一的和，奇数项为正，偶数项为负 
#include <stdio.h>
int main()
{
    int n;
    int i;
    double sum = 0.0;
    double sign = 1.0;
    
    scanf("%d", &n);
    for ( i = 1; i<=n; i++ ){
        sum += sign/i;
        sign = -sign;
    }
    printf("f(%d)=%f\n", n, sum);
    return 0;
}
