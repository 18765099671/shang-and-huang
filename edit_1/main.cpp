#include"menu.h"
#include<iostream>
#include"updata.h"
#include"graph.h"
using namespace std;



int main()
{
	
	while(1){
	int l;
	
	menu(); //菜单函数
	cout << "是否清屏？" << endl;
	cout << "1、是的" << endl << "2、不是" << endl;
	cin >> l;
	cout << endl;
		if (l == 1)system("cls");
}

	return 0;

}