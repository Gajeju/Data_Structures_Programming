#include <stdio.h>
#include "ALGraphDFS.h"


void GraphInit(ALGraph* pg, int numV);
void GraphDestroy(ALGraph* pg);
void AddEdge(ALGraph* pg, int formV, int toV);
void ShowGraphEdgeInfo(ALGraph* pg);

//Deph First Search 기반으로 정점정보 출력
void DFShowGraphVertex(ALGraph* pg, int startV);
