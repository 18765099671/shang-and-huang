#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
int o,p;
int   A[10],B,C,D;
int i, j, k;
int   a[10],row[10],col[10],weight[10];

void update() //���뵽�ļ� 
{
	ofstream out("a.txt");
	if(out){
		cout<<"�����м���·������"<<endl;
		cin>>o;
		out<<o<<endl;
		cout<<"����������·�����ı�ţ�"<<endl;	
		for(int a=0;a<o;a++)
		{
		
		cin>>A[o];
		out <<A[o]<<setw(2);
		} 
		out<<endl;
		cout<<"����·�ɱ��м����ߣ�"<<endl;
		cin>>p;
		out<<p<<endl;
		for(int b=0;b<p;b++)
		{
			cout<<"��������������·�����ı�ż��ߵĳ��ȣ�"<<endl;
			cin>>B>>C>>D;
			out<<B-1<<setw(2)<<C-1<<setw(2)<<D-1<<endl;
		 } 
	}
	out.close();
	
	
}

void read() //�����ļ� 
{

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
	
	
}
int main(){
	//update();         //ע�⣺i�ǵ�����j�Ǳ��� ��a[n]�Ƕ���ţ�row[k], col[k], weight[k]�ֱ��� �� �� Ȩֵ
	read();
	cout<<"�����㣺"<<i<<endl; 
	for(int y=0;y<i;y++){
		cout<<a[y]<<endl;
	
	}
	cout<<"�����ߣ�"<<j<<endl; 
	for(int y=0;y<j;y++){
		cout<<row[y]<<setw(2)<<col[y]<<setw(2)<<weight[y]<<endl;
	
		
	}
	
} 
