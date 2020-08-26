#pragma once

#include "DLinkedList.h"

typedef struct _ual
{
	int numV;
	int numE;
	List* adjList;
	int* visitInfo;
} ALGraph;

void GraphInit(ALGraph* pg, int numV);
void GraphDestroy(ALGraph* pg);
void AddEdge(ALGraph* pg, int formV, int toV);
void ShowGraphEdgeInfo(ALGraph* pg);

//Deph First Search ������� �������� ���
void DFShowGraphVertex(ALGraph* pg, int startV);
