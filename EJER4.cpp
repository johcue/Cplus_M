#include <iostream>
#include <cstdlib>

/* 4. leer una matriz de 4 * 4 entera y determinar en qué fila y en que columna se
encuentra el número mayor, validar si el mayor esta repetido, mostrar cuantas
veces. */

using namespace std;
int main(int argc, char** argv)

 {
 	system("color f8");
 	int m[100][100]={0},i,j,fil,col,cta=0,may=-999999,posi=0,posj=0,rep=0;
 
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
 				posi=i;
 				posj=j;
			 }
		 }
		 cout<<endl;	 
	}
	
	for(i=0;i<fil;i++)
 	{
 		for(j=0;j<col;j++)
 		{
 			if(m[i][j]==may)
 			{
 				rep++;
			 }
		 }
		 cout<<endl;	 
	}
cout<<"El mayor elemento es "<<may<<" posi ["<<posi+1<<"]   posj ["<<posj+1<<"]";
cout<<" y esta "<<rep<<" veces en la Matriz"<<endl;

 	system("pause");
	return 0;
}
