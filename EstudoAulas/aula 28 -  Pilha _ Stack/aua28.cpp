/*
O primeiro elemento a entrar na pilha é o ultimo a sair da pilha
*/
#include <iostream>
#include <stack> // pra trabalhar com pilhas

using namespace std;

int main()
{
    //tipo <tipo que ela armazena> nome;
    stack <string> cartas; //Criando uma pilha

    //Inserir elementos na pilha
    cartas.push("Ouro"); //1º a entrar e ultimo a sair
    cartas.push("Florzinha");
    cartas.push("Espadas");
    cartas.push("Copas");
    cartas.push("Coringa"); //Ultimo a entrar e 1º  sair

    cout<<"Tamanho da pilha: "<<cartas.size()<<"\n";
    cout<<"Carta do topo: "<<cartas.top()<<"\n---------------------------\n";

    //Tirar elementos da pilha
    cartas.pop();

    cout<<"Tamanho da pilha: "<<cartas.size()<<"\n";
    cout<<"Nova carta do topo: "<<cartas.top()<<"\n---------------------------\n";

	return 0;
}
