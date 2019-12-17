#include<iostream>
#include"graph.h"
using namespace std;

void Graph::Insert_vertex()
{
	int n = 0;
	cout << "这个点连接了几条边？" << endl;
	cin >> n;
	int l[10], w[10];
	vertexs += 1;
	for (int i = 0; i < n; i++) {
		cout << "请输入你要插入的点所连边的对面顶点和其权值" << endl;
		cin >> l[i] >> w[i];
		arcs[vertexs][l[i]] = w[i];
		arcs[l[i]][vertexs] = w[i];
	}
	
	
	
}