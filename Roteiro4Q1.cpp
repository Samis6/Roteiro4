#include <iostream>

using namespace std;

int main()
{
    int maior;
    int numero;

    maior=0;

    while(numero !=0){
    cout << "Digite um valor" << endl;
    cin >> numero;

    if(maior<numero){
        maior=numero;
    }
    cout << "O maior eh:" << maior << endl;
}
    return 0;
}
