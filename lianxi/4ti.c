#include<stdio.h>
int main()
{
    float x;
    while(1)
    {scanf("%f",&x);
    if (x<0||x>100)
    printf(" ‰»ÎŒﬁ–ß");
    else if( 90<x &&x<100)
    printf("A");
    else if( 80<x &&x<89.99)
    printf("B");
    else if (70<x &&x<79.99)
    printf("C");
    else if (60<x &&x<69.99)
    printf("D");
    else if (0<x &&x<59.99)
    printf("E");}
    return 0;
}