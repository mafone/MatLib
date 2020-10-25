#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{   
    //Arrays estáticos manipulados dinamicamente
    int quantidade, *ptr_lista;
    
    //Criar um array de inteiros 
    printf ("Criar um array de inteiros \nIntroduza a quantidade de elementos: ");
    scanf("%i", &quantidade);
    
    //ptr_lista = new int [quantidade]; //C++
    //ptr_lista = (int*) malloc (quantidade * sizeof (int)); //Os bits não são inicializados
    ptr_lista = (int*) calloc (quantidade, sizeof (int)); //Os bits são inicializados em 0
    
    //Prencher um array de inteiros
    for (int i=0; i<quantidade; i++){
        printf ("Introduza o valor lista[%i]: ", i); //Podemos utilizar cout em C++
        //scanf ("%i", ptr_lista++); //Parâmetro passdo por referência (&) 
        scanf ("%i", &ptr_lista[i]); //Parâmetro passdo por referência (&)
    }

    //Imprimir um array de inteiros
    printf("Eis a sua lista:\n{");
    for (int i=0; i<quantidade; i++){
        //printf ("lista[%i] = %i; ", i, *ptr_lista++); //Parâmetros passdos por valor
        printf ("lista[%i] = %i; ", i, ptr_lista[i]); //Parâmetros passdos por valor
    }
    printf("\b}");
    
    //ptr_lista = &ptr_lista [0];
    //delete [] ptr_lista; //C++
    free (ptr_lista); //C
    
    return 0;
}
