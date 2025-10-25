#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p = NULL;
    int a = 5;
    p=&a;
    printf("%d",*p);
    return 0;
}
