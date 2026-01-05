#include <iostream>
using namespace std;

int main() {
    int b;
    cin >> b;
    while(b--) {
        
        int a;
        cin >> a;
    
        int y = a % 2020;
        if (y <= a / 2021) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
