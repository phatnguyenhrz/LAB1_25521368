#include <bits/stdc++.h>

using namespace std;

struct NgayThangNam{
     int ngay;
     int thang;
     int nam;
};

bool NamNhuan(int n){
    // Nam chia het cho 4 la nam nhuan (ban don gian)
    if(n%4==0) return true;
    return false;
}

int SoNgayTrongThang(int thang, int nam) {
    // Cac thang co 31 ngay
         if (thang == 1 || thang == 3 || thang == 5 || thang == 7 ||
             thang == 8 || thang == 10 || thang == 12)
         return 31;
// Cac thang co 30 ngay
         if (thang == 4 || thang == 6 || thang == 9 || thang == 11)
         return 30;
// Thang 2 phu thuoc nam nhuan
         if (thang == 2) {
         if (NamNhuan(nam))
             return 29; // Nam nhuan
         else
         return 28; // Nam khong nhuan
      }
}

void Nhap(NgayThangNam &a){
     cout<< "Nhap nam: ";
     cin>> a.nam;
     //Nhap thang va kiem tra hop le
     do{
        cout<< "Nhap thang: ";
        cin>>a.thang;
        if(a.thang < 1 || a.thang > 12){
            cout<< "Thang ban nhap khong hop le, vui long nhap lai !\n";
        }
     }while(a.thang < 1 || a.thang > 12);
    //Nhap ngay va kiem tra hop le
     do{
        cout<< "Nhap ngay: ";
        cin>> a.ngay;
       // Kiem tra ngay co vuot so ngay trong thang khong
        if(a.ngay < 1 || a.ngay > SoNgayTrongThang(a.thang,a.nam)){
            cout<< "Ngay ban nhap khong hop le, vui long nhap lai !\n";
        }
     }while(a.ngay < 1 || a.ngay > SoNgayTrongThang(a.thang,a.nam));
}

void Xuat(NgayThangNam a){
     cout<< a.ngay << "/" << a.thang << "/" << a.nam;
}

void NgayThangNamTiepTheo(NgayThangNam &a){
    //Tang them 1 ngay
     a.ngay++;
    //Neu ngay vuot so ngay trong thang
     if(a.ngay > SoNgayTrongThang(a.thang,a.nam)){
        a.ngay = 1;
        a.thang++;
     }
    //Neu thang vuot qua 12
     if(a.thang > 12){
        a.thang = 1;
        a.nam++;
     }
}



int main()
{
    NgayThangNam a;
    Nhap(a);

    cout<< "Ngay hom nay: ";
    Xuat(a);

    NgayThangNamTiepTheo(a);
    cout<< "\nNgay ke tiep: ";
    Xuat(a);

    return 0;
}
