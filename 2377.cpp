#include <iostream>
 
using namespace std;

int main() {
    int comprimento_estrada, distancia_pedagios, custo_km, valor_pedagio, custo_total;
    cin >> comprimento_estrada >> distancia_pedagios;
    cin >> custo_km >> valor_pedagio;
    custo_total = comprimento_estrada * custo_km + valor_pedagio * (comprimento_estrada / distancia_pedagios);
    cout << custo_total << endl;
    return 0;
}
