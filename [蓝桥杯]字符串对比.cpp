#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	char a[100],b[100],i;
	gets(a);
	gets(b);
	int alen=strlen(a);
	int blen=strlen(b);
	if(alen!=blen){
		printf("1\n");}
	else{
		if(!strcmp(a,b)){printf("2\n");}	
		else{
			for(i=0;i<alen;i++){
				a[i]=tolower(a[i]);
				b[i]=tolower(b[i]);	}	
			if(!strcmp(a,b)){printf("3\n");}
			else{printf("4\n");}
			
}




return 0;
}
		






return 0;
}
