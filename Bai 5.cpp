#include <bits/stdc++.h>
using namespace std;

double add (double a , double b){
    double sum = 0;

    sum = a + b;
    
    return sum;
}

double sub (double a, double b){
    double sub = 0;

    sub = a - b;

    return sub;

}

double mul (double a, double b){
    double mul = 0;

    mul = a * b;

    return mul;

}

double chia (double a, double b){
    double chia = 0;

    chia = a / b;


    return chia;

}

int main(){
    int n;
    cin >> n;

    int a , b;
    cin >> a >> b;


    if (n == 1){
        cout << add(a , b);
    }

    else if (n == 2){
        cout << sub(a , b);
    }

    else if (n == 3){
        cout << mul (a , b);
    }

    else if (n == 4){
        if ( b == 0){
            cout << "Khong the chia cho 0";
        }
        else cout << chia (a , b);


    }

    if (n == 5){
        return 0;
    }


    
}
