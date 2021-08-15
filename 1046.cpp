#include <iostream>
 
using namespace std;

int main() {
    int inicio, final, tempo_total, dia_1, dia_2;
    cin >> inicio >> final;
    if (final <= inicio) {
        dia_1 = 24 - inicio;
        dia_2 = final - 0;
        tempo_total = dia_1 + dia_2;
        cout << "O JOGO DUROU " << tempo_total << " HORA(S)" << endl;
    
    }else{
        tempo_total = final - inicio;
        cout << "O JOGO DUROU " << tempo_total << " HORA(S)" << endl;
    }
    return 0;
}
