#include <iostream>
using namespace std;


int main(){
    int n = 0;

    //loop while
    while(true){
        n++;
        if(n>=10){
            break;
        }
        else{
            if(n==4 || n==6){
                continue;
            }
        }

        cout<<n<<endl;

}

	return 0;
}
