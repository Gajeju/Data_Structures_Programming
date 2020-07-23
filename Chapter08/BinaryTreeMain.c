#include <stdio.h>
#pragma warning (disable : 4996)
#pragma warning (disable : 6001)
#pragma warning (disable : 6011)
#pragma warning (disable : 6031)

//#include "BinaryTree.h"
//
//int main(void)
//{
//	BTreeNode* bt1 = MakeBTreeNode();
//	BTreeNode* bt2 = MakeBTreeNode();
//	BTreeNode* bt3 = MakeBTreeNode();
//	BTreeNode* bt4 = MakeBTreeNode();
//
//	SetData(bt1, 1);
//	SetData(bt2, 2);
//	SetData(bt3, 3);
//	SetData(bt4, 4);
//
//	MakeLeftSubTree(bt1, bt2);
//	MakeRightSubTree(bt1, bt3);
//	MakeLeftSubTree(bt2, bt4);
//
//	//bt1 왼쪽 자식 노드 데이터 출력
//	printf("%d \n", GetData(GetLeftSubTree(bt1)));
//
//	//bt1 왼쪽 자식 노드의 왼쪽 자식 노드 데이터 출력
//	printf("%d \n", GetData(GetLeftSubTree(GetLeftSubTree(bt1))));
//
//	return 0;
//}


//#include "BinaryTree.h"
//
//void InorderTraverse(BTreeNode* bt)
//{
//	if (bt == NULL)
//		return;
//
//	InorderTraverse(bt->left);
//	printf("%d", bt->data);
//	InorderTraverse(bt->right);
//}
//
//int main(void)
//{
//	BTreeNode* bt1 = MakeBTreeNode();
//	BTreeNode* bt2 = MakeBTreeNode();
//	BTreeNode* bt3 = MakeBTreeNode();
//	BTreeNode* bt4 = MakeBTreeNode();
//
//	SetData(bt1, 1);
//	SetData(bt1, 2);
//	SetData(bt1, 3);
//	SetData(bt1, 4);
//
//	MakeLeftSubTree(bt1, bt2);
//	MakeRightSubTree(bt1, bt3);
//	MakeLeftSubTree(bt2, bt4);
//
//	InorderTraverse(bt1);
//
//		return 0;
//}


//#include "BinaryTree2.h"
//
//void ShowIntData(int data);
//
//int main(void)
//{
//	BTreeNode* bt1 = MakeBTreeNode();
//	BTreeNode* bt2 = MakeBTreeNode();
//	BTreeNode* bt3 = MakeBTreeNode();
//	BTreeNode* bt4 = MakeBTreeNode();
//	BTreeNode* bt5 = MakeBTreeNode();
//	BTreeNode* bt6 = MakeBTreeNode();
//
//	SetData(bt1, 1);
//	SetData(bt2, 2);
//	SetData(bt3, 3);
//	SetData(bt4, 4);
//	SetData(bt5, 5);
//	SetData(bt6, 6);
//
//	MakeLeftSubTree(bt1, bt2);
//	MakeRightSubTree(bt1, bt3);
//	MakeLeftSubTree(bt2, bt4);
//	MakeRightSubTree(bt2, bt5);
//	MakeRightSubTree(bt3, bt6);
//
//	PreorderTraverse(bt1, ShowIntData);
//	puts("");
//	InorderTraverse(bt1, ShowIntData);
//	puts("");
//	PostorderTraverse(bt1, ShowIntData);
//	puts("");
//
//	return 0;
//}
//
//void ShowIntData(int data)
//{
//	printf("%d ", data);
//}


//#include "BinaryTree2.h"
//
//void ShowIntData(int data);
//void DeleteTree(BTreeNode* bt);
//
//int main(void)
//{
//	BTreeNode* bt1 = MakeBTreeNode();
//	BTreeNode* bt2 = MakeBTreeNode();
//	BTreeNode* bt3 = MakeBTreeNode();
//	BTreeNode* bt4 = MakeBTreeNode();
//	BTreeNode* bt5 = MakeBTreeNode();
//	BTreeNode* bt6 = MakeBTreeNode();
//
//	SetData(bt1, 1);
//	SetData(bt2, 2);
//	SetData(bt3, 3);
//	SetData(bt4, 4);
//	SetData(bt5, 5);
//	SetData(bt6, 6);
//
//	MakeLeftSubTree(bt1, bt2);
//	MakeRightSubTree(bt1, bt3);
//	MakeLeftSubTree(bt2, bt4);
//	MakeRightSubTree(bt2, bt5);
//	MakeRightSubTree(bt3, bt6);
//
//	DeleteTree(bt1);
//
//	return 0;
//}
//
//void ShowIntData(int data)
//{
//	printf("%d ", data);
//}


#include "ExpressionTree.h"

int main(void)
{
	char exp[] = "12+7*";
	BTreeNode* eTree = MakeExpTree(exp);

	printf("전위 표기법의 수식 : ");
	ShowPrefixTypeExp(eTree);
	puts("");

	printf("중위 표기법의 수식 : ");
	ShowInfixTypeExp(eTree);
	puts("");

	printf("전위 표기법의 수식 : ");
	ShowPostfixTypeExp(eTree);
	puts("");

	printf("연산의 결과 : %d \n", EvaluateExpTree(eTree));

	return 0;
}