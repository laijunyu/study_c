#include<stdio.h>
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
int main ()
{
    printf("qingshuru\n");
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
    printf ("%f %c %f jieguowei %f",num1,hao,num2,sum);
    return 0;
}