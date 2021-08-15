#include <iostream>
 
using namespace std;

int main() {
    int coordenada_a, coordenada_b;
    cin >> coordenada_a >> coordenada_b;
    if (coordenada_a >= 0 & coordenada_a <= 432 & coordenada_b >= 0 & coordenada_b <= 468){
        cout << "dentro" << endl;
    } else {
        cout <<"fora"<< endl;
    }
    return 0;
}
