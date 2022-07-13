#include <iostream>
#include <cstdlib>

/* 2. Leer una matriz 3x3 entera y determinar si el promedio de todos los datos
almacenados en ella, se encuentra también almacenado allí. */

using namespace std;
int main(int argc, char** argv)

 {
 	system("color f8");
 	int m[100][100]={0},i,j,fil,col,encontrado=0;
 	float prom,suma=0;
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
 			suma=suma+m[i][j];
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
		 
	}
	prom=suma/(fil*col);
		 cout<<"El promedio es "<< prom<<endl;


 	for(i=0;i<fil;i++)
 	{
 		for(j=0;j<col;j++)
 		{
 			if(prom==m[i][j])
 			{
 				encontrado=1;
 				
			 }
		 }
	}
		 cout<<endl;
		 if(encontrado==1)
		 {
		 	cout<<"El promedio hace parte de la matriz"<<endl;
		 }
 	else
 	{
 	cout<<"El promedio NO hace parte de la matriz"<<endl;	
	 }
 	system("pause");
	return 0;
}
