#include <iostream>
using namespace std;

int main()
{
    printf ("%s", "#################TESTAR TIPOS DE DADOS##############\n");
    //Dados básicos. OBS: por defeito os tipos de dados são signed
    char caracter; //1B = 8 bits    = 2^8 (256) informações [-128; 128]
    unsigned char caracter_u; //1B  = 8 bits = 2^8 (256) informações [0; 255]
    uint8_t inteiro8; //unsigned char 1B = 8 bits = 2^8 (256) informações
    bool true_false; //1B = 8 bits = 2^8 (256) informações. 254 números são avaliados como true (1) e apenas o número 0 é avaliado como false.
    
    short inteiro_pequeno; //2B = 16 bits 2^16 (256) = 65536 informações
    unsigned short inteiro_pequeno_u; //2B = 16 bits
    uint16_t inteiro16; //unsigned short - 2B = 16 bits
    
    int inteiro; //4B = 32 bits
    unsigned int inteiro_u; //4B = 32 bits
    uint32_t inteiro_32; //4B = 32 bits
    float real; //4B = 32 bits
    
    long int inteiro_longo; //8B = 64 bits
    unsigned long int inteiro_longo_u; //8B = 64 bits
    uint64_t inteiro_64; //8B = 64 bits
    //long long int inteiro_longo_longo; //8B = 64 bits. Em alguns compiladores precisamos deste tipo
    double real_grande; //8B = 64 bits
    
    //printf ("%lo", sizeof(numero_real_grande));
    cout<<endl<<sizeof(real_grande)<<endl;
    return 0;
}
