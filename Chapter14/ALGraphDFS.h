#pragma once

#include "DLinkedList.h"

enum {A, B, C, D, E, F, G, H, I, J};

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

//Deph First Search 기반으로 정점정보 출력
void DFShowGraphVertex(ALGraph* pg, int startV);
