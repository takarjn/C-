#include <bits/stdc++.h>
using namespace std;

bool taikhoan( string username , string password){
    return (username == "admin" && password == "123456");
}

int main(){
    string username;
    string password;
    
    

    for ( int i = 1; i <= 3; i++){

        cout << "Nhap user: ";
        cin >> username;
    
        cout << "Nhap pass: ";
        cin >>  password;

        if (taikhoan(username , password)){
            cout << "Dang nhap thanh cong";
            return 0;
        }
        else cout << "Sai tai khoan hoac mat khau" << "\n";

        if (i < 3 && i > 0){
        cout << "Con" << " " << 3 - i << " " << "lan thu" << "\n";
        }

        if (3 - i == 0){
            cout << "Tai khoan da bi khoa";
        }

    
        cout << endl;
        
    }

}
