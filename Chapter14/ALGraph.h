#pragma once

#include "DLinkedList.h"

enum {A, B, C, D, E, F, G, H, I, J};

typedef struct _ual
{
	int numV;
	int numE;
	List* adjList;
} ALGraph;

//초기화
void GraphInit(ALGraph* pg, int nv);
//리소스 해제
void GraphDestroy(ALGraph* pg);
//간선 추가
void AddEdge(ALGraph* pg, int fromV, int toV);
//간선 정보 출력
void ShowGraphEdgeInfo(ALGraph* pg);
