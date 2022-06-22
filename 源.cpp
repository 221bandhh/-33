#include<stdio.h>
int main()
{int arr[5] = { 0 };

//输入数字
int i = 0;
for(i = 0; i < 10; i++)
{
    scanf("%d:", &arr[i]);
}

//计算数字
int sum = 0;
for (i = 0; i < 5; i++)
{
    sum += arr[i];
}
int average = sum /5;
//输出结果
printf("平均数是%d", average);
return 0;
}