#include <iostream>
using namespace std;

//Prototipos
void contador(int num, int cont=0);

int main(){

    contador(10);

    return 0;
}

void contador(int num, int cont){
    cout<<cont<<endl;
    if (num>cont){ //se num for maior que 0
        //cont inicia com 0,  nas proximas exe é add +1 até cont ser igual a num
        contador(num,++cont); //chamei ela mesma (função)
    }

}
