#include<iostream>
#include"graph.h"
using namespace std;

void Graph::Insert_vertex()
{
	int n = 0;
	cout << "����������˼����ߣ�" << endl;
	cin >> n;
	int l[10], w[10];
	vertexs += 1;
	for (int i = 0; i < n; i++) {
		cout << "��������Ҫ����ĵ������ߵĶ��涥�����Ȩֵ" << endl;
		cin >> l[i] >> w[i];
		arcs[vertexs][l[i]] = w[i];
		arcs[l[i]][vertexs] = w[i];
	}
	
	
	
}