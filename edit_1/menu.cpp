#include<iostream>
#include"read.h"
#include"updata.h"
#include"graph.h"
using namespace std;
void menu()
{
	int i;
	cout << "是否第一次使用程序？" << endl;
	cout << "1、是的" << endl<<"2、不是"<<endl;
	cin >> i;
	if (i == 1) { update(); }
	
	int p;
	
	Graph gra1;
	gra1.vertexs = read();
	
	gra1.create();
	
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
		int i;

		cout << "请输入你要生成的路由表的起始路由器是第几个路由器" << endl;
		cin >> i;
		i--;
		/*gra1.GetPort();*/
		//算法

		break;      //路由表输出并打印
	case 2:/*gra1.Delete_vertex(); break; */  //删除节点
	case 3:/*gra1.Delete_edge(); break; */  //删除边
	case 4:gra1.Insert_edge(); break;
	case 5:gra1.Insert_vertex(); break;      //退出
	case 6:update(); break;      //退出
	
	}
}