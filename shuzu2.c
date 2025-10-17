#include<stdio.h>
int main()
{
    int a [6] ;
    scanf(" %d %d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5]);
    int i,b;
    for ( i = 0; i < 5; i++){
    
        for (b = 0; b < 5-i; b++){
        
            if (a[b]>a[b+1]){
            
                int temp;
                temp = a[b];
                a[b] = a[b+1];
                a[b+1] = temp;
            }
            /* code */
        }
        
        /* code */
    }
    
printf("shu%d",a[5]);
return 0;
}
