#include<iostream>
#include"graph.h"
using namespace std;

void Graph::Insert_vertex()
{	
	int n = 0;
	cout << "����������˼����ߣ�" << endl;
	cin >> n;
	int l[10], w[10];
	++vertexs;
	int** newMatrix = new int*[vertexs];
	for (int i = 0; i < vertexs; ++i)
		newMatrix[i] = new int[vertexs];
	for (int i = 0; i < vertexs; i++)//��ʼ������
		for (int j = 0; j < vertexs; j++)
		{
			newMatrix[i][j] = max;
			newMatrix[i][i] = 0;
		}
	for (int i = 0; i < vertexs-1 ; ++i)
	{
		for (int j = 0; j < vertexs-1 ; ++j)
		{
			newMatrix[i][j] = arcs[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		cout << "��������Ҫ����ĵ������ߵĶ��涥�����Ȩֵ" << endl;
		cin >> l[i] >> w[i];
		newMatrix[vertexs-1][l[i]-1] = w[i];
		newMatrix[l[i]-1][vertexs-1] = w[i];
	}
	
	arcs = newMatrix;
	
}