#include<stdio.h>
int main(){
	int i,n,arr[100],max;
	while(scanf("%d",&n)!=EOF&&n!=0){
		for(i=0;i<n;i++){
			scanf("%d",&arr[i]);}
		max=arr[0];
		for(i=0;i<n;i++){
		if(arr[i]>max){
			max=arr[i];}
}
		printf("%d\n",max);	

}


return 0;
}




//#include<stdio.h>
//#define N 100
//int main()
//{
// int n,a[N],i;
// int max;
// while(scanf("%d",&n)!=EOF&&n!=0)
// {
//  for(i=0;i<n;i++)
//  {
//   scanf("%d",&a[i]);
//  }
//  max=a[0];
//  for(i=0;i<n;i++)
//  {
//   if(a[i]>max)
//    max=a[i];
//  }
//  printf("%d\n",max);
// }
// return 0; 
// }
