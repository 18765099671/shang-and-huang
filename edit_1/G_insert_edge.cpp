#include<iostream>
#include"graph.h"
using namespace std;
void Graph::Insert_edge()
{
	int f, l, w;
	cout << "��������Ҫ����ıߵ������������Ȩֵ" << endl;
	cin >> f >> l >> w;
	
	arcs[f-1][l-1] = w;
	arcs[l-1][f-1] = w;

}