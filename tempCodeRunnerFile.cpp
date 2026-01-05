#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int a;
    cin >> a;
    while(a--){
        long long int atthero,hphero,countenemy;
        cin >> atthero >> hphero >> countenemy;
        pair<long long int, long long int> enemy[countenemy];
        long long int damage =0;
        int safe=1;
        long long int sumhpenemy=0;
        for(int i=0;i<countenemy;i++){
            cin >> enemy[i].first;
        }
        for(int i=0;i<countenemy;i++){
            cin >> enemy[i].second;
            sumhpenemy += enemy[i].second;
        }
        sort(enemy, enemy + countenemy);
        for(int i=0;i<countenemy;i++){
            damage = ((enemy[i].second + atthero - 1) / atthero);
            if(hphero > 0 && hphero-((damage-1)*enemy[i].first) > 0){
                safe = 1;
            }else {
                safe = 0;
                break;
            }
            damage *= enemy[i].first;
            hphero -= damage;
        }
        if(safe == 1){
            cout << "YES";
        }else {
            cout << "NO";
        }
        cout << endl;
    }
}