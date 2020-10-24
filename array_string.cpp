#include <iostream>
using namespace std;
//Parser
int main()
{   
    //Arrays estáticos
    //int n [5]; //4B * 5 reservados na memória
    char c[6]; //1B * 50 reservados na memória

    //TRATAMENTO DOS CARACTERES
    cout<<"Introduza o seu nome: ";
    /*for (int i=0; i<5; i++){
        cin>>(c[i]); //Leitura caracter a caracter
    }
    c[5] = '\0';*/
    
    scanf ("%s", c); //Leitura da cadeia completa. c = &c[0]
    //cin>>c;       //Leitura da cadeia completa. c = &c[0]
    
    cout<<"Eis a sua cadeia de caracteres (string):\n";
    /*for (int i=0; i<5; i++){
         cout<<c[i]<<endl;
    }*/
    printf ("%s\n", c);
    //cout<<c;
    
    if (c[5] == '\0')
        cout<<"O caracter \0 (null) indica o fim da string.";
    
    return 0;
}
