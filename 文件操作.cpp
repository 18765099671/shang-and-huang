#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
int o,p;
int   A[10],B,C,D;
int i, j, k;
int   a[10],row[10],col[10],weight[10];

void update() //输入到文件 
{
	ofstream out("a.txt");
	if(out){
		cout<<"请问有几个路由器？"<<endl;
		cin>>o;
		out<<o<<endl;
		cout<<"请依次输入路由器的编号："<<endl;	
		for(int a=0;a<o;a++)
		{
		
		cin>>A[o];
		out <<A[o]<<setw(2);
		} 
		out<<endl;
		cout<<"请问路由表有几条边？"<<endl;
		cin>>p;
		out<<p<<endl;
		for(int b=0;b<p;b++)
		{
			cout<<"请依次输入两个路由器的编号及边的长度："<<endl;
			cin>>B>>C>>D;
			out<<B-1<<setw(2)<<C-1<<setw(2)<<D-1<<endl;
		 } 
	}
	out.close();
	
	
}

void read() //读入文件 
{

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
	
	
}
int main(){
	//update();         //注意：i是点数，j是边数 ，a[n]是顶点号，row[k], col[k], weight[k]分别是 行 列 权值
	read();
	cout<<"几个点："<<i<<endl; 
	for(int y=0;y<i;y++){
		cout<<a[y]<<endl;
	
	}
	cout<<"几条边："<<j<<endl; 
	for(int y=0;y<j;y++){
		cout<<row[y]<<setw(2)<<col[y]<<setw(2)<<weight[y]<<endl;
	
		
	}
	
} 
