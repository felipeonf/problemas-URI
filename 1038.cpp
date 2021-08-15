#include <iostream>
 
using namespace std;

int main() {
    int codigo, quantidade;
    double valor;
    cin >> codigo >> quantidade; 
    switch (codigo) {
        case 1:
            valor = quantidade * 4.0;
            printf("Total: R$ %.2f\n", valor);
        break;
        case 2:
            valor = quantidade * 4.5;
            printf("Total: R$ %.2f\n", valor);
        break;
        
        case 3:
            valor = quantidade * 5.0;
            printf("Total: R$ %.2f\n", valor);
        break;
        case 4:
            valor = quantidade * 2.0;
            printf("Total: R$ %.2f\n", valor);
        break;
        case 5:
            valor = quantidade * 1.50;
            printf("Total: R$ %.2f\n", valor);
        break;
        }
    return 0;
}
