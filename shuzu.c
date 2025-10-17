#include<stdio.h>
int main ()
{
    int a [6];
    int max ;
    scanf(" %d %d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5]);
    printf("%d",a [2]);
    max = a[1];
    int i;
    for ( i = 1; i <= 6; i++){
        if (max < a [i])
        {
            max =a[i];
            /* code */
        }
        
    
        
    
        
    }
    printf("zuida%d",max);
    

    return 0;
}