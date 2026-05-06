#include <bits/stdc++.h>

using namespace std;

struct PhanSo{
    int tu;
    int mau;
};

void Nhap(PhanSo &a){
     cout<< "Nhap tu so: ";
     cin>>a.tu;
     cout<< "Nhap mau so: ";
     cin>>a.mau;
     while(a.mau==0){
        cout<< "\nMau ban nhap khong hop le, vui long nhap lai!\n";
        cout<< "Nhap mau so: ";
        cin>>a.mau;
     }
     cout<<endl;
     if(a.mau<0){
        a.tu = -a.tu;
        a.mau = -a.mau;
     }
}

int UCLN(int a, int b){
    if(b==0) return a;
    return UCLN(b, a%b);
}

void RutGon(PhanSo &a){
     int t = UCLN(abs(a.tu),abs(a.mau));
     a.tu/=t;
     a.mau/=t;

     if(a.mau<0){
        a.tu = -a.tu;
        a.mau = -a.mau;
     }
}
void Xuat(PhanSo a){
     if(a.mau == 1) cout<< a.tu;
     else cout<< a.tu << "/" << a.mau;
}

PhanSo Tong(PhanSo a, PhanSo b){
     PhanSo kq;
     kq.tu = a.tu*b.mau + b.tu*a.mau;
     kq.mau = a.mau*b.mau;
     RutGon(kq);
     return kq;
}

PhanSo Hieu(PhanSo a, PhanSo b){
     PhanSo kq;
     kq.tu = a.tu*b.mau - b.tu*a.mau;
     kq.mau = a.mau*b.mau;
     RutGon(kq);
     return kq;
}

PhanSo Tich(PhanSo a, PhanSo b){
     PhanSo kq;
     kq.tu = a.tu*b.tu;
     kq.mau = a.mau*b.mau;
     RutGon(kq);
     return kq;
}
PhanSo Thuong(PhanSo a, PhanSo b){
     PhanSo kq;
     kq.tu = a.tu*b.mau;
     kq.mau = a.mau*b.tu;
     RutGon(kq);
     return kq;
}

int main()
{
    PhanSo a,b;
    cout<< "Nhap phan so A\n";
    Nhap(a);
    cout<< "Nhap phan so B\n";
    Nhap(b);

    cout<< "Phan so A = ";
    Xuat(a);
    cout<<endl;
    cout<< "Phan so B = ";
    Xuat(b);
    cout<<endl;

    cout<<endl;
    PhanSo tong = Tong(a,b);
    cout<< "Tong = ";
    Xuat(tong); cout << endl;

    PhanSo hieu = Hieu(a,b);
    cout<< "Hieu = ";
    Xuat(hieu); cout <<endl;

    PhanSo tich = Tich(a,b);
    cout<< "Tich = ";
    Xuat(tich); cout <<endl;

    PhanSo thuong = Thuong(a,b);
    cout<< "Thuong = ";
    Xuat(thuong);
    return 0;
}
