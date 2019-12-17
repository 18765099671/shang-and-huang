#include"graph.h"
extern int row[10], col[10], weight[10];
void Graph::create() {

	for (int i = 0; i < vertexs; i++)//³õÊ¼»¯¾ØÕó
		for (int j = 0; j < vertexs; j++)
			arcs[i][j] = max;

	
			for (int k = 0; k < vertexs; k++)
			{
				arcs[row[k]][col[k]] = weight[k];
				arcs[col[k]][row[k]] = weight[k];
			}
}