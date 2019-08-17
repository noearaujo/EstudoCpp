/*
Crie duas funções que calcula Fatorial e a outra Fibonacci
*/

#include <iostream>
using namespace std;
int n1=10;

//Prototipos
void fatorial(int num, int cont=n1);

int main(){

    fatorial(n1);

    return 0;
}

//calculo Fatorial ex: 10!=10*9*8*7*6*5*4*3*2*1
void fatorial(int num, int cont){
    cout<<"Fatorial: "<<num<<"="<<cont<<endl;
    if(cont>num){
        fatorial(num,cont--);
    }
}

//calculo Fibonacci ex:
//void fiboacci(int num, int cont
 //   if(){
//}

//}
