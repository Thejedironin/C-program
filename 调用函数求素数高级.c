#include <stdio.h>
int isPrime(const unsigned n);
int main()
{
    int i, sum = 0, x = 0, a, b;
    printf("��������������������:\n");
    scanf("%d %d", &a, &b);
    for(i = a; i <= b; i++){
        if(isPrime(i)){
            sum += i;
            x++;
        }
    }
    printf("���������������ƽ��ֵ��%f\n", sum*1.0/x);
    return 0;
}
int isPrime(const unsigned n)
{
    int i;
    if(n<2) return 0;
    if(n==2) return 1;
    for(i = 2; i*i <= n; i++){
        if(n%i ==0) return 0;
    }
    return 1;
}

