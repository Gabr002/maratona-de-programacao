#include <iostream>

using namespace std;

bool eh_primo(int x){
	int Div = 0;

    for(int i = 1; i <= x; i++){
        if(x%i == 0)
            Div++;
    }
    if(Div == 2)
        return 1;
    else
        return 0;
}

int main(){
	long long int x;

	cin>>x;

	if(eh_primo(x)){
		cout << "S" << "\n";
	}else{
		cout << "N" << "\n";
	}
}
