#pragma once
#define max 10000
class Graph {
public:

	int vertexs;//�ڵ���,����
	int arcs[10][10];//����

	int* GetPort();
	void Delete_vertex();    //ɾ���ڵ�
	void Delete_edge();   //ɾ����
	void Insert_edge();
	void Insert_vertex();
	void create();

};