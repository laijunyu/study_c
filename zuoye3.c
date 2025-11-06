#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int caizi ()
{

    srand ((unsigned)time(NULL));

    int num = rand() % 10;
    int num2,ci;

    printf("qingshurucaizi:");
    while(1)
    {
        
        scanf("%d",&num2);
        if(num == num2){
            printf("caiduile");
            break;
            
        }
        else if (num < num2)
        {
            printf("caicuola\n caidale\nqingcongxingshuru:");
            /* code */
        }
        else if (num >num2)
        {
            printf("caicuola\ncaixiaole\nqingcongxingshuru");
            /* code */
        }
        ci--;
        printf("ninghaiyou%dcijihui\n",ci);
        if(ci==0){
        	printf("shubai") ;
        	break;
        }
    }
}
int jisuan()
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
int main()
{
    printf("��������Ҫ���еĳ���\n1.������Ϸ\n2.");
    caizi();
    return 0;
}
