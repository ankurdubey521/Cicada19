#include<unistd.h>
#include<stdio.h>
#include<string.h>

void print_flag(){
	system("cat flag.txt");
}

int main(){
	char place[9];
	char buffer[64];
	setvbuf(stdout,NULL,_IONBF,0);
	printf("Flow me till you get Tired and take the flag\n");
	gets(buffer);
	if(memcmp(place,"gimmeflag",9)==0) {
		printf("Good! boii take it here's the flag\n");
		print_flag();
	} else {
		printf("What!! you got tired in this\nGo Away!\n");
	}
	return 0;
}
