#include <iostream>
#include <cstdlib>

/* 3. Leer dos matrices 4x5 enteras y determinar si la cantidad de números Pares
almacenados en una matriz es igual a la cantidad de números pares
almacenados en la otra matriz. */

using namespace std;
int main(int argc, char** argv)

 {
 	system("color f8");
 	int m1[100][100]={0},m2[100][100],i,j,fil,col,cta1=0,cta2=0;
 
 	cout<<endl<<endl;
 	cout<<"Ingrese el total de filas y columnas"<<endl;
 	cin>>fil>>col;
 	cout<<"\t CAPTURA MATRIZ 1 "<<endl;
 	cout<<endl;
 	for(i=0;i<fil;i++)//filas
 	{
 		for(j=0;j<col;j++)//columnas
 		{
 			cout<<"Elemento ["<<i+1<<"]["<<j+1<<"]";
 			cin>>m1[i][j];	
		 }
		 cout<<endl;
	 }
	 
	 cout<<"\t CAPTURA MATRIZ 2 "<<endl;
 	cout<<endl;
 	for(i=0;i<fil;i++)//filas
 	{
 		for(j=0;j<col;j++)//columnas
 		{
 			cout<<"Elemento ["<<i+1<<"]["<<j+1<<"]";
 			cin>>m2[i][j];	
		 }
		 cout<<endl;
	 }
	 
 	cout<<"\t ESCRITURA MATRIZ 1"<<endl;
 	cout<<endl;
 	for(i=0;i<fil;i++)
 	{
 		for(j=0;j<col;j++)
 		{
 			cout<<" ["<<m1[i][j]<<"]";
 			if(m1[i][j]%2==0)
 			{
 				cta1++;
			 }
		 }
		 cout<<endl;
		 
	}

cout<<"\t ESCRITURA MATRIZ 2"<<endl;
 	cout<<endl;
 	for(i=0;i<fil;i++)
 	{
 		for(j=0;j<col;j++)
 		{
 			cout<<" ["<<m2[i][j]<<"]";
 			if(m2[i][j]%2==0)
 			{
 				cta2++;
			 }
		 }
		 cout<<endl;
	}
if(cta1==cta2)
		 {
		 	cout<<"Tiene igual cantidad de pares "<<endl;
		 }
		 else
		 if(cta1>cta2)
		 {
		 	cout<<"La primer Matriz tiene mayor cantidad de pares "<<endl;
		 }
		 else
		 if(cta1<cta2)
		 {
		 	cout<<"La segunda Matriz tiene mayor cantidad de pares "<<endl;
		 }

 	system("pause");
	return 0;
}
