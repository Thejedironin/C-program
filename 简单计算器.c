#include <stdio.h>
int main(){
	char a='0';
	int b;
	int sum;
	int is=0;
	scanf("%d",&b);
		sum=b;
	while (a!='='){
		scanf("%c",&a);
		if(a=='=')
		break;	
		scanf("%d",&b);
		if(a=='+')
		sum=sum+b;
		else if(a=='+')
		sum=sum+b;
		else if(a=='-')
		sum=sum-b;
		else if(a=='*')
		sum=sum*b;	
		else if(a=='/'){
			if(b!=0)
			sum=sum/b;
			else
			is=1;	
		}
		else 
		is=1;
	}
	if (is==1)
	printf("ERROR");
	else
	printf("%d\n",sum);
	return 0;
} 

