#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    while(a--){
        int b;
        cin >> b;
        string c;
        cin >> c;
        int sum=0;
        //map, pie
        for(int i = 0; i < b; i ++){
            if(c[i] == 'm' && c[i+1] == 'a' && c[i+2] == 'p'){
                sum++;
                i += 2;
            }else if (c[i] == 'p' && c[i+1] == 'i' && c[i+2] == 'e'){
                sum++;
                i += 2;
            }
        }
        cout << sum << '\n';
    }

    return 0;
}