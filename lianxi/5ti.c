#include<stdio.h>
int main()
{

    
        float a,b;
        char op;
        
        
        scanf("%f %c %f",&a, &op, &b);
        if (op=='/'&&b==0)
        printf("运算无效");
        else if("op=='+'")
        printf("%.2f",a+b);
        else if("op=='-'")
        printf("%.2f",a-b);
        else if("op=='*'")
        printf("%.2f",a*b);
        else if("op=='/'")
        printf("%.2f",a/b);
        else
        printf("运算错误");

    return 0;
}