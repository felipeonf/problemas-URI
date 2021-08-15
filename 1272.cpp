#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;
    cin.ignore();
    while (testCases--){
        string textLine;
        getline(cin, textLine);
        if (isalpha(textLine[0]))
            cout << textLine[0];
            for(int c= 0; c < textLine.size(); c++){
                 if (textLine[c] != ' '){
                    while(textLine[c] == ' ')
                        c++;
                }  
            if (isalpha(textLine[c]) and textLine[c-1] == ' '){
                cout << textLine[c];
            }         
        }
    cout << endl;
   }
return 0;
}