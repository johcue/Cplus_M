#include <iostream>
#include <cstdlib>

/* 5. Dada una matriz de 3*3 hallar el promedio de los números mayores de cada fila.*/

using namespace std;
int main(int argc, char** argv)

 {
 	system("color f8");
 	int m[100][100]={0},i,j,fil,col,cta=0,may=-999999;
 	float prom,suma=0;
 
 	cout<<endl<<endl;
 	cout<<"Ingrese el total de filas y columnas"<<endl;
 	cin>>fil>>col;
 	
 	cout<<"\t CAPTURA MATRIZ  "<<endl;
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
	 
 	cout<<"\t ESCRITURA MATRIZ "<<endl;
 	cout<<endl;
 	may=m[0][0];
 	for(i=0;i<fil;i++)
 	{
 		for(j=0;j<col;j++)
 		{
 			cout<<" ["<<m[i][j]<<"]";
 			if(m[i][j]>may)
 			{
 				may=m[i][j];
 			
			 }
		 }
		 cout<<endl;	 
	}
	
	cout<<"\t MAYORES DE CADA FILA "<<endl;
 	cout<<endl;
 	may=m[0][0];
 	for(i=0;i<fil;i++)
 	{
 		may=m[0][j];
 		for(j=0;j<col;j++)
 		{
 			if(m[i][j]>may)
 			{
 				may=m[i][j];
			 }
		 }
		 cout<<"El mayor de la "<<i+1<<" fila es "<<may<<endl;
		 suma=suma+may;
		 cout<<endl;	 
	}
	prom=suma/fil;
	cout<<"La suma de los mayores es "<<suma<<endl;
	cout<<"El promedio de los mayores es "<<prom<<endl;  

 	system("pause");
	return 0;
}
