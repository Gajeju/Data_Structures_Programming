#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "ListBaseStack.h"

int GetOpPrec(char op)
{
	switch (op)
	{
	case '*':
	case '/':
		return 5;
	case '+':
	case '-':
		return 4;
	case '(':
		return 1;
	}

	return -1;
}

int WhoPrecOp(char op1, char op2)
{
	int op1Prec = GetOpPrec(op1);
	int op2Prec = GetOpPrec(op2);

	if (op1Prec > op2Prec)
		return 1;
	else if (op1Prec < op2Prec)
		return -1;
	else
		return 0;
}

void ConvToRPNExp(char exp[])
{
	Stack stack;
	int expLen = strlen(exp);
	char* convExp = (char*)malloc(expLen + 1);

}