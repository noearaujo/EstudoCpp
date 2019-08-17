#include <iostream>
using namespace std;

//Prototipos
void soma(int n1, int n2);
void soma();

int main(){

    //Chamada das funções (sobrecarga de funções)
    soma(5,15);
    soma();

    return 0;
}

void soma(int n1, int n2){
    int res=n1+n2;
    cout<<n1<<"+"<<n2<<"="<<res<<endl;
}

void soma(){
    int n1=5,n2=10,res=n1+n2;
    cout<<n1<<"+"<<n2<<"="<<res<<endl;
}
