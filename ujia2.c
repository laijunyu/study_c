#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    // 定义数组主角
int input[5][10]={0};  // 存储输入的全部数字，最多5轮、每轮最多10次猜测机会
int target[5] = {0};    // 存储每轮生成的随机数 
srand((unsigned)time(0));
int cnt[5] = {0};      // 存储每轮猜测次数    
int ci,ci2;    //此处粘贴程序代码
for (ci=0;ci<5;ci++){
    target[ci]=rand()%100;

}
for(ci2=0;ci2<5;ci2++){
    for(ci=0;ci<10;ci++){
    printf("qsr");
    int temp;
    scanf("%d",&input[ci2][ci]);
    if(target[ci2]==input[ci2][ci]){
        printf("cdl");
        break;
    }
    else if (target[ci2]>input[ci2][ci])
    {
        printf("caidale");

        /* code */
    }
    else if (target[ci2]>input[ci2][ci])
    {
        printf("cbigle");
        /* code */
    }
    cnt[ci2]++;
    printf("daanwei%d",target[ci2]);
}
}
for(ci2=0;ci2<5;ci2++){
    for(ci=0;ci<10;ci++){
        printf("cangshicishu%dchangshi%d \n",cnt[ci2],input[ci2][ci]);
    }
}
    return 0;

}
