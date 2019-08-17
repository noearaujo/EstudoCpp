#include <iostream>
using namespace std;

int n1,n2; //Variaveis Globais

int main(){

//Operadores Matemáticos: + - / * % ()  //% = Mod  resto da divsão

int n3,n4; //Variaveis Locais
int res1,res2;

n1=11;
n2=3;
n3=5;
n4=2;
	
res1=n1/n2;
res2=n1%n2;

cout << "Divisao: " << res1 << endl << "Resto da Divisao: " << res2;
	
	return 0;
}


// TypeCast http://pontov.com.br/site/index.php/cpp/46-conceitos-basicos/80-c-type-casting-1o-parte
