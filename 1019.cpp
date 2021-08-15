#include <iostream>

using namespace std;

int main() {
  int horas,minutos,segundos;
  cin >> segundos;
  horas = segundos / 3600;
  minutos = (segundos % 3600) / 60;
  segundos = segundos % 60;
  cout << horas << ":" << minutos << ":"<< segundos << endl;

  return 0;
}
