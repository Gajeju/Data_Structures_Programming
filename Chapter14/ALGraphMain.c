#include <stdio.h>
#pragma warning (disable : 4996)


//#include "ALGraph.h"
//
//int main(void)
//{
//	ALGraph graph;
//	GraphInit(&graph, 5);
//
//	AddEdge(&graph, A, B);
//	AddEdge(&graph, A, D);
//	AddEdge(&graph, B, C);
//	AddEdge(&graph, C, D);
//	AddEdge(&graph, D, E);
//	AddEdge(&graph, E, A);
//
//	ShowGraphEdgeInfo(&graph);
//	GraphDestroy(&graph);
//
//	return 0;
//}


#include "ALGraphDFS.h"

int main(void)
{
	ALGraph graph;
	GraphInit(&graph, 7);
	
	AddEdge(&graph, A, B);
	AddEdge(&graph, A, D);
	AddEdge(&graph, B, C);
	AddEdge(&graph, D, C);
	AddEdge(&graph, D, E);
	AddEdge(&graph, E, F);
	AddEdge(&graph, E, G);

	ShowGraphEdgeInfo(&graph);

	DFShowGraphVertex(&graph, A); puts("");
	DFShowGraphVertex(&graph, C); puts("");
	DFShowGraphVertex(&graph, E); puts("");
	DFShowGraphVertex(&graph, G); puts("");
	
	GraphDestroy(&graph);

	return 0;
}