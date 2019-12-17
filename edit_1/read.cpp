#include<fstream>
#include<iostream>
#pragma warning(disable:4996)
using namespace std;
int i, j, k;
int a[10], row[10], col[10], weight[10];

int read() //读入文件 
{
	cout << "文件读入中。。。" << endl;
	FILE *fp;

	fp = fopen("a.txt", "r");

	fscanf(fp, "%d", &i);//路由器数 
	for (k = 0; k < i; k++)
	{
		fscanf(fp, "%d", &a[k]);//结点号 
	}
	fscanf(fp, "%d", &j);//边数 
	for (k = 0; k < j; k++)
	{
		fscanf(fp, "%d%d%d", &row[k], &col[k], &weight[k]);//行 列 权值 
	}
	fclose(fp);
	cout << endl << endl;

	cout << "文件读入完毕！" << endl;
	return i;
}