#include<stdio.h>
int main()
{
    float a, b, c, perimeter;

    printf("write the first number : ");
    scanf("%f",&a);

    printf("write the second number : ");
    scanf("%f",&b);

    printf("write the third number : ");
    scanf("%f",&c);

    if(a < (b+c) && b < (a+c) && c < (b+c))
    {
        perimeter= a+b+c;
        printf("perimeter = %.1f",perimeter);
    }
    else
    {
        printf("Not possible to create a triangle.. :( ");
    }

    return 0;
}
