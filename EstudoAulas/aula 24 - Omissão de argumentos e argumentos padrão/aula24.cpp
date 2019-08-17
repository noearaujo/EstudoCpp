#include <iostream>
using namespace std;

//Prototipos
void impre(string txt="Ola"); //Aqui coloquei Ola com default, se por acaso não for colocado argumetos na chamada

int main(){

    //chamada
    impre(); //sem argumento na chamada
    impre("Oi"); //com argumento

    return 0;
}

//Função sem retorno, como 1 argumento
void impre(string txt){
    cout<<txt<<endl;
}
