#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "phone.h"
#define Max 50


extern struct Contact Phonebook[Max];
extern int size;

void searchByName(void)
{	
	int i, j = 0;
	char name1[20];
	printf("Enter a name to search: ");
	scanf("%s", name1);
	
	for(i=0;i<size;++i){
		if(strcmp(name1,Phonebook[i].name) == 0){
			printf("%s\t%s\n", Phonebook[i].name, Phonebook[i].number);
			j += 1;
		}
	if(j == 0){
		printf("Oops! %s is not in the PhoneBook", name1);
		}
	}
}
