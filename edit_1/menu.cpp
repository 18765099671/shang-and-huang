#include<iostream>
#include"read.h"
#include"updata.h"
#include"graph.h"
using namespace std;
void menu()
{
	int i;
	cout << "�Ƿ��һ��ʹ�ó���" << endl;
	cout << "1���ǵ�" << endl<<"2������"<<endl;
	cin >> i;
	if (i == 1) { update(); }
	
	int p;
	
	Graph gra1;
	gra1.vertexs = read();
	
	gra1.create();
	
	cout << "**********************����·������************************\n";
	cout << "**********************��ѡ����Ӧʵ�ֹ���******************\n";
	cout << "**********************1.·�ɱ��������ӡ******************\n";
	cout << "**********************2.ɾ���ڵ�**************************\n";
	cout << "**********************3.ɾ����****************************\n";
	cout << "**********************4.��ӱ�****************************\n";
	cout << "**********************5.��ӽڵ�**************************\n";
	cout << "**********************6.�����ļ�**************************\n";
	cout << "**********************���������ѡ��**********************\n";
	cout << endl << "ѡ�";
	cin >> p;
	cout << endl;
	if (p < 1 || p>6)
	{
		printf("\n\n������Ų����ڲ˵�������������\n\n");
		cin >> p;
		cout << endl;
	}
	switch (p)
	{
	case 1:
		int i;

		cout << "��������Ҫ���ɵ�·�ɱ����ʼ·�����ǵڼ���·����" << endl;
		cin >> i;
		i--;
		/*gra1.GetPort();*/
		//�㷨

		break;      //·�ɱ��������ӡ
	case 2:/*gra1.Delete_vertex(); break; */  //ɾ���ڵ�
	case 3:/*gra1.Delete_edge(); break; */  //ɾ����
	case 4:gra1.Insert_edge(); break;
	case 5:gra1.Insert_vertex(); break;      //�˳�
	case 6:update(); break;      //�˳�
	
	}
}