#include <stdio.h>
int main()
{
    float in1,in2,sum;
    float *po ,*po2;
    po = &in1 ,po2= &in2;
    char c1;
    scanf("%f,%c,%f",po,&c1,po2);
    switch (c1)
    {
    case '+':
    sum = *po + *po2;
        /* code */
        break;
        case '-':
        sum = *po - *po2;
        break;
        case '*':
        sum =*po * *po2;
        break;
        case '/':
        sum =*po / *po2;
        break;
    
    default:
        break;
    }
    printf("%f",sum);
}