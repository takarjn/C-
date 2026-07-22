#include <bits/stdc++.h>
using namespace std;


enum BookStatus{
    Available, 
    Borrowed
};

struct Book{
    int id;
    string title;
    string author;
    BookStatus status;
};

vector<Book> ds;

string trangthai(BookStatus s){
    if (s == Available){
        return "Available";
    }
    else return "Borrowed";
}

void them(){
    Book s;

    cout << "Nhap id: ";
    cin >> s.id;
    cin.ignore();

    cout << "Nhap ten sach: ";
    getline (cin , s.title);

    cout << "Nhap ten tac gia: ";
    getline (cin, s.author);

    int m;
    cout << "Nhap trang thai (0: Available , 1: Borrowed): ";
    cin >> m;
    if (m == 0){
        s.status = Available;
    }
    
    else s.status = Borrowed;

   

    ds.push_back(s);
}

void hienthi(){
    for (Book &s : ds){
        cout << "ID: " << s.id << "\n";
        cout << "Ten sach: " << s.title << "\n";
        cout << "Ten tac gia: " << s.author << "\n";
        cout << "Trang thai: " << trangthai(s.status) << "\n"; 
    }
    if (ds.empty()){
        cout << "Khong co sach hien tai!" << "\n";
    }
}

void muonsach(){
    int id ;
    cout << "Nhap id sach can muon: ";
    cin >> id;

    for ( Book &s : ds){
        if (s.id == id){
            if (s.status == Borrowed){
                cout << "Sach da co nguoi muon" << "\n";
            }
            else{
                s.status = Borrowed;
                cout << "Muon sach thanh cong" << "\n";
                return;
            }
        }
    }
    cout << "Khong ton tai!" << "\n";
    
}

void trasach(){
    int id;
    cout << "Nhap id sach can tra: ";
    cin >> id;

    for (Book &s : ds){
        if (s.id == id){
            if (s.status == Available){
                cout << "Sach chua co nguoi muon" << "\n";
            }
            else{  
                s.status = Available;
                cout << "Tra sach sach thanh cong" << "\n";
                
            }
            return;
        }
        
    }
    cout << "Khong ton tai!" << "\n";
}

void timsach(){
    int id;
    cout << "Nhap id de tim kiem sach: ";
    cin >> id;

    for (Book s : ds){
        if (s.id == id){
            cout << "ID: " << s.id << "\n";
            cout << "Ten sach: " << s.title << "\n"; 
            cout << "Ten tac gia: " << s.author << "\n";
            cout << "Trang thai: " << trangthai(s.status) << "\n";
            return;
        }
    }
    cout << "Khong ton tai!" << "\n";
}

void xoasach(){
    int id;
    cout << "Nhap id de xoa sach: ";
    cin >> id;

    for ( int i = 0 ; i < ds.size(); i++){
        if (ds[i].id == id){
            ds.erase(ds.begin() + i);
            cout << "Xoa thanh cong" << "\n";
        }
        
    }
    return;
}

void thongke(){
    int cntav = 0;
    int cntbr = 0;

    for ( Book s : ds){
        if (s.status == Available){
            cntav++;
        }
        else cntbr++;
    }

    cout <<"-----THONG KE-----" << "\n";
    cout << "Tong so sach: " << cntav + cntbr << "\n";
    cout << "Sach dang co: " << cntav << "\n";
    cout << "Sach cho muon: " << cntbr << "\n";
}



int main() {
    int n;

    cout << "----------Library----------" << "\n";
    cout << "1. Them sach" << "\n";
    cout << "2. Hien thi" << "\n";
    cout << "3. Muon sach" << "\n";
    cout << "4. Tra sach" << "\n";
    cout << "5. Tim sach" << "\n";
    cout << "6. Xoa sach" << "\n";
    cout << "7. Thong ke" << "\n";
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
            muonsach();
            break;

            case 4: 
            trasach();
            break;

            case 5:
            timsach();
            break;
            
            case 6: 
            xoasach();
            break;

            case 7:
            thongke();
            break;

            case 0:
            cout << "Ket thuc chuong trinh!!!" << "\n";
            return 0;
        }
        
    }while (n != 0);
}
