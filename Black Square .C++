#include <iostream>
#include <string>
using namespace std;
int main() {
  int a[4];
  for (int i = 0; i < 4; ++i) {
    cin >> a[i];
  }
  string s;
  cin >> s;
  int calories = 0;
  for (int i = 0; i < s.length(); ++i) {
    calories += a[s[i] - '1'];
  }
  cout << calories << endl;
  return 0;
}
