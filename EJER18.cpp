#include <iostream>
#include <cstdlib>
#define m 10
#define n 10
/* 18. Escribir un programa que encuentre el determinante de una matriz de 2 x 2.*/
using namespace std;
int main(int argc, char** argv)
{
	int m1[m][n]={0},i,j,fil,col,det;
	cout<<endl;
	
	fil=2;
	col=2;
	
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
			
			cout<<"         ["<<m1[i][j]<<"] ";
			det=((m1[0][0]*m1[1][1])-(m1[1][0]*m1[0][1]));
	
		}
		cout<<endl;
	}
	cout<<endl;
	cout<<"El determinante de la matriz es "<<det<<endl;
	system("pause");
	return 0;
	}
