#include <iostream>

using namespace std;

int main(){
  int numero, flag = 0;
  cin >> numero;

  if (numero % 2 == 0){
    numero = numero + 1;
    cout << numero << endl;
    while (flag < 5){
      numero = numero + 2;
      flag = flag + 1;
      cout << numero << endl;
    }
  } else {
    cout << numero << endl;
    while (flag < 5) {
     numero = numero + 2;
     flag = flag + 1;
     cout << numero << endl;
    }
  }

return 0;
}
