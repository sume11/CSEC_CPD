#include <iostream>
#include <set>
using namespace std;
int main() {
    int s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;
    set<int> unique_colors;
    unique_colors.insert(s1);
    unique_colors.insert(s2);
    unique_colors.insert(s3);
    unique_colors.insert(s4);
    int unique_count = unique_colors.size();
    int horseshoes_to_buy = 4 - unique_count;
    cout << horseshoes_to_buy << endl;
    return 0;
}
