#include <bits/stdc++.h>

using namespace std;

struct HocSinh{
    string hoten;
    float t;
    float v;
};

void Nhap(HocSinh &a){
    cout<< "Nhap ten cua hoc sinh: ";
    getline(cin,a.hoten);
    cout<< "Diem Toan: ";
    cin>> a.t;
    while(a.t<0 || a.t >10){
        cout<< "Diem Toan khong hop le, vui long nhap lai!\n";
        cout<< "Diem Toan: ";
        cin>> a.t;
    }
    cout<< "Diem Van: ";
    cin>> a.v;
    while(a.v<0 || a.v >10){
        cout<< "Diem Van khong hop le, vui long nhap lai!\n";
        cout<< "Diem Van: ";
        cin>> a.v;
    }
}

float Xuat(HocSinh a){
     return (a.t + a.v)/2;
}

int main()
{
    HocSinh hs;
    Nhap(hs);
    cout<< "Diem trung binh: " << Xuat(hs);
    return 0;
}
