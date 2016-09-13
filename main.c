#include <stdio.h>
#include <stdlib.h>



int main()
{
	 int i,j,aux,vector,num;
	 printf("\n ingrese el tamano del vector: ");
	 scanf("%d",&num);
	  
	  int vect[num];
	    for(i=0;i<num;i++)
        {
    	  printf(" vector[%d]= ",i);
    	  scanf("%d",&vector);
    	  vect[i]=vector;
    	  
        }
    
	  for(i=0;i<num;i++)
    {
    	for(j=0;j<num-1;j++)
    	{
    		if(vect[j]>vect[j+1])
    		{
    			aux=vect[j];
    			vect[j]=vect[j+1];
    			vect[j+1]=aux;
    		}
    	}
    }
    printf("\n los numeros ordenados son: ");
    for(i=0;i<num;i++)
    {
    	printf("\n %d",vect[i]);
    }
	return 0;
}
