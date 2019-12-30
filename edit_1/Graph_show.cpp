#include <iostream>
#include "graph.h"

#define max INT_MAX

using namespace std;

void Graph::show(int* port)
{
	bool b = true;
	for (int i = 0; i < vertexs; ++i)
	{
		if (port[i] != -1) b = false;
	}
	if (b)
	{
		cout << "该节点已从网络上断开！" << endl;
		return;
	}
	cout << "destination   next" << endl;
	for (int i = 0; i < vertexs; ++i)
	{
		if (arcs[i][i]==max) continue;
		else if (port[i] == -1) cout << i+1 << "              localhost" << endl;
		else cout << i+1 << "              " << port[i]+1 << endl;
	}
}