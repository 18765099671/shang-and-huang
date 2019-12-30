#include<iostream>
#include<string>
#include<fstream>
#include"graph.h"

using namespace std;

void Graph::writeFile(int* port,int num)
{
	bool b = true;
	for (int i = 0; i < vertexs; ++i)
	{
		if (port[i] != -1) b = false;
	}
	if (b)
	{
		return;
	}
	string s1("list"), s2(to_string(num)), s3(".txt");
	string name = s1 + s2 + s3;
	ofstream file;
	file.open(name);
	if (!file.good())
	{
		cout << "文件写入失败" << endl;
		return;
	}
	file << "目标路由器   下一跳" << endl;
	for (int i = 0; i < vertexs; ++i)
	{
		if (port[i] == -1)
		{
			file << i +1<< "     localhost" << endl;
		}
		else if (port[i] == -2)
		{
			continue;
		}
		else
		{
			file << i + 1 << "     " << port[i] + 1 << endl;
		}
	}
}