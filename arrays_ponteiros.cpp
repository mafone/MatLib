#include <iostream>
using namespace std;
//Parser
int main()
{   
    //Arrays estáticos manipulados dinamicamente
    int * p;
    //OBS: todo array é um ponteiro ao primeiro elemento do array lista = &lista[0]
    int lista [5] = {1, 2, 3, 4, 5}; //Inicialização estática
    p = &lista[0]; //p = lista;
    
    //Criar um array de inteiros 
    //lista++; //Ilegal: porque lista é um array (ponteiro estático!)
    //p++; //Legal: ponteiro dinâmico!
    
    //Prencher um array de inteiros
    for (int i=0; i<5; i++){
        printf ("Introduza o valor lista[%i]: ", i); //Podemos utilizar cout em C++
        scanf ("%i", p++); //Parâmetro passdo por referência (&) 
        //scanf ("%i", &lista[i]); //Parâmetro passdo por referência (&)
    }

    //Imprimir um array de inteiros
    p = &lista[0]; //p = lista; //Voltamos o p à posição inicial (como um cursor)
    printf("Eis a sua lista:\n{");
    for (int i=0; i<5; i++){
        printf ("lista[%i] = %i; ", i, *p++); //Parâmetros passdos por valor
        //printf ("lista[%i] = %i; ", i, lista[i]); //Parâmetros passdos por valor
    }
    printf("\b}");
    
    return 0;
}
