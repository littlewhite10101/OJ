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
    int letter = 0,number = 0,blank = 0,others = 0,c;        //�ֱ�Ϊ��ĸ�����֡��ո�����
    while((c = getchar()) != '\n'){
        if(isalpha(c))              //�ж��Ƿ�Ϊ��ĸ
            letter++;
        else if(isdigit(c))         //�ж��Ƕ�Ϊ����
            number++;
        else if(c == ' ')           //�ж��Ƿ�Ϊ�ո�
            blank++;
        else                        //����
            others++;
    }
    printf("%d\n%d\n%d\n%d\n",letter,blank,number,others);
    return 0;
}
