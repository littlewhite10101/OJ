#include<stdio.h>
#define PI 3.1415926
int main(){
	double r,s,d,m;
	scanf("%lf",&r);
	s=PI*r*r;
	d=2*r;
	m=2*PI*r;
	
	printf("%.2lf %.2lf %.2lf",d,m,s);
	return 0;
} 
