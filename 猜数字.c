/*��������Ϸ������Ϸ���������һ��100���ڵ����������û�����һ����������в²⣬��Ҫ���д�����Զ���������������ı���
�����бȽϣ�����ʾ���ˣ���Too big����������С�ˣ���Too small��������ȱ�ʾ�µ��ˡ�����µ�����������򡣳���Ҫ��ͳ
�ƲµĴ��������1�β³���������ʾ��Bingo!�������3�����ڲµ�����������ʾ��Lucky You!�����������3�ε�����N��>3������
�ڣ�������N�Σ��µ�����������ʾ��Good Guess!�����������N�ζ�û�вµ�������ʾ��Game Over������������������ڵ���N
��֮ǰ���û�������һ��������Ҳ�����Game Over��������������

�����ʽ:
�����һ���и�������������100�����������ֱ�����Ϸ����������������Լ��²��������N�����ÿ�и���һ���û������룬ֱ�����ָ���Ϊֹ��

�����ʽ:
��һ�������ÿ�β²���Ӧ�Ľ����ֱ������¶ԵĽ����Game Over���������

��������:
58 4
70
50
56
58
60
-2
�������:
Too big
Too small
Too small
Good Guess!*/

#include <stdio.h>
int main(){
    int s, n;
    scanf("%d %d", &s, &n);
    int a, i = 0;
    scanf("%d", &a);
    if (a < 0){
        printf("Game Over");
        //break;
    }
    else if (a == s){
        printf("Bingo!");
        //break;
    }
    else{
        for (i = 1; i <= n; i++){
            if (a > s)
                printf("Too big\n");
            else if (a < s)
                printf("Too small\n");
            else if (a == s){
                if (i <= 3){
                    printf("Lucky You!");
                    break;
                }
                else{
                printf("Good Guess!");
                break;
                }
            }
            scanf("%d", &a);
            if (a < 0){
                printf("Game Over");
                //break;
            }
        }
    if (i > n){
        printf("Game Over");
        //break;
        }
    }
}
