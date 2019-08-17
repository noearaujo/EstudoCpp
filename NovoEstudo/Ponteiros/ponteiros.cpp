#include <iostream>
using namespace std;


int main(){
    string veiculo = "Moto";
    string *pv;
    pv=&veiculo; //Ponteiro PV recebe(=) o endereço(&) da variavel VEICULO

    cout<<*pv<<"\nEndereco que ta dentro do ponteiro PV: "<<pv<<"\nEndereco que da variavel VEICULO: "<<&veiculo<<endl;

    *pv="Carro"; //No endereço apontado por PV, adcione o valor CARRO
    cout<<"\n"<<*pv<<endl;

	return 0;
}
