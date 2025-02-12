#include <iostream>
#include <numeric>
using namespace std;
int main() {
    int y, w;
    cin >> y >> w;
    int max_roll = max(y, w);
    int favorable_outcomes = 6 - max_roll + 1;
    if (favorable_outcomes <= 0) {
        cout << "0/1" << endl;
        return 0;
    }
    int common_divisor =gcd(favorable_outcomes, 6);
    cout << favorable_outcomes / common_divisor << "/" << 6 / common_divisor << endl;
    return 0;
}
