#include<stdio.h>
#include<string.h>
int main(){
    char s[210];
	char ar[10]="marshtomp";
	char ar2[10]="MARSHTOMP";
	while(gets(s)){
		for(int i=0;i<strlen(s);i++){
			if(s[i]==ar[0]||s[i]==ar2[0]){
				for(int j=1;j<9;){
					if(s[i+j]==ar[j]||s[i+j]==ar[j])j++;
					else{
						printf("%c",s[i]);
						break;
					}
					if(j==9){
						printf("fjxmlhx");
						i+=8;
						break;
					}
				}
			}
			else printf("%c",s[i]);
		}
		printf("\n");
	}
}
