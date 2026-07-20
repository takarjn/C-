#include <bits/stdc++.h>
using namespace std;

int main(){
    double n;
    cin >> n;

    vector <double> a(n);

    for ( int i = 0 ; i < n; i++){
        cin >> a[i];
    }

    double tb = 0;
    double sum = 0;

    int cntgioi = 0, cntdot = 0;

    double mx = a[0];
    double mn = a[0];

    for ( int i = 0 ; i < n ;i++){
        tb = (sum += a[i]) / n;

        if (a[i] >= 8){
            cntgioi++;
        }
        else if (a[i] < 5){
            cntdot++;
        }

        mx = max(a[i] , mx);

        mn = min(a[i] , mn);


    }

    cout << "Average:" <<  fixed << setprecision(1) << tb << "\n";
    cout << "Max:" << " " << mx << "\n";
    cout << "Min:" << " " << mn << "\n" ;

    cout << ">=8:" << " " << cntgioi << "\n";

    cout << "Failed:" << " " << cntdot << "\n";
    
}
