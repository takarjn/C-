#include <bits/stdc++.h>
using namespace std;

enum Status{
    Todo,
    Doing,
    Done
};

struct Task{
    int id;
    string title;
    Status status;

};

vector <Task> ds;

string trangthai(Status s){
    if (s == Todo){
        return "Todo";
    }
    if (s == Doing){
        return "Doing";
    }
    return "Done";
}

void them(){
    Task s;
    cout << "Nhap id: ";
    cin >> s.id;
    
    cin.ignore();

    cout << "Nhap ten cong viec: ";
    getline (cin, s.title);

    int m;
    
    cout << "Nhap trang thai (0: Todo , 1: Doing, 2: Done): ";
    
    cin >> m;

    if (m == 0){
        s.status = Todo;
    }
    else if ( m == 1){
        s.status = Doing;
    }
    else s.status = Done;

    ds.push_back(s);
}

void hienthi(){
    // string id;
    // cout << "Nhap id: ";

    for (Task &s : ds){
        cout << "ID: " << s.id << "\n";
        cout << "Cong viec: " << s.title << "\n";
        cout << "Trang thai: " << trangthai(s.status) << "\n";
    }

    if (ds.empty()){
        cout << "Khong ton tai!" << "\n";
    }
}

void trangthai(){
    int id;
    cout << "Nhap id: ";
    cin >> id;

    for (Task &s : ds){
        
        if (s.id == id){
            int m;
            cout << "Trang thai thay doi (0: Todo , 1: Doing, 2: Done)";
            cin >> m;

            if (m == 0){
                s.status = Todo;
            }
            else if ( m == 1){
                s.status = Doing;
            }
                else s.status = Done;

            cout << "Cap nhat thong tin thanh cong!" << "\n";
            return;
        }
    }
    cout << "Khong ton tai!" << "\n";
}

void hienthitheotrangthai(){
    int m;
    cout << "Trang thai thay doi: ";
    cin >> m;

    Status t;   

    if (m == 0){
        t = Todo;
    }
    else if ( m == 1){
        t = Doing;
    }
        else t = Done;


    for (Task s : ds){
        if (s.id == t){
            cout << "ID: " << s.id << "\n";
            cout << "Cong viec: " << s.title << "\n";
            cout << "Trang thai" << trangthai(s.status) << "\n";

        }
    }
}


int main(){
    int n;

    cout << "----------MENU----------" << "\n";
    cout << "1. Them cong viec" << "\n";
    cout << "2. Hien thi" << "\n";
    cout << "3. Doi trang thai" << "\n";
    cout << "4. Hien thi theo trang thai" << "\n";
    cout << "0. Thoat" << "\n";

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
            trangthai();
            break;

            case 4:
            hienthitheotrangthai();
            break;

            case 0:
            cout << "Thoat" << "\n";
            return 0;
            }

    }while (n != 0);
}

