#include<stdio.h>
int main(){
	int y=0;
	int m=0;
	int d=0;
	scanf("%4d%2d%2d",&y,&m,&d);//设置域宽
	printf("year=%4d\n",y);
	printf("month=%02d\n",m);//2表示域宽，0表示不够用0填充
 	printf("date=%02d\n",d);
	


	return 0;
} 
