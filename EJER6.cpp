#include <iostream>
#include <cstdlib>
/* 6. Dadas dos matrices de 2 * 2 sumarlas y llevar el resultado a otra matriz. */
using namespace std;
int main(int argc, char** argv) 
{
	int m[10][10]={0},m1[10][10]={0},ms[10][10]={0},j,i,sum=0,col,fil;
	cout<<endl;
 	cout<<"\t SUMA DE MATRICES "<<endl;
	cout<<"Ingrese el total de filas y columnas " ;
 	cin>>fil>>col;
 	
	cout<<"Captura Matriz 1 "<<endl;
	for( i=0;i<fil;i++)
	{
		for (j=0;j<col;j++)
		{
			cout<<"Ingrese el ["<<i+1<<"] ["<<j+1<<"] elemento " ;
			cin>>m[i][j];
		}
		cout<<endl;
	}
	cout<<endl;
	cout<<"Captura Matriz 2 "<<endl;
	for( i=0;i<fil;i++)
	{
		for (j=0;j<col;j++)
		{
			cout<<"Ingrese el ["<<i+1<<"] ["<<j+1<<"] elemento " ;
			cin>>m1[i][j];
		}
		cout<<endl;
	}
	cout<<endl;
	
	cout<<"La Matriz 1"<<endl;
	cout<<endl;
 	for(i=0;i<fil;i++)
 	{
 		for(j=0;j<col;j++)
 		{
 			cout<<" ["<<m[i][j]<<"]";
		 }
		 cout<<endl;	 
	}
	cout<<endl;
	
	cout<<"La Matriz 2"<<endl;
 	cout<<endl;
 	for(i=0;i<fil;i++)
 	{
 		for(j=0;j<col;j++)
 		{
 			cout<<" ["<<m1[i][j]<<"]";
 			
		 }
		 cout<<endl;
	}
	cout<<endl;
	
	cout<<"\t ESCRITURA MATRIZ SUMA "<<endl;
	for(i=0;i<fil;i++)
 	{
 		for(j=0;j<col;j++)
 		{
 			ms[i][j]=m[i][j]+m1[i][j];
 			cout<<" ["<<ms[i][j]<<"]";
 			 }
		 cout<<endl;	 
	}
	cout<<endl;
	system("pause");
	return 0;
}
