#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int in ,ramd;//定义数字
    srand((unsigned)time(NULL)); // 设置种子值
    int ramd = rand(); // 生成随机数
    printf("shuru\n");
    scanf("%d",&in);//输入数字
    ptintf("ning%s",in == ramd ? "caduile":"caicuole");//判断并输出
}