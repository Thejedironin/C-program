#include <stdio.h>
void Sum(int arr[], int len);
void max_score(int arr[], int len);
void min_score(int arr[], int len);
void Average(int arr[], int len);
void sort(int arr[], int len);
int main()
{
	int score[]={67,98,75,63,82,79,81,91,66,84};
	int len = sizeof(score)/sizeof(score[0]);		//得出数组元素的个数
	Sum(score, len);								//求总分
	max_score(score, len);							//求最高分 
	min_score(score, len);							//求最低分 
	Average(score, len);							//求平均分 
	sort(score, len); 								//从高到低排序 
	return 0;
}
void Sum(int arr[], int len)
{
	int sum = 0;
	int i;
	for(i = 0; i<len; i++){
		sum += arr[i];
	}
	printf("考试总分为%d\n", sum);
}
void max_score(int arr[], int len)
{
	int max = arr[0];
	int i;
	for(i = 0; i<len; i++){
		if(arr[i]>max){
			max = arr[i];
		}
	}
	printf("最高分是%d\n", max);
}
void min_score(int arr[], int len)
{
	int min = arr[0];
	int i;
	for(i = 0; i<len; i++){
		if(arr[i]<min){
			min = arr[i];
		}
	}
	printf("最低分为%d\n", min);
}
void Average(int arr[], int len)
{
	float average;
	int sum = 0;
	int i;
	for(i = 0; i<len; i++){
		sum += arr[i]; 
	}
	average = sum/len;
	printf("平均分为%f\n", average);
}
void sort(int arr[], int len)
{
	int tem;
	int i, j;
	printf("***********排序前************\n");
	for(i = 0; i<len; i++){
		printf("%d\t", arr[i]);
	}
	printf("\n");
	for(i = len-1; i>0; i--){
		for(j = 0; j<i; j++){
			if(arr[j]<arr[j+1]){
				int tem;
				tem = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tem;
			}
		}
	}
	printf("*************排序后***********\n");
	for(i = 0; i<len; i++){
		printf("%d\t", arr[i]);
	}
}
