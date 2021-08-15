#include <iostream>
 
using namespace std;

int main() {
    double n1, n2, n3, n4, media;
    cin >> n1 >> n2 >> n3 >> n4;
    media = (n1 * 2 + n2 * 3 + n3 * 4 + n4 * 1 ) / 10;
    printf("Media: %.1f\n", media);

    if (media < 5.0) {
        cout << "Aluno reprovado." << endl;

    } else if (media >= 5.0 && media <= 6.9) {
        double exame, media_final;
        cout << "Aluno em exame." << endl;
        cin >> exame;
        printf("Nota do exame: %.1f\n", exame);
        media_final = (media + exame) / 2;
        if (media_final < 5.0) {
            cout << "Aluno reprovado." << endl;
        } else if (media_final >= 5.0) {
            cout << "Aluno aprovado." << endl;
        }
        
        printf("Media final: %.1f\n", media_final);

    } else if (media >= 7.0) {
        cout << "Aluno aprovado." << endl;
    }
    return 0;
}
