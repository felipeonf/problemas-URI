#include <bits/stdc++.h>
    
using namespace std;


int main() {
  int numeroLinhas;
  cin >> numeroLinhas;

  while (numeroLinhas--)
  {
    int numeroLeds = 0;
    string numero;
    cin >> numero;
    for (int c = 0; c < numero.size(); c++)

    switch (numero[c])
    {
      case '0':
        numeroLeds += 6;
        break;
      case '1':
        numeroLeds += 2;
        break;
      case '2':
        numeroLeds += 5;
        break;
      case '3':
        numeroLeds += 5;
        break;
      case '4':
        numeroLeds += 4;
        break;
      case '5':
        numeroLeds += 5;
        break;
      case '6':
        numeroLeds += 6;
        break;
      case '7':
        numeroLeds += 3;
        break;
      case '8':
        numeroLeds += 7;
        break;
      case '9':
        numeroLeds += 6;
        break;
      

    }
    cout << numeroLeds << " leds" << endl;
  }

return 0;
}
