#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable : 4996)
#pragma warning (disable : 6001)
#pragma warning (disable : 6031)
#pragma warning (disable : 6011)



//#include "ArrayBaseStack.h"
//#include "ListBaseStack.h"

//#include "CLinkedList.h"
//#include "CLLBaseStack.h"
//
//int main(void)
//{
//	Stack stack;
//	StackInit(&stack);
//
//	SPush(&stack, 1);	SPush(&stack, 2);
//	SPush(&stack, 3);	SPush(&stack, 4);
//	SPush(&stack, 5);	
//
//	while (!SIsEmpty(&stack))
//		printf("%d ", SPop(&stack));
//
//	return 0;
//}



//스택을 활용한 후위연산법으로 변환

//#include "InfixToPostfix.h"
//
//int main(void)
//{
//	char exp1[] = "1+2+3";
//	char exp2[] = "(1+2)*3";
//	char exp3[] = "((1-2)+3)*(5-2)";
//	char exp4[] = "3+2*3+4";
//
//	ConvToRPNExp(exp1);
//	ConvToRPNExp(exp2);
//	ConvToRPNExp(exp3);
//	ConvToRPNExp(exp4);
//
//	printf("%s \n", exp1);
//	printf("%s \n", exp2);
//	printf("%s \n", exp3);
//	printf("%s \n", exp4);
//
//	return 0;
//}


//후위연산법의 계산

//#include <stdio.h>
//#include "InfixToPostfix.h"
//#include "PostCalculator.h"
//
//int main(void)
//{
//	char postExp1[] = "4*2+8";
//	char postExp2[] = "1*(2+3)/4";
//
//	ConvToRPNExp(postExp1);
//	ConvToRPNExp(postExp2);
//
//	printf("%s = %d \n", postExp1, EvalRPNExp(postExp1));
//	printf("%s = %d \n", postExp2, EvalRPNExp(postExp2));
//
//	return 0;
//}


//계산기 완성

#include "InfixCalculator.h"

int main(void)
{
	char exp1[] = "1+2*3";
	char exp2[] = "(1+2)*3";
	char exp3[] = "((1-2)+3)*(5-2)";

	printf("%s = %d \n", exp1, EvalInfixExp(exp1));
	printf("%s = %d \n", exp2, EvalInfixExp(exp2));
	printf("%s = %d \n", exp3, EvalInfixExp(exp3));

	return 0;
}