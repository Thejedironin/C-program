#include <stdio.h>
void Sum(int arr[], int len);
void max_score(int arr[], int len);
void min_score(int arr[], int len);
void Average(int arr[], int len);
void sort(int arr[], int len);
int main()
{
	int score[]={67,98,75,63,82,79,81,91,66,84};
	int len = sizeof(score)/sizeof(score[0]);		//�ó�����Ԫ�صĸ���
	Sum(score, len);								//���ܷ�
	max_score(score, len);							//����߷� 
	min_score(score, len);							//����ͷ� 
	Average(score, len);							//��ƽ���� 
	sort(score, len); 								//�Ӹߵ������� 
	return 0;
}
void Sum(int arr[], int len)
{
	int sum = 0;
	int i;
	for(i = 0; i<len; i++){
		sum += arr[i];
	}
	printf("�����ܷ�Ϊ%d\n", sum);
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
	printf("��߷���%d\n", max);
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
	printf("��ͷ�Ϊ%d\n", min);
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
	printf("ƽ����Ϊ%f\n", average);
}
void sort(int arr[], int len)
{
	int tem;
	int i, j;
	printf("***********����ǰ************\n");
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
	printf("*************�����***********\n");
	for(i = 0; i<len; i++){
		printf("%d\t", arr[i]);
	}
}
