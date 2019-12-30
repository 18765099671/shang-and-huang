#include<iostream>
#include"updata.h"

#include"graph.h"
Graph gra1;
using namespace std;
int oo = 0;
void menu()
{
	int i = 0;
	cout << "要读入标准路由表吗？"<< endl<<"1、是的"<<endl<<"2、不是" << endl;
	cin >> i;
	if (i==1)
	{
		gra1.create();
	}
	cout << "测试" << endl;
	for (int i = 0; i < gra1.vertexs; i++)//
	{

		for (int j = 0; j < gra1.vertexs; j++)
		{
			if (gra1.arcs[i][j] == max)cout << "*    ";
			else cout << gra1.arcs[i][j] << "    ";
		}
		cout << endl << endl;
	}
	
	
	cout << "**********************网络路由生成************************\n";
	cout << "**********************请选择相应实现功能******************\n";
	cout << "**********************1.路由表输出并打印******************\n";
	cout << "**********************2.删除节点**************************\n";
	cout << "**********************3.删除边****************************\n";
	cout << "**********************4.填加边****************************\n";
	cout << "**********************5.添加节点**************************\n";
	cout << "**********************6.更新文件**************************\n";
	cout << "**********************请输入你的选择**********************\n";
	cout << endl << "选项：";
	int p;
	cin >> p;
	cout << endl;
	if (p < 1 || p>6)
	{
		printf("\n\n输入序号不属于菜单，请重新输入\n\n");
		cin >> p;
		cout << endl;
	}
	switch (p)
	{
	case 1:
		cout << "请输入第几个路由器？" << endl;
		
		cin >> oo;
		if (gra1.arcs[oo-1][oo-1] != max)
		{
			cout << "第" << oo << "个路由器：";
			int* temp = gra1.GetPort(oo - 1);
			gra1.writeFile(temp, oo);
			cout << endl;
		}
		else cout << "结点已被删除。" << endl;
		
		//算法

		break;      //路由表输出并打印
	case 2: {int a = 0; cout << "请问要删除哪个路由器？" << endl; cin >> a; gra1.Delete_vertex(a-1);}break;   //删除节点
	case 3: {int a = 0; int b = 0; cout << "请问要删除的边两边是哪两个路由器？" << endl; cin >> a>>b; gra1.Delete_edge(a-1, b-1); } break;   //删除边
	case 4:gra1.Insert_edge(); break;
	case 5:gra1.Insert_vertex(); break;      //退出
	case 6:update(); break;      //退出
	
	}
}