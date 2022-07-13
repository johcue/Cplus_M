#include <iostream>
#include <cstdlib>
#define m 10
#define n 10
/* 13. Leer una matriz 4x4 entera determinar en qué posiciones están los enteros
terminados en 0, y mostrar el promedio de los mismos.*/
using namespace std;
int main(int argc, char** argv)
{
	int m1[m][n]={0},i,j,fil,col,cta=0;
	float prom,sum=0;
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
		cout<<"\t POSICIONES TERMINADAS EN CERO "<<endl;
	for (i=0;i<fil;i++)
	{
		for (j=0;j<col;j++)
		{
			if(m1[i][j]%10==0)
			{
			cout<<"  ["<<m1[i][j]<<"] posicion ["<<i+1<<","<<j+1<<"]  ";
			sum=sum+m1[i][j];
			cta++;
			}
		}
		cout<<endl;
	}
	cout<<endl;
	if(cta>0)
	{
		prom=sum/cta;
		cout<<"La suma es "<<sum<<endl;
		cout<<"El promedio es "<<prom<<endl;
	}
	else
	{
		cout<<"No se ingresaron "<<endl;
	}
	
	system("pause");
	return 0;
	}
