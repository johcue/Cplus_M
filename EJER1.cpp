#include <iostream>
#include <cstdlib>

/* 1. Realizar un programa que me permita inicializar, leer, escribir y sumar n
elementos de una matriz de dimensión [100] [100] además mostrar los pares y
su posición. */

using namespace std;
int main(int argc, char** argv)

 {
 	system("color f8");
 	int m[100][100]={0},i,j,fil,col,suma=0;
 	cout<<endl<<endl;
 	cout<<"Ingrese el total de filas y columnas"<<endl;
 	cin>>fil>>col;
 	cout<<"\t CAPTURA MATRIZ "<<endl;
 	cout<<endl;
 	for(i=0;i<fil;i++)//filas
 	{
 		for(j=0;j<col;j++)//columnas
 		{
 			cout<<"Elemento ["<<i+1<<"]["<<j+1<<"]";
 			cin>>m[i][j];
		 }
		 cout<<endl;
	 }
	 
 	cout<<"\t ESCRITURA MATRIZ"<<endl;
 	cout<<endl;
 	for(i=0;i<fil;i++)
 	{
 		for(j=0;j<col;j++)
 		{
 			cout<<" ["<<m[i][j]<<"]";
		 }
		 cout<<endl;
 	
 	cout<<"\t SUMA MATRIZ"<<endl;
 	cout<<endl;
 	for(i=0;i<fil;i++)
 	{
 		for(j=0;j<col;j++)
 		{
 			suma=suma+m[i][j];
 			
		 }
		 cout<<endl;
 }
 
 cout<<"PARES   POSICION"<<endl;
 	cout<<endl;
 	for(i=0;i<fil;i++)
 	{
 		for(j=0;j<col;j++)
 		{
 			if(m[i][j]%2==0)
 			{
 				cout<<"["<<m[i][j]<<"]     ["<<i+1<<"] ["<<i+1<<"] "<<endl;
			 }
 		}
		 }
		 cout<<endl;
 }
 	cout<<"La suma total es "<<suma<<endl;
 	
 	system("pause");
	return 0;
}
