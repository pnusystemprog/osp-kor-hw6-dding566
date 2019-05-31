#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "phone.h"
#define Max 50


extern struct Contact Phonebook[Max];
extern int size;

void printAll(void)
{	
	int i;
	
	printf("<<Dispaly all contacts in the PhoneBook>>\n");
	
	for(i=0;i<size;++i){
		printf("%s\t%s\n", Phonebook[i].name, Phonebook[i].number);

	}
}
