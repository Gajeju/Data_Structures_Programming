#pragma once

#include "DLinkedList.h"

typedef struct _ual
{
	int numV;
	int numE;
	List* adjList;
	int* visitInfo;
} ALGraph;

void GraphInit(ALGraph* pg, int nv);
void GraphDestroy(ALGraph* pg);
void AddEdge(ALGraph* pg, int froV, int toV);
void ShowGraphEdgeInfo(ALGraph* pg);

//Deph First Search ������� �������� ���
void DFShowGraphVertex(ALGraph* pg, int startV);
