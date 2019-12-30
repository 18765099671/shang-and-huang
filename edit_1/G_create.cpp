#include"graph.h"
#include<iostream>
#include<fstream>
#pragma warning(disable:4996)
using namespace std;
int i, j, k;

void Graph::create() {
	/*cout << "1" << endl;*/
	cout << "尚文锴" << endl;
	cout << "文件读入中。。。" << endl;
	FILE *fp;

	fp = fopen("a.txt", "r");

	fscanf(fp, "%d", &i);//路由器数 
	
	int *a = new int[i];
	
	for (k = 0; k < i; k++)
	{
		fscanf(fp, "%d", &a[k]);//结点号 
	}
	fscanf(fp, "%d", &j);//边数 
	int*row = new int[j];
	int *col = new int[j];
	int *weight = new int[j];
	for (k = 0; k < j; k++)
	{
		fscanf(fp, "%d%d%d", &row[k], &col[k], &weight[k]);//行 列 权值 
	}
	
	cout << endl << endl;
	
	cout << "文件读入完毕！" << endl;
	/**************************************************************************************************/
	vertexs = i;
	
	arcs= new int*[vertexs];
	for (int i = 0; i < vertexs; ++i)
		arcs[i] = new int[vertexs];


	

	for (int i = 0; i < vertexs; i++)//初始化矩阵
		for (int j = 0; j < vertexs; j++)
		{
			arcs[i][j] = max;
			arcs[i][i] = 0;
		}

	for (int k = 0; k < j; k++)
			{
				arcs[row[k]][col[k]] = weight[k];
				arcs[col[k]][row[k]] = weight[k];
			}

	

}