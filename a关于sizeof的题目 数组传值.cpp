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
test(arr); //���鴫�δ�������Ԫ�ص�ַ �����β�Ӧ����ָ����գ�4/8�ֽڣ���ƽ̨ 
test2(ch);	// ���鴫�δ�������Ԫ�ص�ַ �����β�Ӧ����ָ����գ�4/8�ֽڣ���ƽ̨
return 0;



	
} 
