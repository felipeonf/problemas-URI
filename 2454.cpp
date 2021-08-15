#include <iostream>
 
using namespace std;

int main() {
    int porta_1, porta_2;

    cin >> porta_1 >> porta_2;
    if (porta_1 == 0) {
        cout << "C" << endl;
    } else if (porta_2 == 1) {
        cout << "A" << endl;
    } else{
        cout << "B" << endl;
    }
    return 0;
}
