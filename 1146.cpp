#include <iostream>

using namespace std;

int main(){
  int numero_digitado = 1;
  while (numero_digitado != 0)
  {
    cin >> numero_digitado;
    for (int aux = 1; aux <= numero_digitado; aux++)
    {
      if (aux == numero_digitado){
        cout << aux << endl;
      
      } else {
        cout << aux << " ";
      }
    }
  }
return 0;
}
