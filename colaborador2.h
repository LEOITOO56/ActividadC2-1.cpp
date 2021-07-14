#include<iostream>
#include<stdlib.h>
using namespace std;

void producto(float (*m1)[5], float (*m2)[5], float (*r)[5])
{

cout<<"Obetener el producto de las dos matrices ";
int filas=5, colum=5;
      for(int i=0; i<filas; ++i)
      {
      	for(int j=0; j<colum; ++j)
      	{
      	    for(int z=0; z<filas; ++z)
      	    {
                r[i][j] += m1[i][z] * m2[z][j];      	    	
			  }
		}
	  }
}

void mostrar3( float (*r)[5])
{
    cout<<"\nEl producto de las dos matrices es :\n \n ";
    int filas=5, colum=5;
      for(int b=0;b<filas;b++)
      {
        for(int c=0;c<colum;c++)
        {
            cout<<"\t"<<r[b][c];
        }
        cout<<endl;
      } 

}

