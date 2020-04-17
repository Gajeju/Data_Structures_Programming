#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "ListBaseStack.h"
#include "BinaryTree2.h"

BTreeNode* MakeExpTree(char exp[])
{
	Stack stack;
	BTreeNode* pnode;
	
	StackInit(&stack);

	for (int i = 0; i < strlen(exp); i++)
	{
		pnode = MakeBTreeNode();

		if (isdigit(exp[i]))
			SetData(pnode, exp[i] - '0');
		else
		{
			MakeRightSubTree(pnode, SPop(&stack));
			MakeLeftSubTree(pnode, SPop(&stack));
			SetData(pnode, exp[i]);
		}
		SPush(&stack, pnode);
	}
	return SPop(&stack);
}

int EvaluateExpTree(BTreeNode* bt)
{
	int op1, op2;

	if (GetLeftSubTree(bt) == NULL && GetRightSubTree(bt) == NULL)
		return GetData(bt);

	op1 = EvaluateExpTree(GetLeftSubTree(bt));
	op2 = EvaluateExpTree(GetRightSubTree(bt));

	switch (GetData(bt))
	{
	case '+' :
		return op1 + op2;
	case '-' :
		return op1 - op2;
	case '*':
		return op1 * op2;
	case '/':
		return op1 / op2;
	}

	return 0;
}

void ShowNodeData(int data)
{
	if (0 <= data && data <= 9)
		printf("%d ", data);
	else
		printf("%c ", data);
}

void ShowPrefixTypeExp(BTreeNode* bt)		//전위
{
	PreorderTravers(bt, ShowNodeData);
}

void ShowInfixTypeExp(BTreeNode* bt)		//중위
{
	if (bt == NULL)
		return;
	
	if (bt->left != NULL || bt->right != NULL)
		printf("(");

	InorderTravers(bt->left, ShowNodeData);
	ShowNodeData(bt->data);
	InorderTravers(bt->right, ShowNodeData);
	if (bt->left != NULL || bt->right != NULL)
		printf(")");

}

void ShowPostfixTypeExp(BTreeNode* bt)		//후위
{
	PostorderTravers(bt, ShowNodeData);
}