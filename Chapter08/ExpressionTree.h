#pragma once

#include "BinaryTree2.h"

BTreeNode* MakeExpTree(char exp[]);
int EvaluateExpTree(BTreeNode* bt);

void ShowPrefixTypeExp(BTreeNode* bt);		//전위
void ShowInfixTypeExp(BTreeNode* bt);		//중위
void ShowPostfixTypeExp(BTreeNode* bt);		//후위
