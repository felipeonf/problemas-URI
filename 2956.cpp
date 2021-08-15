#include <iostream>
 
using namespace std;

int main() {
    double base, altura, area;
    cin >> base >> altura;
    area = (base * altura) / 2.0;
    printf("Concluimos que, dado o limite da entrada, a resposta seria:  y = f(x) = %.5f.\n", area);
  
  return 0;
