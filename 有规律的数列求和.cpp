#include<stdio.h>
int main(){
	double a=2.0;
	double b=1.0;
	double sn=0,an=0,n,t;//aΪ���ӣ�bΪ��ĸ��anΪa/b��ֵ��snΪ���м������ĺ�,tΪ��ʱ����,nΪѭ������ 
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
