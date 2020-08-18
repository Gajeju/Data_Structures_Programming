#pragma once

#define STR_LEN 50

typedef struct _person		//key를 포함하고 있는 저장하고 싶은 데이터
{
	int ssn;
	char name[STR_LEN];
	char addr[STR_LEN];
} Person;

int GetSSN(Person* p);
void ShowPerInfo(Person* p);
Person* MakePersonData(int ssn, char* name, char* addr);
