#include<stdio.h>
#include<math.h>
int main ()
{
    double a,b,c,d,X1,X2;
    scanf("%lf%lf%lf",&a,&b,&c);
    d=b*b-4*a*c;
    if (d>=0)
    {
        X1=(-b-sqrt(d))/(2*a);
        X2=(-b+sqrt(d))/(2*a);
        if (X1>=X2)
            printf("%.2lf %.2lf\n",X1,X2);
        else
            printf("%.2lf %.2lf\n",X2,X1);
    }
    else
        printf("error\n");
}
