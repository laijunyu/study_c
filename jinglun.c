#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int caizi(int nan)
{
    srand((unsigned)time(NULL));
    int num =rand()%nan;
    printf("此难度下的猜数字范围为：1 - %d",nan);
    int cishu =10;
    while (1)
    {
        printf("您有%d次机会，请输入：",cishu);
        int inpu;
        scanf("%d",&inpu);
        if (num==inpu)
        {
            printf("猜对了，恭喜你\n游戏结束");
            

            /* code */
        }
        else if (num<inpu)
        {
            printf("猜错了，猜大了，请重新输入：");

            /* code */
        }
        else if (num>inpu)
        {
            printf("猜小了，请重新输入");
        }
        cishu --;
        if (cishu == 0)
        {
            printf("失败了正确答案为%d",num);
            break;
        }
        if (inpu==114514)
        {
            printf("悄悄告诉你，数字为：",num);
        }
    }
    
}
int main()
{
    printf("下面运行猜字游戏\n请选择难度类型\n1.困难\n2.普通\n3.简单");
    int nandu;
    scanf("%d",&nandu);
    switch (nandu)
    {
    case 1:
        caizi(50);
        break;
    case 2:
        caizi(100);
        break;
    case 3:
        caizi(200);
        break;
    
    default:
        break;
    }
    caizi(nandu);
    return 0;
}
