#include<stdio.h>
int main(){
	int L,M;
	int count=0;
	int num1,num2,j;  //Num1 num2������ʾ�����յ� 
	scanf("%d",&L);//��·����
	int a[L+1]; //����һ������ΪL+1������
	for(int i=0;i<L+1;i++){
		a[i]=1; //��ʾÿһ��λ�ö���һ���� 

} 	
	scanf("%d",&M);//��ʾҪ���������� 
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
