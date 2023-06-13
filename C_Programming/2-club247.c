// A program demonstrating clubhouse entry restrictions to underage persons
#include <stdio.h>
int main(){
	// variables declaration
	char username[20];	
	int userage;
	
	printf("Welcome to club247... \nIt's nice having you here today\n");
	printf("This program checks your age before entry");
	printf("\n\nWhat's your name? ");
    scanf("%s",&username);
	
	printf("How old are you? ");
	scanf("%d",&userage);
	
	// condition for age >= 18
	if (userage >= 18){
		printf("\nHi %s, you are welcome to the club.\nPlease enjoy yourself",username);
	}
	// condition otherwise
	else{
		printf("\nSorry %s, you are not allowed in here.",username);
	}


	return 0;
}
        
