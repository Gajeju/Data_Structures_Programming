#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "NameCard.h"
#pragma warning (disable : 4996)

NameCard* MakeNameCard(char* name, char* phone)
{
	NameCard* newCard = (NameCard*)malloc(sizeof(NameCard));
	strcpy(newCard->name, name);
	strcpy(newCard->phone, phone);
	return newCard;
}

void ShowNameCardInfo(NameCard* pcard)
{
	printf("[�̸�] : %s \n", pcard->name);
	printf("[��ȣ] : %s \n\n", pcard->phone);
}

int Namecompare(NameCard* pcard, char* name)
{
	return strcmp(pcard->name, name);
}

void ChangePhoneNum(NameCard* pcard, char* phone)
{
	strcpy(pcard->phone, phone);
}