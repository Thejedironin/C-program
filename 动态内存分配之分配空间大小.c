#include <stdio.h>
#include <stdlib.h>		//提醒几个使用malloc和free中出现的问题 

int main(void)
{
    void *p=0;		//指针变量定义时就赋给它一个初值 
    int cnt = 0;
    while ( (p = malloc(1024*1024)) ){
        cnt++;
    }
    printf("分配了%dMB的空间\n", cnt);
    free(p);		//申请空间后必须free, 否则长时间运行内存就会下降
					//不能free过后再去free, 否则会崩溃 
					//不能地址变过了，直接去free 
    
    return 0;
}

