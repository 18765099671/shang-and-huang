#pragma once
//邻接表中存储边信息的节点
struct node
{
	int vertex_1;
	int vertex_2;
	int weight;
	node* next = nullptr;
};