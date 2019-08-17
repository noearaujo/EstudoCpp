/*
AND/&&/E
Operador

*/
#include <iostream.h>
#include <cstdlib.h>

using namespace std;
#define pergunta if(opc=='s'||opc=='S'){goto INICIO;}
int main(){
//inicio
    INICIO:
    system("cls");

    char opc;
    int num=0;

    cout<<"Digite um valor: ";
    cin>>num;

    if((num>=3&&num<=6)||(num>9&&num<15)||(num>15&&num<20)){
        cout << "\n\nValor ceito!\n";
    }else{
        cout << "\n\nNao aceito!\n";
    }

    //fim
    cout<<"\n\nOutro valor?[s/n] ";
    cin>>opc;
    pergunta

    return 0;
}
