#include <stdio.h>
#include "ALGraphDFS.h"


void GraphInit(ALGraph* pg, int numV);
void GraphDestroy(ALGraph* pg);
void AddEdge(ALGraph* pg, int formV, int toV);
void ShowGraphEdgeInfo(ALGraph* pg);

//Deph First Search ������� �������� ���
void DFShowGraphVertex(ALGraph* pg, int startV);
