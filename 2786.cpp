#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int largura, comprimento, area, tipo_1, tipo_2;
    cin >> largura >> comprimento;
    area = largura * comprimento;
    tipo_1 = (largura - 1) * (comprimento - 1) + area;
    area = 0;
    tipo_2 = ((largura - 1) * 2) +  ((comprimento - 1) * 2) + area;

    cout << tipo_1 << endl;
    cout << tipo_2 << endl;
    return 0;
}
