#include <iostream>

using namespace std;

int main(){
  int a, n, soma = 0;
  cin >> a >> n;
  if (n <= 0)
  {
    while (n <= 0)
    {
      cin >> n;
    }
  }
  for (int i = 0;  i <= n-1;  i = i + 1)
  {
    soma = soma + a + i;
  }

cout << soma << endl;

return 0;
}
