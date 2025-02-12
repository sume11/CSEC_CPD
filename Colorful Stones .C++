#include <iostream>
#include <string>
using namespace std;
int main() {
    string s, t;
    cin >> s >> t;
    int current_position = 0;
    for (char instruction_char : t) {
        string instruction;
        if (instruction_char == 'R') {
            instruction = "R";
        } else if (instruction_char == 'G') {
            instruction = "G";
        } else {
            instruction = "B";
        }
        if (s[current_position] == instruction[0]) {
            current_position++;
        }
    }
    cout << current_position + 1 << endl;
    return 0;
}
