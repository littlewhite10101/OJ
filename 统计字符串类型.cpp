//#include<stdio.h>
//int main(){
//	char c;
//	scanf("%s",&c);
//	printf("%s",c); 
//
//
//
//
//	return 0;
//
//}

#include <stdio.h>
#include <ctype.h>
int main()
{
    int letter = 0,number = 0,blank = 0,others = 0,c;        //分别为字母、数字、空格、其他
    while((c = getchar()) != '\n'){
        if(isalpha(c))              //判断是否为字母
            letter++;
        else if(isdigit(c))         //判断是都为数字
            number++;
        else if(c == ' ')           //判断是否为空格
            blank++;
        else                        //其他
            others++;
    }
    printf("%d\n%d\n%d\n%d\n",letter,blank,number,others);
    return 0;
}
