#include <iostream>

using namespace std;

int main(){
  string name;

  while (getline(cin, name)){
    int advice = 0;

    for (int c = 0; c < name.size(); c++){
      if (name[c] == 32) continue;

      if (advice == 0){
        if (name[c] >= 'a' and name[c] <= 'z'){
          name[c] -= 32;
          
        }
        advice = 1;
      }
      else{
          if (name[c] >= 'A' and name[c] <= 'Z'){
            name[c]  += 32;
          }
        advice = 0;
        }
      }
      cout << name << endl;

  }
  return 0;
}
