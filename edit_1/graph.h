#pragma once
#include<iostream>
#define max INT_MAX
class Graph {
public:
	Graph();
	int vertexs;//节点数,边数
	int **arcs;//矩阵
	
	int* GetPort(int point);
	bool Delete_vertex(int point);    //删除节点
	bool Delete_edge(int point_1, int point_2);   //删除边
	void Insert_edge();
	void Insert_vertex();
	void create();
	void writeFile(int* port,int num);
	void show(int* port);
};