#include<fstream>
#include<iostream>
#pragma warning(disable:4996)
using namespace std;
int i, j, k;
int a[10], row[10], col[10], weight[10];

int read() //�����ļ� 
{
	cout << "�ļ������С�����" << endl;
	FILE *fp;

	fp = fopen("a.txt", "r");

	fscanf(fp, "%d", &i);//·������ 
	for (k = 0; k < i; k++)
	{
		fscanf(fp, "%d", &a[k]);//���� 
	}
	fscanf(fp, "%d", &j);//���� 
	for (k = 0; k < j; k++)
	{
		fscanf(fp, "%d%d%d", &row[k], &col[k], &weight[k]);//�� �� Ȩֵ 
	}
	fclose(fp);
	cout << endl << endl;

	cout << "�ļ�������ϣ�" << endl;
	return i;
}