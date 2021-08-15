#include <iostream>

using namespace std;

int main() {
  double raio, PI, volume;

  cin >> raio;
  PI = 3.14159;
  volume = 4.0 / 3 * PI * (raio * raio * raio);
  printf("VOLUME = %.3f\n", volume);

  return 0;
}
