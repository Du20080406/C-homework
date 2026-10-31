#include<stdio.h>
int main()
{
    float x;
    scanf("%f",&x);
    if(x>0)
    printf("正数");
    else if(x<0)
    printf("负数");
    else
    printf("0");
    return 0;

}