#include <iostream>

using namespace std;

int main(){
  int number;
  cin >> number;
  for (int factor = 1; factor <= 10; factor++)
  {
    cout << factor << " x " << number << " = " << factor * number << endl;  
  }
return 0;
}
