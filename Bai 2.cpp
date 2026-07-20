#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = rand();
   
    
    cout << "Secret: " << n << endl;

    int cnt = 0;

    int m;
    
    cout << "Nhap so: ";

    while (m != n){
        cin >> m;
        cnt++;
        
        if (m < n){
            cout << "Qua nho";
        }
        else if ( m > n ){
            cout << "Qua lon";
        }
    }

    cout << "Chuc mung" << "\n";

    cout << "Dung sau" << " " << cnt << " " << "lan doan";
}
