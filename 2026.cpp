#include <iostream>
#include <string.h>
using namespace std;

int main() {
    int numOfWords;
    char word[23];
    cin >> numOfWords;
    while (numOfWords--){
        cin >> word;
        if (strlen(word) == 3 and word[0] == 'O' and word[1] == 'B')
            cout << "OBI";
        else if (strlen(word) == 3 and word[0] == 'U' and word[1] == 'R')
            cout << "URI";
        else
            cout << word;
        if (numOfWords != 0)
            cout << " ";
    }
cout << endl;
return 0;
}