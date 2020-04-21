#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i, a[10], max;
	FILE *fp;
	fp = fopen("D:\\Debug\\111.txt", "r");
	if (fp==NULL) {
		printf("ÎÄ¼þ¶ÁÈ¡Ê§°Ü!\n");
		exit(0); 
	}
	for(i = 0; i<10; i++){
		fscanf(fp, "%d", &a[i]);
	}
	max = a[2];
	for(i = 2; i<9; i++){
		if(a[i]%2==0){
			if(a[i]>max){
				max = a[i];
			}
		}
	}
	printf("%d\n", max);
	fclose(fp);
	return 0;
}
