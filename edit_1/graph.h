#pragma once
#include<iostream>
#define max INT_MAX
class Graph {
public:
	Graph();
	int vertexs;//�ڵ���,����
	int **arcs;//����
	
	int* GetPort(int point);
	bool Delete_vertex(int point);    //ɾ���ڵ�
	bool Delete_edge(int point_1, int point_2);   //ɾ����
	void Insert_edge();
	void Insert_vertex();
	void create();
	void writeFile(int* port,int num);
	void show(int* port);
};