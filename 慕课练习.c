#include <stdio.h>
int main()
{
    int x, i;
    scanf("%d", &x);
    for(i=1;i<=x;i++){
        if(i%2==1){
            printf("%d ", i);
        }
    }
    printf("\b");
    return 0;
}

