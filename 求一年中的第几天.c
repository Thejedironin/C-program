#include <stdio.h>
int main()
{
    int year, months, days, sum;
    scanf("%d/%d/%d", &year, &months, &days);
    switch(months){
        case 1:sum=days; break;
        case 2:sum=days+31; break;
        case 3:sum=days+59; break;
        case 4:sum=days+90; break;
        case 5:sum=days+120; break;
        case 6:sum=days+151; break;
        case 7:sum=days+181; break;
        case 8:sum=days+212; break;
        case 9:sum=days+243; break;
        case 10:sum=days+273; break;
        case 11:sum=days+304; break;
        case 12:sum=days+335; break;
    }
    if((year%100!=0&&year%4==0)||year%400==0){
        if(months>2){
            sum++;
        }
    }
    return 0;
}

