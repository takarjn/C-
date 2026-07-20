//Bai 1
#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int bl = 1000000;

    int atm = 0;
    

  

    while (atm <= 4){

        cin >> atm;
        if (atm == 1){
            cout << bl;
            
        }

        else if (atm == 2){
            int n;
            cin >> n;

            bl += n;
            cout << bl;

        }

        else if (atm == 3){
            int n;
            cin >> n;

            if (n > bl){
                cout << "ERROR";
            }
            else cout << bl - n;
        }

        else if (atm == 4){
            return 0;
        }
    }

    
}