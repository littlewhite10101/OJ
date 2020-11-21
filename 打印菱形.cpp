#include<stdio.h>
int main(){
	int line;
	scanf("%d",&line);
	int i,j;
	for(i=0;i<line;i++){
		//打印空格 再打印星号
		for(j=0;j<line-1-i;j++){
			printf(" ");}
		for(j=0;j<2*i+1;j++){
			printf("*");
		}
		printf("\n");

}
	for(i=0;i<line-1;i++){
		for(j=0;j<=i;j++){
			printf(" ");
		}
		for(j=0;j<2*(line-1-i)-1; j++){
			printf("*");
		}
		printf("\n");

} 




	return 0;
}
