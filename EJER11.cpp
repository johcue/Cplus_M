#include <iostream>
#include <cstdlib>
/*11. Realizar un programa que muestre los primeros 100 enteros de izquierda a derecha usando un arreglo bidimensional. */
using namespace std;
int main(int argc, char** argv) 
{
	int m[100][100]={0},i,j,fil,col,suma=0;
 	fil=100;
	 col=100; 
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
	}
	system ("pause");
	return 0;
}
