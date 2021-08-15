#include <iostream>

using namespace std;

int main() {
  int distancia_percorrida;
  double combustivel_gasto, consumo_medio;
  cin >> distancia_percorrida;
  cin >> combustivel_gasto;
  consumo_medio = distancia_percorrida / combustivel_gasto;
  printf("%.3f km/l\n", consumo_medio);

  return 0;
}
