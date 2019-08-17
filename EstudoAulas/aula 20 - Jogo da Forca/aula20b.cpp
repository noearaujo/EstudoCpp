#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    //Declara��o de Variaveis
    inicio:
    char palavra [30]; //Contem a palavra secreta com 30 letras
    char letra [1]; //Amarzernar as altenativas que sera utilizada
    char secreta[30]; //Contem a palavra que forem desvendada

    int tam; //Tamanho da palavra
    int i; //Indice da palavra
    int chances; //Tentativas de acerto
    int acertos; //Quantidade de acerto
    int opc; //Op�ao de inicializa��o

    bool acerto; //Verifica��o das letras certas ou errada

    //Inicializa��o
    chances = 6;
    tam = 0;
    i = 0;
    acerto = false;
    acertos = 0;


    cout <<"*********************************"<< endl;
    cout <<"*        JOGO DA FORCA          *"<< endl;
    cout <<"**********By Shrek18.5***********"<< endl;;

    //Primeira Mensagem
    cout <<"Fale para seu amigo fechar os olhos e digite a palavra secreta: ";
    //Amarzernar a palavra secreta
    cin >> palavra;
    //Limpar tela
    system("cls");

    //Verificando o tamanho da Array
    while(palavra[i] != '\0'){
        i++;
        tam++;
    }

    //Preencher as lacunas das palavras com tracinho
    for(i = 0; i<30; i++){
        secreta[i] = '_';
    }

    //Rotina de verifica��o do jogo acerto e erros
    while(chances > 0 && (acertos < tam)){
        cout <<"Chances restantes: "<< chances << "\n\n";//Quantas chances o jogador ainda tem
        cout <<"Palavra secreta: ";
        //Revelando a palavra secreta
        for (i = 0; i < tam; i++){
            cout << secreta[i];
        }

        //Tentativa de acertar a palavra letra por letra
        cout <<"\n\nDigite uma letra: ";
        cin >> letra[0];
        //Verificando a letra com a palavra secreta
        for(i=0; i<tam; i++){
            if(palavra[i]==letra[0]){
            acerto = true;
            secreta[i] = palavra [i];
            acertos++;
            }
        }
        //Verificando se houve acerto ou n�o
        if(!acerto){
            chances--;
        }
        //Incializar uma nova rotina
        acerto = false;
        system("cls");
    }

    if (acertos==tam){
    cout <<"*********************************"<< endl;
    cout <<"*        JOGO DA FORCA          *"<< endl;
    cout <<"**********By Shrek18.5***********"<< endl;
    cout <<"Voc� venceu!!";
    }
    else{
        cout <<"Que pena, voc� perdeu";
    }
    cout <<"\nDeseja jogar novamente? [sim = 2 e n�o = 3]: ";
    cin >> opc;
    if(opc==2){
        goto inicio;
    }
    else if(opc==3){
        exit(0);
    }
    system("pause");
    return 0;

}
