//#include<stdio.h>
//int main(){
//	double M;//��¼����ĸ߶� 
//	double N;//��¼�ڼ������
//	double sum;//��¼����·��
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
