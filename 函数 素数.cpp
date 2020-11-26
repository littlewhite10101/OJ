#include<stdio.h>
#include<math.h> 
int Prime(int x){
	int i,a;
	int s=0;
		if(x==2 || x==3){
			return 1;
		}else{
		for(i=2;i<=sqrt(x);i++){ 
		if(x%i==0){
			s++;
		}
		} 
		if(s==0){
		a=1;}
		else{
		a=0;}
	}
	return a;
	} 

int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		printf("%d\n",Prime(n));
	}
	return 0;
}

