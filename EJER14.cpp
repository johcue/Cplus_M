#include <iostream>
#include <cstdlib>
/*14. Realizar un programa que permita multiplicar dos matrices teniendo en
cuenta que las columnas de la primera deben ser iguales a las filas de la segunda.*/
using namespace std;
int main(int argc, char** argv) 
{
	int m[10][10]={0},m1[10][10]={0},mr[10][10]={0},j,i,sum=0,col,fil,k;
	int fil1, col1;
	cout<<endl;
	cout<<"\t SUMA DE MATRICES "<<endl;
	cout<<"Ingrese el total de filas y columnas " ;
	cin>>fil>>col>>fil1>>col1;
	if (col==fil1)
	{
 	
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
	for( i=0;i<fil1;i++)
	{
		for (j=0;j<col1;j++)
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
 	for(i=0;i<fil1;i++)
 	{
 		for(j=0;j<col1;j++)
 		{
 			cout<<" ["<<m1[i][j]<<"]";
 			
		 }
		 cout<<endl;
	}
	cout<<endl;
	
	
	/*PROCESO DE MULTIPLICACION */
 	cout<<endl;
 	for(i=0;i<fil;i++)
 	{
 		for(j=0;j<col1;j++)
 		{
 			mr[i][j]=0;
 			for (k=0;k<fil1;k++)
 			{
 				mr[i][j]=(mr[i][j]+(m[i][k]*m1[k][j]));
			 }
 			
		 }
		
	}
	
	cout<<"ESCRITURA MATRIZ RESULTADO"<<endl;
	cout<<endl;
 	for(i=0;i<fil;i++)
 	{
 		for(j=0;j<col1;j++)
 		{
 			cout<<" ["<<mr[i][j]<<"]";
		 }
		 cout<<endl;	 
	}
	cout<<endl;
	
}
else
{
	cout<<"No se cumple la norma "<<endl;
}
	
	system("pause");
	return 0;
}
