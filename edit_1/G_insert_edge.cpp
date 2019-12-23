#include<iostream>
#include"graph.h"
using namespace std;
void Graph::Insert_edge()
{
	int f, l, w;
	cout << "请输入你要插入的边的两个顶点和其权值" << endl;
	cin >> f >> l >> w;
	
	arcs[f][l] = w;
	arcs[l][f] = w;

}