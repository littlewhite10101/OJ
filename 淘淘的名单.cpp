#include<stdio.h>
#include<string.h>
int main(){
	char a[10000][5];
	int i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",a[i]);

}
	for(i=0;i<n;i++){
		if(!strcmp(a[i],"WYS")){
			printf("KXZSMR\n");}
		else if(!strcmp(a[i],"CQ"))printf("CHAIQIANG\n");
        else if(!strcmp(a[i],"LC"))printf("DRAGONNET\n");
        else if(!strcmp(a[i],"SYT"))printf("STUDYFATHER\n");
        else if(!strcmp(a[i],"SSD"))printf("STUDYFATHER\n");
        else if(!strcmp(a[i],"LSS"))printf("STUDYFATHER\n");
        else if(!strcmp(a[i],"LYF"))printf("STUDYFATHER\n");
        else printf("DENOMINATOR\n");


}
	
	
return 0;

} 
