#include<iostream>
#include"graph.h"
using namespace std;
void Graph::Insert_edge()
{
	int f, l, w;
	cout << "��������Ҫ����ıߵ������������Ȩֵ" << endl;
	cin >> f >> l >> w;
	int i = 0; int j = 0;
	arcs[f][l] = w;
	arcs[l][f] = w;

}