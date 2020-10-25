#include <iostream>
using namespace std;

int main()
{   
    //Variáveis estáticas ficam na stack do programa.
    int n1 = 2020;
    int n2 = 2021;
    int* p1 = &n1;
    int* p2 = &n2;
    int** pp = &p1;
    
    printf("p1 = %p; p2 = %p; pp = %p \n", p1, p2, pp);
    printf("*p1 (n1) = %i; *p2 (n2) = %i; *pp (p1) = %p; **pp (n1) = %i \n", *p1, *p2, *pp, **pp);
    printf ("++p1 = %p \n", ++p1); //Primeiro utiliza, depois incrementa/decrementa
    printf ("*p1 = *p2 = %i", *p1);
    
    return 0;
}
