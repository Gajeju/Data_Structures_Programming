#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable : 4996)
#pragma warning (disable : 6001)
#pragma warning (disable : 6031)
#pragma warning (disable : 6011)



//#include "ArrayBaseStack.h"
//#include "ListBaseStack.h"
#include "CLinkedList.h"
#include "CLLBaseStack.h"

int main(void)
{
	Stack stack;
	StackInit(&stack);

	SPush(&stack, 1);	SPush(&stack, 2);
	SPush(&stack, 3);	SPush(&stack, 4);
	SPush(&stack, 5);	

	while (!SIsEmpty(&stack))
		printf("%d ", SPop(&stack));

	return 0;
}





