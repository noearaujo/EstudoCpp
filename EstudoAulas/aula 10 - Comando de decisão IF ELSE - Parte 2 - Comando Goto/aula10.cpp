#include <iostream>
//lib std pra pegar fução de limpar o DOS
#include <cstdlib>
using namespace std;

int main(){
    float n1,n2,res;
    char opc;

    //libol Goto onde ele vai iniciar
    INICIO:

    //limpar o DOS
    system("cls");

    cout << "Digite o valor da nota 1: ";
    cin>>n1;
    cout<<"Digite o valor da nota 2: ";
    cin>>n2;

    res=n1+n2;

    /*
    >=60          Aprovado
    >=40 e <60    Recuperação
    <40           Reprovad
    */

    if(res>=60){
        cout<<"\nAprovado\n\nNota: "<<res;
    }else if(res >=40){
        cout<<"\nRECUPERAÇÃO";
    }else{
        cout<<"\nREPROVADO";
    }

    cout<<"\n\nOutras notas?[s/n]: ";
    cin>>opc;
    //função pra iniciar o Goto
    if(opc=='s' or opc=='S'){
        goto INICIO;
    }
    //FIM

    return 0;
}
