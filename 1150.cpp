#include <iostream>

using namespace std;

int main(){
  int x, z, contador = 1, soma;

  cin >> x;
  do {
    cin >> z;
  } while (z <= x);
  soma = x;
  do {
    ++x;
    soma = soma + x;
    contador = contador + 1;
  } while (soma <= z);

  cout << contador << endl;

return 0;
}
