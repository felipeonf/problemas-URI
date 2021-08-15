#include <iostream>

using namespace std;

int main() {
  int tempo_gasto, velocidade, CONSUMO_MEDIO;
  double consumo_total, distancia;
  cin >> tempo_gasto;
  cin >> velocidade;
  distancia = tempo_gasto * velocidade;
  CONSUMO_MEDIO = 12.0;
  consumo_total = distancia / CONSUMO_MEDIO;
  printf("%.3f\n", consumo_total);

  return 0;
}
