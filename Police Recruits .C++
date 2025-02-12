#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
   int untreated_crimes = 0;
    int officers = 0;
for (int i = 0; i < n; ++i) {
        int event;
        cin >> event;
    if (event == -1) {
            if (officers > 0) {
                officers--;
            } else {
                untreated_crimes++;
            }
        } else {
            officers += event;
        }
    }
    cout << untreated_crimes << endl;
    return 0;
}
