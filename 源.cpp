#include<stdio.h>
int main()
{int arr[5] = { 0 };

//��������
int i = 0;
for(i = 0; i < 10; i++)
{
    scanf("%d:", &arr[i]);
}

//��������
int sum = 0;
for (i = 0; i < 5; i++)
{
    sum += arr[i];
}
int average = sum /5;
//������
printf("ƽ������%d", average);
return 0;
}