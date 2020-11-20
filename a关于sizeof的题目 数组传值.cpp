#include<stdio.h>
void test(int arr[]){
	printf("%d\n",sizeof(arr));
}
void test2(char ch[]){
	printf("%d\n",sizeof(ch));
}
int main(){

int arr[10]={0};
char ch[10]={0};
printf("%d\n",sizeof(arr));  //4*10 
printf("%d\n",sizeof(ch));	//1*10 
test(arr); //数组传参传的是首元素地址 函数形参应该用指针接收，4/8字节，看平台 
test2(ch);	// 数组传参传的是首元素地址 函数形参应该用指针接收，4/8字节，看平台
return 0;



	
} 
