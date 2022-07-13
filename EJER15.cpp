#include <iostream>
#include <cstdlib>
#define m 10
#define n 10
/* 15. Leer una matriz 5x4 entera y determinar cuántos múltiplos de 5 hay
almacenados en ella.*/
using namespace std;
int main(int argc, char** argv)
{
	int m1[m][n]={0},i,j,fil,col,cta=0;

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
	cout<<"\t ESCRITURA NUMEROS TERMINADOS EN 5 "<<endl;
	for (i=0;i<fil;i++)
	{
		for (j=0;j<col;j++)
		{
			
			if(m1[i][j]%5==0)
			{
				cout<<"        ["<<m1[i][j]<<"] ";
				cta++;
			}
			
	
		}
		cout<<endl;
	}
	if(cta>0)
	{
		cout<<"Los numeros terminados en cinco son "<<cta<<endl;
	}
	else
	{
		cout<<"No hubo numeros terminados en cinco"<<endl;
	}
	system("pause");
	return 0;
	}
