#include<stdio.h>
int main()
{
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);
    if (a+b>c&&a+c>b&&b+c>a)
    printf("三角形成立");
    else 
    printf("三角形不成立");
    return 0;
}