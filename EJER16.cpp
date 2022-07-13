#include <iostream>
#include <cstdlib>
#define m 10
#define n 10
/* 16. Leer una matriz 5x5 entera y determinar en qué posición exacta se
encuentra el mayor múltiplo de 8..*/
using namespace std;
int main(int argc, char** argv)
{
	int m1[m][n]={0},i,j,fil,col,cta=0,may=-999999,posm,posj;

	cout<<endl;
	cout<<"Por favor ingrese el total de filas y de columnas ";
	cin>>fil>>col;
	cout<<endl;
	cout<<"\t CAPTURA MATRIZ "<<endl;
	for (i=0;i<fil;i++)
	{
		for (j=0;j<col;j++)
		{
			cout<<" Digite el ("<<i+1<<","<<j+1<<") elemento ";
			cin>>m1[i][j];
		}
		cout<<endl;
	}
	cout<<endl;
	cout<<"\t ESCRITURA MATRIZ "<<endl;
	for (i=0;i<fil;i++)
	{
		for (j=0;j<col;j++)
		{
			
			cout<<"        ["<<m1[i][j]<<"] ";
	
		}
		cout<<endl;
	}
	cout<<endl;
	may=m1[0][0],posm=0, posj=0;
	cout<<"\t POSICIONES MULTIPLOS DE 8 "<<endl;
	for (i=0;i<fil;i++)
	{
		for (j=0;j<col;j++)
		{
			
			if(m1[i][j]%8==0)
			{
				cout<<"  ["<<m1[i][j]<<"] posicion ["<<i+1<<","<<j+1<<"]  ";
				cta++;
				if(m1[i][j]>may)
				{
					may=m1[i][j];
					posm=i;
					posj=j;
				
				}
			}
		}
		cout<<endl;
	}
	if(cta>0)
	{
		cout<<"El mayor numero es"<<may<<" posicion "<<posm<<","<<posj<<endl;
	}
	else
	{
		cout<<"No hubo numeros terminados en cinco"<<endl;
	}
	system("pause");
	return 0;
	}
