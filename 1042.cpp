#include <iostream>

using namespace std;

int main() {
  int a, b, c;
  
  cin >> a >> b >> c;

  if (a > b){
    if (a > c){
      int maior = a;
    } else {
      cout << b << endl;
      cout << a << endl;
      cout << c << endl;

      cout << endl;
      cout << a << endl;
      cout << b << endl;
      cout << c << endl;
      return 0;
    }
    if (b > c) {
      cout << c << endl;
      cout << b << endl;
      cout << a << endl;
    } else {
      cout << b << endl;
      cout << c << endl;
      cout << a << endl;
    }
  }
  else if (b > c){
    int maior = b;
    if (a > c) {
      cout << c << endl;
      cout << a << endl;
      cout << b << endl;
    } else {
      cout << a << endl;
      cout << c << endl;
      cout << b << endl;
    }
  } else if (c > a) {
    int maior = c;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
  }
  cout << endl;
  cout << a << endl;
  cout << b << endl;
  cout << c << endl;

  return 0;
  }
