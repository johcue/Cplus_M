#include <iostream>
#include <cstdlib>
#define m 10
#define n 10
/*17.Escribir un programa que encuentre el determinante de una matriz de 3 x 3. */
using namespace std;
int main(int argc, char** argv) 
{
	int m1[m][n]={0}, det, j,i,fil,col; 
	cout<<endl;
	fil=3;
	col=3;
	cout<<"\t CAPTURA MATRIZ "<<endl;
	for (i=0;i<fil;i++)
	{
		for (j=0;j<col;j++)
		{
			cout<<"Por favor digite el ("<<i+1<<","<<j+1<<") elemento ";
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
			cout<<" ["<<m1[i][j]<<"] ";
			det=((m1[0][0]*m1[1][1]*m1[2][2])+(m1[1][0]*m1[2][1]*m1[0][2])+(m1[2][0]*m1[0][1]*m1[1][2])-(m1[0][2]*m1[1][1]*m1[2][0])-(m1[1][2]*m1[2][1]*m1[0][0])-(m1[2][2]*m1[0][1]*m1[1][0]));                      
		}
		cout<<endl;
	}
	cout<<"El valor del determinante es "<<det<<endl;
	system("pause");
	return 0;
}
