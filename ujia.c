#include<stdio.h>
int main (){
    int cn ,ma,en,sum,sum2;
    char student [3];
    printf("请输入学生姓名：");
    scanf("%c%c%c",&student[0],&student[1],&student[2]);
    printf("请分别输入语数英三科成绩：");
    scanf("%d %d %d",&cn,&ma,&en);
    sum2=cn+ma+en;
    sum =(cn+en+ma)/3;
    printf("%c%c%c 的成绩为：%d %d %d\n均分为：%d\n总分为：%d",student[0],student[1],student[2],cn,ma,en,sum,sum2);
    if (sum<60)
    {
        printf("不及格");
    }
    else if (sum>=60&&sum<70)
    {
        printf("及格");
    }
    else if (sum>=70&&sum<80)
    {
        printf("中等");
    }
    else if (sum >=80&&sum<90)
    {
        printf("良好");
    }
    else if (sum>90)
    {
        printf("优秀");
    }
    return 0;

    
}