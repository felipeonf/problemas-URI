#include <iostream>

using namespace std;

int main() {
  float numero_digitado, soma = 0;
  int positivos = 0, i = 0;

  while (i < 6)
  {
    cin >> numero_digitado;
    i = i + 1;
    if (numero_digitado > 0)
    {
      soma = soma + numero_digitado;
      positivos = positivos + 1;
    } 
  }

  cout << positivos <<" valores positivos" << endl;
  printf("%.1lf\n", soma / positivos);
  
  return 0;
  }
