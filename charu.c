#include<stdio.h>
int main ()
{
    int a[6];
    scanf(" %d %d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5]);
    int xun,i;
    for(xun =1 ;xun <6;xun++)
    {
        int tmp = a[xun];
        i = xun-1;
        while (i>=0 && a[i]>tmp)
        {
            a[i+1]=a[i];
            i--;
            /* code */
        }
        a[i+1] = tmp;
        



    }
printf("%d",a[5]);
return 0;
}