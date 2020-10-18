#include <iostream>
using namespace std;
//Parser
int main()
{   
    //Arrays
    int n [100]; //4B * 100 reservados na memória
    //const char c [] = "Teste"; //1B * 5 reservados na memória
    char c [50]; //1B * 50 reservados na memória
    //Expressões polinomiais (TODO):
    //ax + b
    //ax^2 + bx + c
    //ax^n + bx + c
    
    //Prencher um array de inteiros 
    for (int i =0, j=10; i<100; i++, j=j+10){
        n[i] = j;
        //j += 10;
    }
    
    //Imprimir um array de inteiros
    for (int i =0; i<100; i++){
        cout<<n[i]<<endl;
    }
    
    //Prencher um array de caracteres
    for (char i = 0; i<50; i++){
        c[i] = i + 65;
    } 
    
    //Imprimir um array de caracteres
    for (char i = 0; i<50; i++){
        printf ("%c \n", c[i]);
    } 
    
    return 0;
}
