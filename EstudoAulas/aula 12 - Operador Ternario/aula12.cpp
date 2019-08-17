#include <iostream>
using namespace std;


int main(){

    //(expressão)?valor1:vaor2;
    int n1,n2,nota;
    string res;

    cout<<"Digite a primeir nota: ";
    cin>>n1;
    cout<<"Digite a segunda nota: ";
    cin>>n2;

    nota=n1+n2;

    /**
     *
     * 
     */

    //nota>=60 aprovado
    //nota<60  reprovado
            //acrescimo
        //(nota>=60)?res="Aprovado":res="Reprovado";

            //retorno
        res=(nota>=60)?"Aprovado":"Reprovado";

    cout<<"Aluno: "<<res<<endl;

	return 0;
}
