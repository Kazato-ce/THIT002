#include <iostream>
using namespace std;
class  NgayThangNam
{
private:
    int iNgay,
        iThang,
        iNam;
public:
    void Xuat()
    {
        cout << "Ngay hien tai la: " << iNgay << "/" << iThang << "/" << iNam << endl;
    }
    void Nhap()
    {
        do {
            cout << "Nhap ngay: ";
            cin >> iNgay;
            cout << "Nhap thang: ";
            cin >> iThang;
            cout << "Nhap nam: ";
            cin >> iNam;
            if (iNam < 1 || iThang < 1 || iThang > 12 || iNgay < 1 || iNgay > 31) {
                cout << "Nhap sai, vui long nhap lai" << endl;
                Nhap();
                continue;
            }
            if (iThang == 2) {
                if ((iNam % 4 == 0 && iNam % 100 != 0) || (iNam % 400 == 0)) {
                    if (iNgay > 29) {
                        cout << "Nhap sai, vui long nhap lai" << endl;
                        continue;
                    }
                } else {
                    if (iNgay > 28) {
                        cout << "Nhap sai, vui long nhap lai" << endl;
                        continue;
                    }
                }
            }
            if ((iThang == 4 || iThang == 6 || iThang == 9 || iThang == 11) && iNgay > 30) {
                cout << "Nhap sai, vui long nhap lai" << endl;
                continue;
            }
            break;
    
        } while (true);
    }
    void NgayTiepTheo(){
        iNgay++;
        if (iThang == 2 && iNam % 4 == 0 && iNam % 100 != 0 || iNam % 400 == 0)
        {
            if (iNgay == 29)
            {
                iNgay = 1;
                iThang++;
            }
        }
        else
        {
            if (iThang == 2 && iNgay == 28)
            {
                iNgay = 1;
                iThang++;
            }
        }
        if (iThang == 12 && iNgay == 31)
        {
            iNam++;
            iThang = 1;
            iNgay = 1;
        }
    }

};

