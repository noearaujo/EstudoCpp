#include <iostream>
using namespace std;

int main(){
    int idade = 0;
    string nome;

    cout<<"Digite sua idade: ";
    //como � um inteiro, ent�o
    cin>>idade; //quando digito o inteiro e aperto enter (\n), n�o armazena char, ent�o fica sobrando o \n

    //irar ignorar tudo que estiver sobrando no buffer de leitura cin acima, como o \n (limpa buffer)
    cin.ignore(); //solu��o

    cout<<"Digite seu nome completo: ";
    //buffer ele ler at� uma quebra de linha \n
    getline(cin,nome);//mas como  sobrou o \n..... ele irar armazer e finalizar

    cout<<"\n\n";
    cout<<"Sua idade eh: "<<idade<<endl;
    cout<<"Seu nome eh: "<<nome<<endl;


    return 0;
}
