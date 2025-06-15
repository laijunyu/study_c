#include <stdio.h>
int main(void)
{
    float weight = 18.8;
    float high = 16.5;
    float bmi = weight / ( high * high);
    printf ("%f\n" , bmi);
    if (bmi < 18.5)
    {
        printf("your bmi pianshou \n ");
    }
    if (bmi >= 18.5 && bmi <= 24.9)
    {
        printf("your bmi zhengchang");
    }
    if (bmi >24.9 && bmi <= 29.9)
    {
        printf ("your bmi changzhong");

    }
    if (bmi > 30)
    {
        printf("your bmi jingbuzheng");
    }


}