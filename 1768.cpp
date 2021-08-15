#include <bits/stdc++.h>
using namespace std;

int main() {
    int testCases;
    while(cin >> testCases){   
        int space = testCases / 2;
        for(int c = 1; c <= testCases; c += 2){
            for(int j = 0; j < space; j++) cout << " ";
            for(int j = 0; j < c; j++) cout << "*";
            cout << endl;
            space--;
        }
        space = testCases / 2;
        for(int c = 1; c <= 3; c += 2){
            for(int j = 0; j < space; j++) cout << " ";
            for(int j = 0; j < c; j++) cout << "*";
            cout << endl;
            space--;
        }
        cout << endl;   
    } 
return 0;
}
