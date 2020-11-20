#include<stdio.h>
int main(){
	int day;
	int i,sum;
	while(scanf("%d",&day)!=EOF){
	if(day==0){break;}
	sum=1;
	for(i=1;i<day;i++){  //题目是第N天早上发现还剩一个，也就是说第N天并没有吃，
	//所以只需要计算之前N-1天吃的数量就是结果，故只需要循环N-1次
		sum=(sum+1)*2; 
	
		 }
//本题最好的办法，是通过循环逆推整个过程，要注意的是猴子是先吃一半，再吃一个。
//所以我们逆推的时候，要先加那一个，再翻一倍。

	printf("%d\n",sum); 
	}
return 0;
}
