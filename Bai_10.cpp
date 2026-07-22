#include <bits/stdc++.h>
using namespace std;

struct Student{
    string id;
    string name;
    int age;
    float gpa;   
};

vector <Student> ds;

void them(){
    Student s;

    cout << "Nhap ma sinh vien: ";
    cin >> s.id;
    cin.ignore();

    cout << "Nhap ten: ";
    getline (cin , s.name);

    cout << "Nhap tuoi: ";
    cin >> s.age;

    cout << "Nhap GPA: ";
    cin >> s.gpa; 

    ds.push_back(s);
}

void hienthi(){
    if (ds.empty()){
        cout << "Khong co thong tin" << "\n";
    }

    for (Student s : ds){
        cout << "ID: " << s.id << "\n";
        cout <<  "Name: " << s.name << "\n";
        cout << "Age: " << s.age << "\n";
        cout << "GPA: " << s.gpa << "\n";

    }
}

void timkiem(){
    string id;
    cout << "Nhap ma sinh vien: ";
    cin >> id;

    for (Student s : ds){
        if (s.id == id){
            cout << "ID: " << s.id << "\n";
            cout <<  "Name: " << s.name << "\n";
            cout << "Age: " << s.age << "\n";
            cout << "GPA: " << s.gpa << "\n";
            return;
        }
    }
    cout << "Khong ton tai" << "\n";
    

}

void suagpa(){
    string id;
    cout << "Nhap ma sinh vien: ";
    cin >> id;

    for (Student &s : ds){
        if (s.id == id){
            cout << "Nhap GPA moi: ";
            cin >> s.gpa;
            cout << "Da cap nhat!" << "\n";
            return;
        }
        
    }
    cout << "Khong ton tai" << "\n";
    
}

void xoasv(){
    string id;
    cout << "Nhap ma sinh vien: ";
    cin >> id;

    for ( int i = 0 ; i < ds.size(); i++){
        if(ds[i].id == id ){
            ds.erase(ds.begin() + i);
            cout << "Xoa thanh cong" << "\n";
            return;
        }
       
    }
    cout << "Khong ton tai" << "\n";
        
    
}


int main(){
    cout << "---------MENU---------" << "\n";
        cout << "1. Them sinh vien" << "\n";
        cout << "2. Hien thi" << "\n";
        cout << "3. Tim theo MSSV" << "\n";
        cout << "4. Sua GPA" << "\n";
        cout << "5. Xoa sinh vien" << "\n";
        cout << "0. Thoat" << "\n";
    
    int n;

    do{
        

        cout << "Nhap lua chon: ";
        cin >> n;

        switch(n){
            case 1:
            them();
            break;
            
            case 2:
            hienthi();
            break;

            case 3:
            timkiem();
            break;

            case 4:
            suagpa();
            break;

            case 5:
            xoasv();
            break;    

            case 0:
            cout << "Ket thuc chuong trinh";
            return 0;

        }

    }while (n = 1000000);
}