#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;
using namespace std;
int o, p;
int   A[10], B, C, D;

void update() //输入到文件 
{
	cout << "文件更新：" << endl;
	ofstream out("a.txt");
	if (out) {
		cout << "请问有几个路由器？" << endl;
		cin >> o;
		out << o << endl;
		cout << "请依次输入路由器的编号：" << endl;
		for (int a = 0; a < o; a++)
		{

			cin >> A[o];
			out << A[o] << setw(2);
		}
		out << endl;
		cout << "请问路由表有几条边？" << endl;
		cin >> p;
		out << p << endl;
		for (int b = 0; b < p; b++)
		{
			cout << "请依次输入两个路由器的编号及边的长度：" << endl;
			cin >> B >> C >> D;
			out << B - 1 << setw(2) << C - 1 << setw(2) << D - 1 << endl;
		}
	}
	out.close();
	cout << "文件更新完毕！" << endl;

}