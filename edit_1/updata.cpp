#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;
using namespace std;
int o, p;
int   A[10], B, C, D;

void update() //���뵽�ļ� 
{
	cout << "�ļ����£�" << endl;
	ofstream out("a.txt");
	if (out) {
		cout << "�����м���·������" << endl;
		cin >> o;
		out << o << endl;
		cout << "����������·�����ı�ţ�" << endl;
		for (int a = 0; a < o; a++)
		{

			cin >> A[o];
			out << A[o] << setw(2);
		}
		out << endl;
		cout << "����·�ɱ��м����ߣ�" << endl;
		cin >> p;
		out << p << endl;
		for (int b = 0; b < p; b++)
		{
			cout << "��������������·�����ı�ż��ߵĳ��ȣ�" << endl;
			cin >> B >> C >> D;
			out << B - 1 << setw(2) << C - 1 << setw(2) << D - 1 << endl;
		}
	}
	out.close();
	cout << "�ļ�������ϣ�" << endl;

}