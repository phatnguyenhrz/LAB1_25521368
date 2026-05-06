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
     cout<< "Phan so cua ban la: ";
     if(a.mau == 1) cout<< a.tu;
     else cout<< a.tu << "/" << a.mau;
}

int main()
{
    PhanSo a;
    Nhap(a);
    RutGon(a);
    Xuat(a);
    return 0;
}
