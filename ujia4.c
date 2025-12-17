#include <stdio.h>
int xinli(){
    printf("对你说心里话为哈哈哈");

}
int rav(float arr[]){
    int i =0,sum,arva;
    for ( i = 0; i < 56; i++)
    {
        sum =+arr[i];
        arva =sum/56;
        printf("%d",arva);

        /* code */
    }
     

}
int lei (float arr[]){
    float max =arr[0];
    int i;
    for( i=1;i<56;i++){
        if(max<arr[i]) max=arr[i];
        
    }
    printf("zuida%f",max);
}
int su(int a){
    int i,flag;
    for(i=1;i<a;i++){
        if(i!=1&&a%i!=0){
            flag=1;

        }
        else flag=0;

    }
    printf("%d%s",flag==1?"shisushu":"bushisushu");
    
}
void pao (){
    int arr[10]={7,6,3,4,0,2,1,5,8,9};
    int *arrp=arr;
    int i,j;
    printf("qian");
    for ( i = 0; i < 10; i++)
    {
        printf("%d",arr[i]);
        /* code */
    }
    for(i=0;i<10;i++){
        for(j=0;j<9-i;j++){
            if(*(arrp+j)>*(arrp+j+1)){
                int tmp=arrp[j];
                arrp[j]=arrp[j+1];
                arrp[j+1]=tmp;

            }
        }
    }
    printf("hou");
    for ( i = 0; i < 10; i++)
    {
        printf("%d",arr[i]);
        /* code */
    }
}
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main() {
    int choice;  // 菜单选择项
    // 循环显示菜单，直到选择退出，这里也可选择while循环
    float scores[56] = {
         85.2, 90.2, 89.8, 86.6, 83.9, 87.7, 92.1, 84.7,
        88.4, 91.3, 85.9, 89.4, 82.7, 88.9, 90.6, 86.2,
        87.3, 89.9, 84.1, 91.8, 85.5, 88.7, 83.5, 90.3,
        87.0, 89.1, 87.5, 85.1, 92.4, 84.9, 88.1, 90.9,
        86.3, 89.6, 83.2, 98.5, 91.0, 85.9, 87.9, 89.2,
        84.4, 91.5, 85.7, 88.8, 83.9, 90.5, 86.7, 89.7,
        87.1, 85.3, 92.1, 84.6, 88.3, 90.8, 86.0, 99.2}; 
    do {
        // 打印主菜单界面
        printf("\n===== 个人作品集主菜单 =====\n");
        printf("1. 心里话功能\n");
        printf("2. 计算25电信B1班平均成绩\n");
        printf("3. 打擂台找最小值函数\n");
        printf("4. 判断素数\n");
        printf("5. 冒泡排序（升序）\n");
        printf("6.swap交换");
        printf("0. 退出程序\n");
        printf("请输入你的选择（0-5）：");
        scanf("%d", &choice);
        if (choice==1)
        {
            xinli();
        }
        else if (choice==2)
        {
            rav(scores);
        }
        else if (choice==3)
        {
            lei(scores);
        }
        else if (choice==4)
        {
            int y;
            scanf("%d",&y);
            su(y);
        }
        else if (choice==5)
        {
            pao();
        }
        else if (choice==6)
        {
            int ar,ab;
            int *arp,*abp;
            arp=&ar;
            abp=&ab;
            printf("shuru a and b\n");
            scanf("%d %d",arp,abp);
            swap(arp,abp);
            printf("a=%d b=%d",*arp,*abp);
        }
        
        else if (choice==0)
        {
            break;
        }
        
    }
    while (1);
    return 0;
}
