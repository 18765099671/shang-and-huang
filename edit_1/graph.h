#pragma once
#define max 10000
class Graph {
public:

	int vertexs;//节点数,边数
	int arcs[10][10];//矩阵

	int* GetPort();
	void Delete_vertex();    //删除节点
	void Delete_edge();   //删除边
	void Insert_edge();
	void Insert_vertex();
	void create();

};