#include <iostream>

using namespace std;

int main(){
  int numero_linhas, quadrado, cubo;
  cin >> numero_linhas;
  for (int aux = 1; aux <= numero_linhas; aux++)
  {
    quadrado = aux * aux;
    cubo = quadrado * aux;
    printf("%d %d %d\n", aux, quadrado, cubo);
  }
return 0;
}
