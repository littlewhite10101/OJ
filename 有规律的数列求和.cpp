#include<stdio.h>
int main(){
	double a=2.0;
	double b=1.0;
	double sn=0,an=0,n,t;//a为分子，b为分母，an为a/b的值，sn为数列加起来的和,t为临时变量,n为循环次数 
	sn+= a/b;
	scanf("%lf",&n);
	for(int i=1;i<n;i++){
		t=a;
		a=a+b;
		b=t; 
		an=a/b;
		sn+=an;
	} 
	printf("%.2lf",sn);
	return 0;


} 
