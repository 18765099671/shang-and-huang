#include<iostream>
#include"graph.h"
using namespace std;
void Graph::Insert_edge()
{
	int f, l, w;
	cout << "��������Ҫ����ıߵ������������Ȩֵ" << endl;
	cin >> f >> l >> w;
	
	arcs[f][l] = w;
	arcs[l][f] = w;

}