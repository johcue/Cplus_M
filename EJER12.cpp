#include <iostream>
#include <cstdlib>
#define m 10
#define n 10
/* 12. Dada una matriz m*n, n=m realizar un programa que permita sumar la
diagonal principal de su matriz transpuesta.*/
using namespace std;
int main(int argc, char** argv)
{
	int m1[m][n]={0},i,j,fil,col,dp=0;
	cout<<endl;
	cout<<"Por favor ingrese el total de filas y de columnas ";
	cin>>fil>>col;
	if(fil==col)
	{
	
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
	cout<<"\t ESCRITURA MATRIZ TRANSPUESTA "<<endl;
	for (i=0;i<fil;i++)
	{
		for (j=0;j<col;j++)
		{
			
			cout<<"         ["<<m1[j][i]<<"] ";
			if(i==j)
			{
				dp=dp+m1[j][i];
			}
	
		}
		cout<<endl;
	}
	cout<<"La suma de la diagonal principal es "<<dp<<endl;
    }
    else
    {
    	cout<<"La matriz no es cuadrada"<<endl;
	}
	system("pause");
	return 0;
}
