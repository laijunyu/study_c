#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main ()
{
    int in;
    printf("请输入：");
    scanf(" %d",&in);
    if (in == 1){
        printf("xinglihua");
    }
    else {
        if (in == 2){
            printf("%d",18+63);
        }
        else{
            int in2,ram;
            printf("caiziyouxikaishi\nqingshuru:");
            srand((unsigned) time(0));
            in2 = rand()%1 +100;
            while (in2 != in2)
            {
                scanf("%d",&in2);
                if(in2 <ram){
                    printf("caixiaole");
                }
                else{
                    printf("caidale");
                }
                /* code */
            }
           printf("youxijieshu"); 
            
        }
    }
}