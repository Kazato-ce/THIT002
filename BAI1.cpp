#include "NgayThangNam.h"
using namespace std;
int main(){
    NgayThangNam date;
    date.Nhap();
    date.Xuat();
    date.NgayTiepTheo();
    cout << "Ngay tiep theo la: ";
    date.Xuat();
return 0;
}