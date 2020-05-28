#pragma once

//BinaryTree2.h 에서 SearchTree의 노드 제거의 구현을 위한 함수 추가

typedef int BTData;

typedef struct _bTreeNode
{
	BTData data;
	struct _bTreeNode* left;
	struct _bTreeNode* right;
} BTreeNode;

BTreeNode* MakeBTreeNode(void);
BTData GetData(BTreeNode* bt);
void SetData(BTreeNode* bt, BTData data);

BTreeNode* GetLeftSubTree(BTreeNode* bt);
BTreeNode* GetRightSubTree(BTreeNode* bt);

void MakeLeftSubTree(BTreeNode* main, BTreeNode* sub);
void MakeRightSubTree(BTreeNode* main, BTreeNode* sub);

typedef void VisitFucPtr(BTData data);

void PreorderTravers(BTreeNode* bt, VisitFucPtr action);
void InorderTravers(BTreeNode* bt, VisitFucPtr action);
void PostorderTravers(BTreeNode* bt, VisitFucPtr action);

BTreeNode* RemoveLeftSubTree(BTreeNode* bt);
BTreeNode* RemoveRightSubTree(BTreeNode* bt);
void ChangeLeftSubTree(BTreeNode* main, BTreeNode* sub);
void ChangeRightSubTree(BTreeNode* main, BTreeNode* sub);

void ShowIntData(int data);