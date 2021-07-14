#include<iostream>
#include<stdlib.h>
using namespace std;

void mostrar(float (*r)[5])
{
cout<<endl<<endl;
for(int i=0;i<5;i++){
	for(int j=0;j<5;j++){
	      cout<<r[i][j]<<" ";
	}
cout<<"\n";
	}

}

// FUCION PRINCIPAL
int main()
{
	int op,flag;
	float matriz1[5][5],matriz2[5][5],matrizresultado[5][5]={{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}},matrizresultado1[5][5]={{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}};
	do
{
	cout<<"\nPROGRAMA "<<endl<<endl;
	cout<<"1.- Primero ingresar los valores de las matrices \n";
	cout<<"2.- sacar el producto de las dos matrices \n";
	cout<<"3.- sacar la potencia de la matriz 1 \n"; 
	cout<<"4.- sacar la transpuesta de la matriz 1 \n";
	cout<<"5.- sacar la media y varianza de las matrices y compararlas \n";
        cout<<" Ingrese una la opcion: "; cin>>op;
	switch(op)
{
		case 1:
//=====================================================
//=====================================================
//=====================================================
			
    //INGRESAR LOS VALORES DE LAS MATRICES
    //PARTICIPANTE 1//
	cout<<"EN ESTA PARTE PODREMOS PONER LOS VALORES DE LAS MATRICES\n";
	cout<<"\nPOR FAVOR DIGITE LOS NUMEROS DE LA PRIMERA MATRIZ\n";
	for(int a=0;a<2;a++)
	{
		for(int b=0;b<2;b++)
		{
			cout<<"\nINGRESE UN NUMERO ["<<a<<"]["<<b<<"]: ";
			cin>>matriz1[a][b];
		}
	}
	
	cout<<"\nPOR FAVOR DIGITE LOS NUMEROS DE LA SEGUNDA MATRIZ\n";
	for(int a=0;a<2;a++)
	{
		for(int b=0;b<2;b++)
		{
			cout<<"\nINGRESE UN NUMERO ["<<a<<"]["<<b<<"]: ";
			cin>>matriz2[a][b];
		}
	}
	
	cout<<"\nESTA ES LA PRIMERA MATRIZ\n";
	for(int a=0;a<2;a++)
	{
		for(int b=0;b<2;b++)
		{
			cout<<matriz1[a][b]<<" ";
		}
		cout<<"\n";
	}
	
	cout<<"\nESTA ES DE LA SEGUNDA MATRIZ\n";
	for(int a=0;a<2;a++)
	{
		for(int b=0;b<2;b++)
		{
			cout<<matriz2[a][b]<<" ";
		}
		cout<<"\n";
	}
		break;
		
	        case 2:
//====================================================
//====================================================
//====================================================
	        	
    //PARTICIPANTE2 
	//PRODUCTO DE LAS MATRICES.
    cout<<"\nESTA FUNCION PERMITE CALCULAR EL PRODUCTO ENTRE DOS MATRICES\n";
    
	 for (int a=0;a<2;a++)
    {
	
	for (int b=0;b<2;b++)
       { 
	    matrizresultado[a][b]=0;
         
		 for (int k=0;k<2;k++)
          {
		  matrizresultado[a][b]=matrizresultado[a][b]+matriz1[a][k]*matriz2[k][b];
          }
       }
    }
    
	cout<<"\nEL PRODUCTO DE LAS MATRICES ES:\n";
	
	for(int a=0;a<2;a++)
	{
		for(int b=0;b<2;b++)
		{
			cout<<matrizresultado[a][b]<<" ";
		}
		cout<<"\n";
	}
	
		break;
		
		case 3:
//====================================================




//COLABORADOR 3
	// AQUI VAMOS A OBTENER LA POTENCIA DE UNA MATRIZ.
	
	for (int a=0;a<2;a++)
    {
	
	for (int b=0;b<2;b++)
         { 
	      matrizresultado[a][b]=0;
		  matrizresultado[a][b]=matrizresultado[a][b]+matriz1[a][b]*matriz1[a][b];
         }
    }
    
	cout<<"\nPARA LA POTENCIA DE LA MATRIZ 1, ES:\n";
	
	for(int a=0;a<2;a++)
	{
		for(int b=0;b<2;b++)
		{
			cout<<matrizresultado[a][b]<<" ";
		}
		cout<<"\n";
	}
	
		break;
		
	case 4:
//====================================================
//====================================================
//====================================================

//COLABORADOR4
	// AQUI SE VA A  CALCULAR LA TRANSPUESTA DE LA  MATRIZ 1
	cout<<"\nLA PRIMERA MATRIZ, QUEDARIA ASI:\n";
		
	for(int a=0;a<2;a++)
	{
		for(int b=0;b<2;b++)
		{
		cout<<matriz1[b][a]<<" ";
		}
		 
		 cout<<"\n";
	}
		
		break;
		
		
		case 5:
//====================================================
//====================================================
//====================================================
//COLABORADOR5
//AUI SE SACARA LA MEDIA Y LA VARIANZA DE LAS MATRICES

	//AQUI VOY A CALCULAR Y MOSTRAR LAS MEDIA Y VARIANZA DE LAS DOS MATRICES
	
	for (int a=0;a<2;a++)
    {
	     for (int b=0;b<2;b++)
         { 
	      matrizresultado[a][b]=0;
		  matrizresultado[a][b]=matrizresultado[a][b]+matriz1[a][b]*matriz2[a][b];
		  matrizresultado[a][b]=matrizresultado[a][b]/2;
         }
   }
       
	for (int a=0;a<2;a++)
    {
	     for (int b=0;b<2;b++)
         { 
	      matrizresultado1[a][b]=0;
		  matrizresultado1[a][b]=matrizresultado[a][b]+matriz1[a][b]*matriz2[a][b];
		  matrizresultado1[a][b]=matrizresultado[a][b]*2;
        }
    }
       
	   cout<<"\nLA MEDIA ARITMETICA ES:\n";

	for(int a=0;a<2;a++)
	{
		
		for(int b=0;b<2;b++)
		{
			cout<<matrizresultado[a][b]<<" ";
		}
		
		cout<<"\n";
	}
	
	cout<<"\nLA VARIANZA ARITMETICA, QUEDARIA ASI:\n";
	
	for(int a=0;a<2;a++)
	{
		
		for(int b=0;b<2;b++)
		{
			cout<<matrizresultado1[a][b]<<" ";
		}
		cout<<"\n";
	}
		
		break;
		
		
}
		
		  if(op < 0 || op > 5	)
		{
	          cout<<"\nEste numero no es valido..\n";
		  	system("cls");
		}
		  	  
	if(op==0)
	{
	cout<<"\nAdios..\n";
	 cout<<"TERMINAR: "<<endl;
	}
	
}
	while(op!=0);
	return(0);

}
