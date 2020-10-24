#include <iostream>
using namespace std;
//Parser
int main()
{   
    //Arrays estáticos
    int n [5]; //4B * 5 reservados na memória
    //char c[10]; //1B * 50 reservados na memória

    //TRATAMENTO DOS INTEIROS
    for (int i=0; i<5; i++){
        cout<<"Introduza o "<<i+1<<"º número: ";
        cin>>n[i];
    }
    
    cout<<"Eis a sua lista:\n";
    cout<<"{\n  ";
    for (int i=0; i<4; i++){
         cout<<n[i]<<"; ";
    }
    cout<<n[4]<<".";
    cout<<"\n}";
    
    return 0;
}
