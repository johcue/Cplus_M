#include <iostream>
#include <cstdlib>
/*7. Dada una matriz de 4*4 mostrar en pantalla la suma de sus filas almacenarlas
en un vector y determinar cuál es la mayor suma y su posición.*/
using namespace std;
int main(int argc, char** argv) 
{
	int m[10][10]={0},j,i,col,fil,posm;
	int v[10]={0},may, sumf;
	cout<<endl;
	
	cout<<"Ingrese el total de filas y columnas " ;
	cin>>fil>>col;
	
	cout<<"\t Captura Matriz "<<endl;
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
	
	
	cout<<"\t La Matriz"<<endl;
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
	
	cout<<"\t Suma Filas XD  "<<endl;
	for( i=0;i<fil;i++)
	{
		sumf=0;
		for (j=0;j<col;j++)
		{
			sumf=sumf+m[i][j];
			
		}
		cout<<"La suma de la fila de "<<i+1<<" fila es "<<sumf<<endl;
		v[i]=sumf;
		cout<<endl;
	}
	cout<<"Vector Filas"<<endl;
	may=-999999;
	for(i=0;i<fil;i++)
	{
		cout<< "["<<v[i]<<"]";
		if(v[i]>may)
		{
			may=v[i];
			posm=i;
		}
	}
	cout<<"El mayor elemento es "<<may<<" en la posicion "<<posm+1<<endl;
	cout<<endl;

	system("pause");
	return 0;
	
	
}
