//ENUMERADORES
//o iosteam esta sendo pre-compilado
#include "pch.h"
using namespace std;

int main()
{

// enum s� representa numeros inteiros, E ARMAS AGORA � UM TIPO QUE ARMAZENAS ARAMAS
    enum armas{fuzil=100, revolver=16, rifle=5, escopeta=1}; //Declarando seu valor maximo
    int armaSel=int(armas::fuzil); //simplificado

    //tipo armas que tem nome ArmaSel (arma selecionada)
  /* armas armaSel;
   armaSel = rifle;
    */

   cout<<armaSel;

    return 0;
}
