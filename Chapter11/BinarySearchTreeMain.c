#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable : 4996)
#pragma warning (disable : 6001)
#pragma warning (disable : 6031)
#pragma warning (disable : 6011)

//#include "BinarySearchTree.h"
//
//int main(void)
//{
//	BTreeNode* bstRoot;
//	BTreeNode* sNode;
//
//	BSTMakeAndInit(&bstRoot);
//
//	BSTInset(&bstRoot, 9);
//	BSTInset(&bstRoot, 1);
//	BSTInset(&bstRoot, 6);
//	BSTInset(&bstRoot, 2);
//	BSTInset(&bstRoot, 8);
//	BSTInset(&bstRoot, 3);
//	BSTInset(&bstRoot, 5);
//
//	sNode = BSTSearch(bstRoot, 1);
//	if (sNode == NULL)
//		printf("탐색 실패 \n");
//	else
//		printf("탐색에 성공한 키의 값 : %d \n", BSTGetNodeData(sNode));
//
//	sNode = BSTSearch(bstRoot, 4);
//	if (sNode == NULL)
//		printf("탐색 실패 \n");
//	else
//		printf("탐색에 성공한 키의 값 : %d \n", BSTGetNodeData(sNode));
//
//	sNode = BSTSearch(bstRoot, 6);
//	if (sNode == NULL)
//		printf("탐색 실패 \n");
//	else
//		printf("탐색에 성공한 키의 값 : %d \n", BSTGetNodeData(sNode));
//
//	sNode = BSTSearch(bstRoot, 7);
//	if (sNode == NULL)
//		printf("탐색 실패 \n");
//	else
//		printf("탐색에 성공한 키의 값 : %d \n", BSTGetNodeData(sNode));
//
//
//	return 0;
//}

#include "BinarySearchTree2.h"

int main(void)
{
	BTreeNode* bstRoot;
	BTreeNode* sNode;
	
	BSTMakeAndInit(&bstRoot);

	BSTInsert(&bstRoot, 5);		BSTInsert(&bstRoot, 8);
	BSTInsert(&bstRoot, 1);		BSTInsert(&bstRoot, 6);
	BSTInsert(&bstRoot, 4);		BSTInsert(&bstRoot, 9);
	BSTInsert(&bstRoot, 3);		BSTInsert(&bstRoot, 2);
	BSTInsert(&bstRoot, 7);

	BSTShowAll(bstRoot);	puts("");
	sNode = BSTRemove(&bstRoot, 3);
	free(sNode);

	BSTShowAll(bstRoot);	puts("");
	sNode = BSTRemove(&bstRoot, 8);
	free(sNode);

	BSTShowAll(bstRoot);	puts("");
	sNode = BSTRemove(&bstRoot, 1);
	free(sNode);

	BSTShowAll(bstRoot);	puts("");
	sNode = BSTRemove(&bstRoot, 6);
	free(sNode);

	BSTShowAll(bstRoot);	puts("");

	return 0;
}