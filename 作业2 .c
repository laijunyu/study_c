#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main ()
{
    int in;
    printf("请输入："); // 输入提示
    scanf(" %d",&in);//输入
    if (in == 1){
        printf("xinglihua");//进入第一个
    }
    else {
        if (in == 2){
            printf("%d",18+63);//进入第二个
        }
        else{
            int in2,ram;//进入第三个游戏
            printf("caiziyouxikaishi\nqingshuru:");
            srand((unsigned) time(0));//设置随机数
            in2 = rand()%1 +100;
            while (in2 != in2)
            {
                scanf("%d",&in2);//通过循环逐步确认随机数
                if(in2 <ram){
                    printf("caixiaole");//猜大猜小提示
                }
                else{
                    printf("caidale");
                }
                /* code */
            }
           printf("youxijieshu"); 
            
        }
    }
    return 0;
}