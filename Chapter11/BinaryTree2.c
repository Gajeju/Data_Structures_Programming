//#include <stdio.h>
//#include <stdlib.h>
//#include "BinaryTree2.h"
//
//BTreeNode* MakeBTreeNode(void)
//{
//	BTreeNode* newNode = (BTreeNode*)malloc(sizeof(BTreeNode));
//	newNode->left = NULL;
//	newNode->right = NULL;
//
//	return newNode;
//}
//
//BTData GetData(BTreeNode* bt)
//{
//	return bt->data;
//}
//
//void SetData(BTreeNode* bt, BTData data)
//{
//	bt->data = data;
//}
//
//BTreeNode* GetLeftSubTree(BTreeNode* bt)
//{
//	return bt->left;
//}
//
//BTreeNode* GetRightSubTree(BTreeNode* bt)
//{
//	return bt->right;
//}
//
//void MakeLeftSubTree(BTreeNode* main, BTreeNode* sub)
//{
//	main->left = sub;
//}
//
//void MakeRightSubTree(BTreeNode* main, BTreeNode* sub)
//{
//	main->right = sub;
//}
//
//void PreorderTravers(BTreeNode* bt, VisitFucPtr action)
//{
//	if (bt == NULL)
//		return;
//
//	action(bt->data);
//	PreorderTravers(bt->left, action);
//	PreorderTravers(bt->right, action);
//}
//
//void InorderTravers(BTreeNode * bt, VisitFucPtr action)
//{
//	if (bt == NULL)
//		return;
//
//	InorderTravers(bt->left, action);
//	action(bt->data);
//	InorderTravers(bt->right, action);
//}
//
//void PostorderTravers(BTreeNode * bt, VisitFucPtr action)
//{
//	if (bt == NULL)
//		return;
//
//	PostorderTravers(bt->left, action);
//	PostorderTravers(bt->right, action);
//	action(bt->data);
//}
//
//void DeleteTree(BTreeNode * bt)
//{
//	if (bt == NULL)
//		return;
//
//	DeleteTree(bt->left);
//	DeleteTree(bt->right);
//
//	free(bt);
//}