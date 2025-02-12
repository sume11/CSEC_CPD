#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;
char toUpper(char c) {
  if (islower(c)) {
    return toupper(c);
  }
  return c;
}
char toLower(char c) {
  if (isupper(c)) {
    return tolower(c);
  }
  return c;
}
int main() {
    string s;
    cin >> s;
int uppercase_count = 0;
    int lowercase_count = 0;
for (size_t i = 0; i < s.length(); ++i) {
        if (isupper(s[i])) {
            uppercase_count++;
        } else {
            lowercase_count++;
        }
    }
if (uppercase_count > lowercase_count) {
        transform(s.begin(), s.end(), s.begin(), toUpper);
    } else {
        transform(s.begin(), s.end(), s.begin(), toLower);
    }
    cout << s << endl;
    return 0;
}
