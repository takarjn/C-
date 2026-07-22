#include <bits/stdc++.h>
using namespace std;

double average(int a[] , int n){
    
    int sum = 0;

    int avr;

    for ( int i = 0 ; i < n; i++){
        sum += a[i];
    }

    avr = sum / n;

    return avr;
}

int mx( int a[], int n){
    
    int mx = a[0];

    for ( int i = 1 ; i < n; i++){
        mx = max(mx , a[i]);
    }
    return mx;

}

int mn( int a[] , int n){
    int mn = a[0];

    for ( int i = 1; i < n; i++){
        mn = min(mn , a[i]);
    }
    return mn;
}

int main(){
    int n;
    int m;
    
    cout << "-----Menu-----" << "\n";
    cout << "1. In toan bo diem" << "\n";
    cout <<  "2. Tim diem cao nhat" << "\n";
    cout << "3. Tim diem thap nhat" << "\n";
    cout << "4. Tinh diem trung binh" << "\n";
    cout << "5. Thoat" << "\n";
    
    cout << "Nhap so sinh vien: ";
    cin >> n;
    

    int a[n];

    cout << "Nhap diem sinh vien: ";
    for ( int i = 0 ; i < n; i++){
       
        cin >> a[i];
    }

    
    
    for ( int i = 1; i <= n; i++){
        cout << "Nhap lua chon: ";
        cin >> m;

        if( m == 1){
        for ( int i = 0 ; i < n; i++){
        cout << a[i] << "\n";
        
    }
    }
    
    else if ( m == 2){
        cout << "Diem cao nhat: " << mx(a , n) << "\n";
    }
    
    else if( m == 3){
        cout << "Diem thap nhat: " << mn(a , n) << "\n";
    }

    else if( m == 4){
        cout << "Diem trung binh: " << average(a, n) << "\n";
    }
   
    
    }
    if(m == 5){
        cout << "Thoat";
        return 0;
    }
}
