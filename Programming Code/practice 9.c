#include <stdio.h>
int main(){
	char name[10];

	printf("write your Name: \n");
	gets(name);
	printf("Your name is = %s", name);

	return 0;
}
