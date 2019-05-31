#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "phone.h"
#define Max 50


extern struct Contact Phonebook[Max];
extern int size;

void  registerPhoneData(void){
	char passward[] = "qw12";
	char check[10];
	static int i = 0;
back:
	printf("Password: ");
	scanf("%s", check);
	if (strcmp(passward, check)==0)
	{
		printf("New User Name: ");
		scanf("%s", Phonebook[size].name);
		printf("PhoneNumber: ");
		scanf("%s", Phonebook[size].number);
		size = size+1;
	}
	else{
		if (i == 0)
			printf("Not Matched!!!\n");
		if (i == 1)
			printf("Not Matched (twice)!!!\n");		
		if (i == 2)
			printf("Not Matched (3 times)!!!\n");		
		if (i == 3)
			printf("You are not allowed to accees PhoneBook.\n");
	}
	i = i+1;
	if (i == 4){
		exit(0);
	}
}
