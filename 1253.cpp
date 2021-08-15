#include <iostream>
#include <string.h>
using namespace std;

int main(){
    int testCases;
    cin >> testCases;
    while (testCases--){
        string decriptedString;
        char encriptedString[50];
        int turns;
        cin >> encriptedString;
        cin >> turns;
        for (int c = 0; c < 50; c++){
            if(encriptedString[c] == '\0')
                break;
            if ((encriptedString[c] - turns) < 65) 
                decriptedString += (encriptedString[c] - turns) + 26;
            else 
                decriptedString += encriptedString[c] - turns;
        }
        cout << decriptedString << endl;   
    }
return 0;
}