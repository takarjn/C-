#include <bits/stdc++.h>
using namespace std;

int main(){

    vector <string> students;

    int n;

    cout << "----------Menu----------" << "\n";
    cout << "1. Them sinh vien" << "\n";
    cout << "2. Xoa sinh vien" << "\n";
    cout << "3. Hien thi danh sach" << "\n";
    cout << "4. Tim sinh vien" << "\n";
    cout << "5. Dem so sinh vien" << "\n";
    cout << "0. Thoat" << "\n";

    do{
        cout << "Nhap lua chon: " << "\n";
        cin >> n;
        cin.ignore();
        
        if (n == 1){
            string ten;
            cout << "Nhap ten sinh vien: " << "\n";
            getline (cin , ten);
            
            students.push_back(ten);
            cout << "Them thanh cong" << "\n";
        }

        if (n == 2){
            string ten;
            cout << "Nhap ten sinh vien can xoa: " << "\n";

            getline (cin , ten);

            int check = 0;

            for ( int i = 0 ; i < students.size(); i++){
                if (students[i] == ten){
                    students.erase(students.begin() + i);
                    check = 1;
                    break;
                }
            }

            if (check == 0){
                cout << "Khong ton tai" << "\n";
            }
        }

        if (n == 3){
            cout << "Danh sach sinh vien hien tai: " << "\n";
            for ( int i = 0; i < students.size(); i++){
                cout << i + 1 << "." << students[i] << "\n";
            }

            if(students.size() == 0){
                cout << "Chua nhap sinh vien" << "\n";
            }
        }

        if ( n == 4){
            string ten;
            cout << "Nhap ten sinh vien can tim: " << "\n";
            getline (cin , ten);

            for ( int i = 0 ; i < students.size(); i++){
                if (students[i] == ten){
                    cout << "Co" << "\n";
                }
                else cout << "Khong ton tai" << "\n";
            }
        }

        if (n == 5){
            cout << "So sinh vien hien tai la: " << students.size() << "\n";
            
        }

        if (n == 6){
            cout << "Thoat" << "\n";
            return 0;
        }

    }while (n != 100000);
   
}






