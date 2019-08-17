#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    cout<<"                 =============================="<<endl;
    cout<<"                 #        JOGO DA FORCA       #"<<endl;
    cout<<"                 =============================="<<endl;
    cout<<"                         =versao 1.1=\n\n";

    char palavra[30],psecreta[30],pletra[1];
    int chances=6,acertos=0,i=0,opc=0,ptamanho=0;
    bool acerto=false;

    cout<<"Digite a palavra que irar ser desvendada: ";
    cin>>palavra;

    system("cls");

    while(palavra[i] != '\0'){
      i++;
      ptamanho++;
    }

    for(i=0;i<30;i++){
        psecreta[i]='-';
    }

    while((chances>0) && (acertos<ptamanho)) {

            //Cria o boneco e forca
        string forca=(chances==6)?"_____________   \n|.|         |   \n|.|        _|_\n|.|          \n|.|        \ \\n|.|         \n|.| \n|.| \n|.| \n\n":
                    (chances==5)?"_____________   \n|.|         |   \n|.|        _|_\n|.|         O    \n|.|         \n|.|       \n|.| \n|.| \n|.| \n\n":
                    (chances==4)?"_____________   \n|.|         |   \n|.|        _|_\n|.|         O    \n|.|         |    \n|.|         \n|.| \n|.| \n|.| \n\n":
                    (chances==3)?"_____________   \n|.|         |   \n|.|        _|_\n|.|         O    \n|.|        /|    \n|.|         \n|.| \n|.| \n|.| \n\n":
                    (chances==2)?"_____________   \n|.|         |   \n|.|        _|_\n|.|         O    \n|.|        /|\\    \n|.|         \n|.| \n|.| \n|.| \n\n":
                    (chances==1)?"_____________   \n|.|         |   \n|.|        _|_\n|.|         O    \n|.|        /|\\    \n|.|        /  \n|.|  \n|.|  \n|.| \n\n":
                    (chances==0)?"_____________   \n|.|         |   \n|.|        _|_\n|.|         O    \n|.|        /|\\    \n|.|        / \\ \n|.|  \n|.|  \n|.| \n\n":
                            "                  ==============================\n                   #                              #\n                  ==============================\n\n";
        //Chamada da forca
        cout<<forca;


        cout<<"Chances: "<<chances<<endl;
        cout<<"Palavra secreta: ";
        for(i=0;i<ptamanho;i++){
            cout<<psecreta[i];
        }

        cout<<"\nDigite uma letra: ";
        cin>>pletra[0];
        for(i=0; i<ptamanho; i++){
            if(pletra[0]==palavra[i]){
                acerto=true;
                if(psecreta[i]=='-'){
                    psecreta[i]=palavra[i];
                    acertos++;
                }
            }
        }

        if(!acerto){
            chances--;
        }


       acerto=false;
        system("cls");

    }
    if(chances==0){
        cout<<"           EITA TU SE DEU MAL\n\n\n";
    }
    else{
        cout<<"             PARABENS!\n\n Voc� acertou a palavra '"<<palavra<<"'\n\n";
    }
    system("pause");

    return 0;
}
