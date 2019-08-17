#include <iostream>
#include <Windows.h>

using namespace std;

int main(){
 SetConsoleTitleA("Aula12 Operador Ternario");

 int n1, n2, nota;
 string resposta;

 system("color F2");

inicio:

 cout << endl;

 cout << "Digite a primeira nota: ";

 cin >> n1;

 cout << "Digite a segunda nota: ";

 cin >> n2;



 nota = n1 + n2;



 if (nota >= 60){

  //aprovado

  MessageBox(NULL, "Aprovado!", "Boletim", MB_OK);

 }



 else{

  //reprovado

  MessageBox(NULL, "Reprovado!", "Boletim", MB_OK);

 }



 cout << endl;

 system("pause");

 system("cls");



goto inicio;


return 0;

}
