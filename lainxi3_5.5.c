#include <stdio.h>
int main ()
{
    float a,b,h;//a为上底,bweixiadi,cweigao
    printf("请分别输入梯形的上底，下底，和高\n");
    scanf("%f %f %f",&a ,&b ,&h);
    float s = (a+b)*h/2;
    printf("梯形的面积为%f",s);
    return 0;


}