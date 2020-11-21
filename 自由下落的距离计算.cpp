//#include<stdio.h>
//int main(){
//	double M;//记录最初的高度 
//	double N;//记录第几次落地
//	double sum;//记录经过路程
//	scanf("%lf %lf",&M,&N);
//	while(N){
//		sum+=M;
//		M=M/2;
//		if(N==1){
//			break;	
//		}
//		sum+=M;
//		N--;
//} 
//	printf("%.2lf %.2lf",M,sum);
//
//}

#include <stdio.h>
int main()
{
    float i,j,t,n,h,s;
    scanf("%f\n",&t);
    for(i=1;i<=t;i++)
    {
	scanf("%f%f",&h,&n);
	s=-h;
	for(j=1;j<=n;j++)
	{
	   s=s+2*h;
	   h=h/2;
	}
	printf("%.2f %.2f\n",s,h);
    }
    return 0;
}
