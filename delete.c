#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "phone.h"
#define Max 50

extern struct Contact Phonebook[Max];
extern int size;

void deleteByName(void)
{	
	int i;
	char name1[20];
	printf("Enter a name to delete: ");
	scanf("%s", name1);
	
	for(i=0;i<size;++i){
		if(strcmp(name1,Phonebook[i].name) == 0){
			break;
		}
	}
	if(i == size)
	{
		printf("Oops! %s is not in the PhoneBook\n", name1);
	}
	else
	{
		printf("%s is deleted...\n", name1);
		for(i=i;i<size-1;i++)
		{
			strcpy(Phonebook[i].name, Phonebook[i+1].name);
			strcpy(Phonebook[i].number, Phonebook[i+1].number);
		}
	}
	--size;
}	
