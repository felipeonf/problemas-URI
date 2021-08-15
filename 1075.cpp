#include <iostream>

using namespace std;

int main(){
  int numero;
  cin >> numero;
  for (int aux = 1; aux < 10000; aux++)
  {
    if (aux % numero == 2) 
    {
      cout << aux << endl;
    }
  }

return 0;
}
