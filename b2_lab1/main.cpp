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
int SoSanh(PhanSo a, PhanSo b){
     int l = a.tu * b.mau;
     int r = b.tu * a.mau;
     if(l>r) return 1;
     else if(l==r) return 0;
     else return -1;
}

void Xuat(PhanSo a, PhanSo b){
     if(SoSanh(a,b)==1){
        cout<< "So lon nhat la = ";
        if(a.mau==1) cout<< a.tu;
        else cout<< a.tu << "/" << a.mau;
     }

     else if(SoSanh(a,b)==-1){
        cout<< "So lon nhat la = ";
        if(b.mau==1) cout<< b.tu;
        else cout<< b.tu << "/" << b.mau;
     }

     else{
        cout<< "Hai so bang nhau = ";
        if(a.mau==1) cout<< a.tu;
        else cout<< a.tu << "/" << a.mau;
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


int main()
{
    PhanSo a,b;

    cout<< "Nhap phan so A\n";
    Nhap(a);
    cout<< "Nhap phan so B\n";
    Nhap(b);
    RutGon(a);
    RutGon(b);
    Xuat(a,b);
    return 0;
}
