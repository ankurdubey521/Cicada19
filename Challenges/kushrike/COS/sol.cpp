#include<bits/stdc++.h>

using namespace std;

int main() {
    while(true) {
        int a, b, c;
        cin >> a >> b >> c;
        cout << (int)floor((((b * b) + (a * a) - (c * c)) / (1.00 * 2 * a * b)) * 100)<<"\n";
    }
    return 0;
}