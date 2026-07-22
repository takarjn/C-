#include <bits/stdc++.h>
using namespace std;

int main(){
    
    string s;
    cout << "1. Dem so ky tu" << "\n";
    cout << "2. Dem so chu cai" << "\n";
    cout << "3. Dem so chu so" << "\n";
    cout << "4. Dem so khoang trang" << "\n";
    cout << "5. Doi sang chu hoa" << "\n";
    cout << "6. Doi sang chu thuong" << "\n";
    cout << "7. Dao nguoc chuoi" << "\n";

    cout << "Nhap mot chuoi: ";

    getline (cin , s);

    
    int n;


    do{
        cout << "Nhap lua chon: ";
        cin >> n;
        cin.ignore(); 
        
        
        if (n == 1){
            cout << "So ky tu la: " << s.size() << "\n";
        }
        
        if ( n == 2){

            stringstream ss(s);
            vector<string> v;
            string tmp;

            while (ss >> tmp){
                v.push_back(tmp);
            }
            cout << "So chu cai la: "<< v.size() << "\n";

        }

        if (n == 3){
            int cnt = 0;
            for ( int i = 0 ; i < s.size(); i++){
                if (isdigit(s[i])){
                    cnt++;
                }
            }
            cout << "So chu so trong chuoi la: " << cnt << "\n";
        }

        if (n == 4){
            int cnt = 0;
            for ( int i = 0; i < s.size(); i++){
                if (isspace(s[i])){
                    cnt++;
                }
            }
            cout << "So khoang trang la: " << cnt << "\n";
        }



        if ( n == 5){
            for (char &c : s){
                c = toupper(c);
            }
            cout << s << "\n";
        }

        if (n == 6){
            for (char &c : s){
                c = tolower(c);
            }
            cout << s << "\n";
        }

        if (n == 7){
            reverse(s.begin() , s.end());
            cout << "Dao nguoc chuoi: " << s << "\n";
        }

    }while (n != 100000);
}