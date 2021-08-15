#include <bits/stdc++.h>

using namespace std;

int main() {
  int numberStrings;

  cin >> numberStrings;
  cin.ignore();

  while (numberStrings--){
    string name;
    getline(cin,name);

    for (int c = 0; c < name.size(); c++){
      if ((name[c] >= 'a' && name[c] <= 'z') || (name[c] >= 'A' && name[c] <= 'Z')){
        name[c] += 3;
      }
  }
  reverse(name.begin(), name.end());
    for(int c = name.size()/2; c < name.size(); c++){
      name[c] -= 1;
    }
  cout << name << endl;
}
return 0;
}
