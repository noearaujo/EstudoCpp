#include <iostream>
using namespace std;

string nome;
string nome2;

int main(){
    cout<<"Digite seu nome completo: ";
    //cin>>nome; //como � uma cadeia de caracteres, ele vai so pegar at� o espa�o (palavra unica)
    getline(cin, nome); //esta lendo pelo teclado, linha por linha//tbm pode ler um arquivo txt

    cout<<"Digite outro nome completo: ";
     getline(cin, nome2);

    cout<<"\n\n"<<nome<<"\n\n";
    cout<<nome2<<"\n\n";




    return 0;
}
