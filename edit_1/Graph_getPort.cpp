#include <iostream>
#include "graph.h"

#define max INT_MAX

using namespace std;

int* Graph::GetPort(int point)
{
	bool* group=new bool[vertexs];
	int* dist=new int[vertexs];
	int* path=new int[vertexs];
	int* port=new int[vertexs];
	for(int i=0;i< vertexs;++i)   //初始化相关数组
	{
		group[i]=false;
		dist[i]=arcs[point][i];
		if (i != point && dist[i] < max) path[i] = point;
		else path[i] = -1;
	}
	group[point]=true;
	for(int i=0;i< vertexs-1;++i)   //求最短路径
	{
		int min= max;
		int v=point;
		for(int j=0;j< vertexs;++j)
		{
			if(group[j]==false && dist[j]<min)
			{
				v=j;
				min=dist[j];
			}
		}
		group[v]=true;
		for(int k=0;k< vertexs;++k)
		{
			int w=arcs[v][k];
			if(group[k]==false && w<max && dist[v]+w<dist[k])
			{
				dist[k]=dist[v]+w;
				path[k]=v;
			}
		}
	}
	cout << endl;
	
	for (int i = 0; i < vertexs; ++i)
	{
		if (path[i] == -1) port[i] = -1;
		else if (path[i] == point) port[i] = i;
		else
		{
			int temp = i;
			while (path[temp] != point)
			{
				temp = path[temp];
			}
			port[i] = temp;
		}
		if (port[i] == -1)cout << "localhost"<< endl; 
		else { cout << "TO NO." << i + 1 << "`s port is " << port[i] + 1 << " " << endl; }
	}
	return port;
}