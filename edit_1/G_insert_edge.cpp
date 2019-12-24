#include<iostream>
#include"graph.h"
using namespace std;
void Graph::Insert_edge()
{
	int f, l, w;
	cout << "请输入你要插入的边的两个顶点和其权值" << endl;
	cin >> f >> l >> w;
	
	arcs[f-1][l-1] = w;
	arcs[l-1][f-1] = w;

}