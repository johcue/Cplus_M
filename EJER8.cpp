#include <iostream>
#include <cstdlib>
/*8. Leer una matriz 3x4 entera y determinar cuál es número menor y su posición.*/
using namespace std;
int main(int argc, char** argv)
{
	system("color f0");
	int m[3][4]={0},i,j,fil,col,men=999999,posi=0,posj=0;
	
	cout<<endl<<endl;
	cout<<"INGRESE TOTAL DE FILAS Y COLUMNAS ";
	cin>>fil>>col;
	cout<<" \t CAPTURA MATRIZ  "<<endl;
	for(i=0;i<fil;i++)
	{
		for(j=0;j<col;j++)
		{
			cout<<" Elemento ["<<i+1<<"]  ["<<j+1<<"] ";
			cin>>m[i][j];		
		}
			cout<<endl<<endl;
	}
	cout<<endl<<endl;
	cout<<" \t ESCRITUA MATRIZ  "<<endl;
	for(i=0;i<fil;i++)
	{
		for(j=0;j<col;j++)
		{
			cout<<"  ["<<m[i][j]<<"]  ";
			
			}
		}
	
	cout<<endl<<endl;
	cout<<" \t NUMERO MENOR Y POSICION  "<<endl;
	for(i=0;i<fil;i++)
	{
	
		for(j=0;j<col;j++)
		{
			if (m[i][j]<men)
			{
				men=m[i][j];
				posi=i;
				posj=j;
			 }
		 	}
		}
		cout<<" El numero menor de la matriz es "<<men<<endl; 
	   	cout<<" ubicado en ["<<posi<<"]  ["<<posj<<"] "<<endl;
		

	system ("pause");
	return 0;
}
