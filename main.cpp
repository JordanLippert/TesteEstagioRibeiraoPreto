#include <iostream>
#include <string>
using namespace std;

int somador(){
    int indice = 13, soma = 0, k = 0;

    while(k < indice){
        k = k + 1;
        soma = soma + k;
    }
    return soma;
}

bool fibonacci(int num) {
    int num1 = 0;
    int num2 = 1;
    while(num1 < num) {
        int temporario = num1;
        num1 = num2;
        num2 = temporario + num2;
    }
    return num == num1;
}

string inverteChar(){
    string vogais = "aeiou";
    string inverso;

    for (int i = 4; i >= 0; i--){
        inverso += vogais[i];
    }
    return inverso;
}

int main() {
    cout << somador();
    /**
    int num;
    cout << "Digite um numero para verificar se ele pertence a sequencia de Fibonacci: ";
    cin >> num;

    if (fibonacci(num)) {
        cout << "O numero " << num << " pertence a sequencia de Fibonacci.\n";
    } else {
        cout << "O numero " << num << " nao pertence a sequencia de Fibonacci.\n";
    }
    */
    //cout << inverteChar();
    return 0;
}