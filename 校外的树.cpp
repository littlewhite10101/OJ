#include<stdio.h>
int main(){
	int L,M;
	int count=0;
	int num1,num2,j;  //Num1 num2用来表示起点和终点 
	scanf("%d",&L);//道路长度
	int a[L+1]; //创建一个长度为L+1的数组
	for(int i=0;i<L+1;i++){
		a[i]=1; //表示每一个位置都有一棵树 

} 	
	scanf("%d",&M);//表示要砍树的区域 
	for(int i=0;i<M;i++){
		scanf("%d %d",&num1,&num2); 
		for(j=num1;j<=num2;j++ ){
			a[j]=0;
			}

}
	for(int i=0;i<L+1;i++){
		if(a[i]==1){
			count++;
		}


}

	printf("%d\n",count);

	return 0; 
} 
