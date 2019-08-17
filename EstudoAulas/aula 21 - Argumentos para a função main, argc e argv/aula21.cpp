#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

//argc=armazena quantidade de argumentos e argv=armazena s argumentos
int main(int argc, char *argv[]){

    if(argc>1){
       if(!strcmp(argv[1],"sol")){ //verifica se o parametro é iual a sol
            cout<<"Vou sair"<<endl;
       }else if(!strcmp(argv[1],"nublado")){
            cout<<"Vou ir ao cinema"<<endl;
       }else{
            cout<<"Vou ficar em casa!"<<endl;
       }

    }

    system("pause");
    return 0;
}
