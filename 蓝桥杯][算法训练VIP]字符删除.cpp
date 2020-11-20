#include<stdio.h>
int main(){
//	int i;
//	char c;
//	char a[100];
//	gets(a);
//	c=getchar();
//	for(i=0;a[i]!='\0';i++){
//		if(a[i]!=c){
//			printf("%c",a[i]);	}
//}
char ch;
int cnt = 0;
while ((ch =getchar()!= '\n'))
cnt++;
printf("%d",cnt);

return 0; 
}
