#include <iostream>
#include <cstdlib>
/*9. Dada una matriz de m*n donde m=n realizar un programa que permita calcular
la suma de los elementos de la diagonal principal, los elementos de la triangular
superior y la triangular inferior.*/
using namespace std;
int main(int argc, char** argv) 
{
	int m[10][10]={0},j,i,col,fil,dp=0,ts=0,ti=0;
	cout<<endl;
	
	cout<<"Ingrese el total de filas y columnas " ;
	cin>>fil>>col;
	if (fil==col)
	{
	
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
 			if(i==j)
 			{
 				dp=dp+m[i][j];
			 }
			 else
			 if(i<j)
			 {
			 	ts=ts+m[i][j];
			 }
			 else
			 {
			 	ti=ti+m[i][j];
			 }
		 }
		 cout<<endl;	 
	}
	cout<<" La suma de la diogonal es "<<dp<<endl;
	cout<<" La suma de la triangular superior es "<<ts<<endl;
	cout<<" La suma de la triangular inferior es "<<ti<<endl;
	cout<<endl;
	
}
else
{
	cout<<"Las fil dif a las col"<<endl;
}
	

	system("pause");
	return 0;
	
	
}
