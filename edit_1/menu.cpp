#include<iostream>
#include"updata.h"

#include"graph.h"
Graph gra1;
using namespace std;
int oo = 0;
void menu()
{
	int i = 0;
	cout << "Ҫ�����׼·�ɱ���"<< endl<<"1���ǵ�"<<endl<<"2������" << endl;
	cin >> i;
	if (i==1)
	{
		gra1.create();
	}
	cout << "����" << endl;
	for (int i = 0; i < gra1.vertexs; i++)//
	{

		for (int j = 0; j < gra1.vertexs; j++)
		{
			if (gra1.arcs[i][j] == max)cout << "*    ";
			else cout << gra1.arcs[i][j] << "    ";
		}
		cout << endl << endl;
	}
	
	
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
	int p;
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
		cout << "������ڼ���·������" << endl;
		
		cin >> oo;
		if (gra1.arcs[oo-1][oo-1] != max)
		{
			cout << "��" << oo << "��·������";
			int* temp = gra1.GetPort(oo - 1);
			gra1.writeFile(temp, oo);
			cout << endl;
		}
		else cout << "����ѱ�ɾ����" << endl;
		
		//�㷨

		break;      //·�ɱ��������ӡ
	case 2: {int a = 0; cout << "����Ҫɾ���ĸ�·������" << endl; cin >> a; gra1.Delete_vertex(a-1);}break;   //ɾ���ڵ�
	case 3: {int a = 0; int b = 0; cout << "����Ҫɾ���ı�������������·������" << endl; cin >> a>>b; gra1.Delete_edge(a-1, b-1); } break;   //ɾ����
	case 4:gra1.Insert_edge(); break;
	case 5:gra1.Insert_vertex(); break;      //�˳�
	case 6:update(); break;      //�˳�
	
	}
}