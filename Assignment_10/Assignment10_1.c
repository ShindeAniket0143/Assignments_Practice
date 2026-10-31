#include<stdio.h>

double CircleArea(float fRadius)
{
    const float PI = 3.14f;
    double dArea = 0.0;

    if(fRadius < 0)
    {
        fRadius = -fRadius;
    }

    dArea = PI * fRadius * fRadius;

    return dArea;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter a number: ");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);
    printf("Area of circle is : %.4lf\n", dRet);

    return 0;
}