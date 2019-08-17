#include <iostream>
using namespace std;

//argc=armazena quantidade de argumentos e argv=armazena s argumentos
int main(int argc, char *argv[]){
    for(int i=0;i<argc;i++){
        cout<<"Argumento["<<i<<"]: "<<argv[i]<<endl;
    }
    cout<<"Quantidade de argumentos: "<<argc<<endl;

    return 0;
}
