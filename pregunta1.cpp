#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

const int cont =800;

void llenar(int m1[cont][cont],int cant){
	srand(time(NULL));
	for (int i = 0; i < cont; ++i)
	{
		for (int j = 0; j < cont; ++j)
		{
			m1[i][j]=rand()%cant;
		}
	}
}

void multiplicacion(int m1[cont][cont], int m2[cont][cont], int MR[cont][cont]){
	//matriz resultado
	int temp=0;
	for(int i = 0;i < cont; i++){
		for (int j = 0; j < cont; ++j)
		{
			temp=0;
			for (int k = 0; k < cont; ++k)
			{
				temp +=m1[i][k]*m2[k][j];
			}
			//cout<<"temp: "<<temp<<"\t";
			MR[i][j] =temp;
		}
		cout<<endl;
	}
}


void print(int m[cont][cont]){
	for (int i = 0; i < cont; ++i)
	{
		for (int j = 0; j < cont; ++j)
		{
			cout<<m[i][j]<<"\t";
		}
		cout<<endl;
	}

}
int main()
{

	int M2[3][3];
	M2[0][0]=2;	M2[0][1]=0;	M2[0][2]=1;	
	M2[1][0]=3;	M2[1][1]=0;	M2[1][2]=0;
	M2[2][0]=5;	M2[2][1]=1;	M2[2][2]=1;

	int M1[3][3];
	M1[0][0]=1;	M1[0][1]=0;	M1[0][2]=1;	
	M1[1][0]=1;	M1[1][1]=2;	M1[1][2]=1;
	M1[2][0]=1;	M1[2][1]=1;	M1[2][2]=0;

	int MR[3][3]={{0,0,0},{0,0,0},{0,0,0}};
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			MR[i][j]=0;
		}
	}

	int M[cont][cont];
	int N[cont][cont];
	llenar(M,cont);
	llenar(N,cont);
/*
	multiplicacion(M2,M1,MR);
	print(M1);
	cout<<"\n****************\n";
	print(M2);
	cout<<"\n****************\n";	
	print(MR);
*/
	int R[cont][cont];
	cout<<"\n*********   M    *******\n";
	//print(M);
	cout<<"\n*********   N    *******\n";
	//print(N);
	cout<<"\n*********   Resultado MXN    *******\n";
	multiplicacion(M,N,R);
	print(R);
	return 0;
}