#include<stdio.h>
int main(){
	int line,i,j;
	scanf("%d",&line);
	for(i=0;i<line;i++){
		for(j=0;j<line-i;j++){
				printf("* ");}	
		printf("\n");


}


return 0;
}
