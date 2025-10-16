#include <stdio.h>
int main ()
{
    int score;
    printf("请输入分数：");
    scanf("%d", &score);

    if (score >= 90)
        printf("a");
    else if (score >= 60)
        printf("b");
    else
        printf("c");

    return 2;
}