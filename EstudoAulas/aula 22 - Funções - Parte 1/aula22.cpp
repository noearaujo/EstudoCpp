#include <iostream>

using namespace std;

//Prototipar (apresentando a função pro programa)
void texto();
void soma(int n1,int n2);
int soma2(int n1, int n2);
void tr(string transp[4]);

//função principal
int main(){
    //var local
    int resultado;
    string transporte[4]={"carro","moto","bike","trem"};

    texto(); //Chamada da função void texto()

    //soma de 2 valores
    soma(5,15);

    //coloquei soma2 dentro  da var e mostrei na tela
    resultado=soma2(175,25);
    cout<<resultado<<" ou "<<soma2(175,25)<<endl;

    //Passando um Vetor para uma função
    tr(transporte);

    return 0;
}

//type void não retorna nada, por isso essa função não retorna e precisa ser chamada
void texto(){
    cout<<"Ola Mundo!"<<endl;


}

//soma  -    argumentos de entrada (parametros)
void soma(int n1,int n2){
    cout<<n1+n2<<endl;
}

//função de retorno
int soma2(int n1, int n2){
    return n1+n2;
}

//função onde seu argumento pode receber um vetor até [4], se for abaixo da erro e se for acima o ultimo não mostra
void tr(string transp[4]){
    for (int i=0; i<4; i++){ // loop que pecorre um array e mostra
        cout<<transp[i]<<endl;
    }
}
