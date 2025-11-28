#include <stdio.h>
#include<stdlib.h>
#include<time.h>
float jia(float a,float b)
{
    float zong;
    zong =a+b;
    return zong;
}
float jian(float a ,float b)
{
    float zong;
    zong = a - b;
    return zong;
}
float cheng (float a,float b)
{
    float zong;
    zong = a * b;
    return zong;
}
float chu (float a, float b)
{
    float zong;
    zong = a / b;
    return zong;
}

int caizi ()
{

    srand ((unsigned)time(NULL));

    int num = rand() % 10;
    int num2,ci;
    ci =10;

    printf("qingshurucaizi:");
    while(1)
    {
        
        scanf("%d",&num2);
        if(num == num2){
            printf("猜对了");
            break;
            
        }
        else if (num < num2)
        {
            printf("猜错了\n 猜大了\n请重新输入:");
            /* code */
        }
        else if (num >num2)
        {
            printf("猜错了\n猜小了\n请重新输入");
            /* code */
        }
        ci--;
        printf("您还有%d次机会\n",ci);
        if(ci==0){
        	printf("失败了") ;
        	break;
        }
    }
}
int jisuan()
{
    printf("请输入\n");
    float num1 ,num2;
    char hao;
    scanf("%f%c%f",&num1,&hao,&num2);
    float sum;
    switch (hao)
    {
    case '+':
    sum = jia(num1,num2);
        /* code */
    break;
    case '-':
    sum = jian(num1,num2);
    break;
    case '*':
    sum = cheng(num1,num2);
    break;
    case'/' :
    sum = chu(num1,num2);
    break;
    }
    printf ("%f %c %f 的结果为 %f",num1,hao,num2,sum);
    return 0;
}
int main()
{
    int selct;
    printf("请输入想运行的程序序号1.猜字游戏2.计算器");
    scanf("%d",&selct);
    switch (selct)
    {
    case 1:caizi();
        /* code */
        break;
    case 2:jisuan();
        break;
    
    default:
        printf("输入有误");
        break;
    }
    return 0;
}
