#include <iostream>

using namespace std;

int main() {
  float numero_digitado;
  int positivos = 0;
  int i = 0;
  while (i < 6)
  {
    cin >> numero_digitado;
    i = i + 1;
    if (numero_digitado > 0)
    {
      positivos = positivos + 1;
    } 
  }
  cout << positivos <<" valores positivos" << endl;
  return 0;
