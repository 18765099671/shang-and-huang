#include<iostream>
#include "graph.h"

using namespace std;

bool Graph::Delete_vertex(int point)
{
	cout << "�ƶ���" << endl;
	if (point >= vertexs)
	{
		cout << "û�и�·������" << endl;
		return false;
	}
	for (int i = 0; i < vertexs; i++) { arcs[point][i] = max; arcs[i][point] = max;
	}
	return true;
}