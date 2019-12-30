#include<iostream>
#include"graph.h"



using namespace std;

bool Graph::Delete_edge(int point_1,int point_2)
{
	if (point_1 >= vertexs || point_2 >= vertexs)
	{
		cout << "有路由器不存在！" << endl;
		return false;
	}
	if(arcs[point_1][point_2]== max) return false;
	arcs[point_1][point_2]=max;
	arcs[point_2][point_1]=max;
	return true;
}