#include <iostream>

using namespace std;

int main(){
  int valores_recebidos, valor;
  cin >>  valores_recebidos;
  for (int aux = 0; aux < valores_recebidos; aux++)
  {
    cin >> valor;
    if (valor % 2 == 0 & valor != 0){
      cout << "EVEN";
      if (valor > 0){
        cout << " POSITIVE" << endl;
      } else {
        cout << " NEGATIVE" << endl;
        }
      } else if (valor > 0) {
        cout << "ODD POSITIVE" << endl;
      } else if (valor < 0) {
        cout << "ODD NEGATIVE" << endl;
      } else{
        cout << "NULL" << endl;
      }

      }
return 0;
}
