#include <iostream>
#include <string.h>
using namespace std;

int main() {
    int testCase;
    cin >> testCase;
    while (testCase--){
      string stringOne, stringTwo;

      cin >> stringOne >> stringTwo;
      int wordOne = 0;
      int wordTwo = 0;
      int biggest;
      while (stringOne[wordOne] != '\0') wordOne++;
      while (stringTwo[wordTwo] != '\0') wordTwo++;
      biggest = wordOne;
      if (wordOne < wordTwo) biggest = wordTwo;
      int index = 0;
      while (biggest--){
        if(index < wordOne)
          cout << stringOne[index];
        if(index < wordTwo)
          cout << stringTwo[index];
        index++;
      }
    cout << endl;

    }
    
    return 0; 
    }
  


