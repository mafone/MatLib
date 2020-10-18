#include <iostream>
using namespace std;

int main()
{   //Operadores aritméticos (+, -, *, /, %).
    //Operadores relacionais: ==, !=, >, >=, <, <=
    //Operadores lógicos: and (&&), or (||), not (!). Resultado booleano
    //Operadores bit a bit: and (&), or (|), XOR (^), shift right (>>), shift left (<<). Resultado numérico
    
    // 1B = 1 caracter = 2 hexadecimais.
    unsigned char resultado1 = 0b00100001; //binary (33) 
    unsigned char resultado2 = 0x21; //hexadecimal (33)  !
    cout<<(resultado1 == resultado2)<<endl; //true
    cout<<resultado1<<endl; // ! de acordo com a tabela ASCII
    
    //Shift:
    unsigned char bitwise = 1; //0b00000001
    //unsigned char resultado = (bitwise << 6) + 1; //0b01000001
    unsigned char resultado = (bitwise << 6) + 2; //0b01000020
    cout<<resultado<<endl;
    //resultado = (resultado >> 1) + 1; //0b00100001
    resultado = (resultado >> 1); //0b00100001
    cout<< resultado<<endl;
    
    //XOR
    resultado = (0b11111111 ^ resultado); //0b11011110
    cout<< (resultado == 0b11011110)<<endl;
    
    //And (&) ; OR (|)
    resultado = resultado | 0b00000001; //1 absorvente
    cout<< (resultado ==    0b11011111)<<endl;
    resultado = resultado & 0b111111111; //1 neutro 
    cout<< (resultado ==    0b11011111);
    return 0;
}
