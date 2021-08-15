#include <iostream>

using namespace std;

int main(){
  int numero;
  cin >> numero;
  for (int aux = 2; aux <= numero; aux = aux + 2)
  { 
    int quadrado = aux * aux;
    cout << aux << "^" << "2" << " = " << quadrado << endl;
  }

return 0;
}
