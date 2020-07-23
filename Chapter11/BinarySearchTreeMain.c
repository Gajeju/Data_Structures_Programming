#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable : 4996)
#pragma warning (disable : 6011)
#pragma warning (disable : 6031)
#pragma warning (disable : 6001)


#include "BinarySearchTree.h"

int main(void)
{
	BTreeNode* bstRoot;
	BTreeNode* sNode;

	BSTMakeAndInit(&bstRoot);

	BSTInsert(&bstRoot, 9);
	BSTInsert(&bstRoot, 1);
	BSTInsert(&bstRoot, 6);
	BSTInsert(&bstRoot, 2);
	BSTInsert(&bstRoot, 8);
	BSTInsert(&bstRoot, 3);
	BSTInsert(&bstRoot, 5);
	
	sNode = BSTSearch(bstRoot, 1);
	if (sNode == NULL)
		printf("Å½»ö ½ÇÆÐ \n");
	else
		printf("Å½»ö¿¡ ¼º°ïÇÑ Å°ÀÇ °ª : %d \n", BSTGetNodeData(sNode));

	sNode = BSTSearch(bstRoot, 4);
	if (sNode == NULL)
		printf("Å½»ö ½ÇÆÐ \n");
	else
		printf("Å½»ö¿¡ ¼º°ïÇÑ Å°ÀÇ °ª : %d \n", BSTGetNodeData(sNode));

	sNode = BSTSearch(bstRoot, 6);
	if (sNode == NULL)
		printf("Å½»ö ½ÇÆÐ \n");
	else
		printf("Å½»ö¿¡ ¼º°ïÇÑ Å°ÀÇ °ª : %d \n", BSTGetNodeData(sNode));
	
	sNode = BSTSearch(bstRoot, 7);
	if (sNode == NULL)
		printf("Å½»ö ½ÇÆÐ \n");
	else
		printf("Å½»ö¿¡ ¼º°ïÇÑ Å°ÀÇ °ª : %d \n", BSTGetNodeData(sNode));

	return 0;
}