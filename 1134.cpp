#include <iostream>

using namespace std;

int main(){
  int tipo, alcool = 0, gasolina = 0, diesel = 0;
  while (tipo != 4 || tipo < 1 & tipo > 4)
  {
    cin >> tipo;
    if (tipo == 1){
      alcool = alcool + 1;
    
    } else if (tipo == 2){
      gasolina = gasolina + 1;

    } else if (tipo ==3){
      diesel = diesel + 1;
    }
  }
  cout << "MUITO OBRIGADO" << endl;
  cout << "Alcool: " << alcool << endl;
  cout << "Gasolina: " << gasolina << endl;
  cout << "Diesel: " << diesel << endl;

return 0;
}
