#include <iostream>
 
using namespace std;
/**
*se linha for ímpar e coluna for ímpar = casa branca
*se linha for par e coluna for par  = casa branca
*se linha for impar e coluna par  = casa preta
*se linha for par e coluna impar = casa preta
**/
int main() {
    int linha, coluna;
    cin >> linha; 
    cin >> coluna;
    if (linha % 2 != 0 && coluna % 2 != 0) {
        cout << "1" << endl;
    } else if (linha % 2 == 0 && coluna % 2 == 0) {
        cout << "1" << endl;
    } else if (linha % 2 != 0 || coluna % 2 != 0) {
        cout << "0" << endl;
    } 
    return 0;
}
