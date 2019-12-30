#include<iostream>
#include "graph.h"

using namespace std;

bool Graph::Delete_vertex(int point)
{
	/*if(point>=vertexs) return false;
	--vertexs;

	int** newMatrix=new int*[vertexs];
	for(int i=0;i< vertexs;++i)
		newMatrix[i]=new int[vertexs];

	for(int i=0;i< vertexs +1;++i)
	{
		if(i==point) continue;
		int m=(i>point)?i-1:i;
		for(int j=0;j< vertexs +1;++j)
		{
			if(j==point) continue;
			int n=(j>point)?j-1:j;
			newMatrix[m][n]=arcs[i][j];
		}
	}

	arcs=newMatrix;*/
	for (int i = 0; i < vertexs; i++) { arcs[point][i] = max; arcs[i][point] = max;
	}
	vertexs--;
	return true;
}