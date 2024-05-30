#include <iostream>
#include <string>

using namespace std;

// Ham them sinh vien moi vao danh sach 
void themSinhVien(SinhVien* &head) {
    SinhVien* sinhVienMoi = new SinhVien;
    cout << "Nhap ma so sinh vien: ";  // MSSV
    cin >> sinhVienMoi->id;
    cout << "Nhap ten sinh vien: ";    // Ten
    cin.ignore();
    getline(cin, sinhVienMoi->ten);
    cout << "Nhap ten hoc phan: ";     // Ten hoc phan
    cin >> sinhVienMoi -> tenhocphan;
    cout << "Nhap ma hoc phan: ";      // Ma hoc phan
    cin >> sinhVienMoi -> mahocphan; 
    cout << "Nhap diem sinh vien (he 10): "; // Diem /10
    cin >> sinhVienMoi->diemH10;
}

// Ham tim thong tin sinh vien bang MSSV
void timKiemSinhVien(SinhVien* head, string id) {
    SinhVien* hienTai = head;
    while (hienTai != NULL) {
        if (hienTai->id == id) {
            cout << "Sinh vien duoc tim thay:\n";
            cout << "Ma so: " << hienTai->id << endl;
            cout << "Ten: " << hienTai->ten << endl;
            cout << "Mon hoc: " << hienTai->tenhocphan << "\n Ma hoc phan:" << hienTai->mahocphan << endl; 
            cout << "Diem: " << hienTai->diemH10 << " (GPA: " << hienTai->diemH4 << "; diem he chu: " << hienTai->diemChu << ")" << endl;
            return;
        }
        hienTai = hienTai->next;
    }
    cout << "Khong tim thay sinh vien " << id << ".\n";
}

// Ham sua diem cua  sinh vien qua MSSV
void suaThongTinSinhVien(SinhVien* head, string id) {
    SinhVien* hienTai = head;
    while (hienTai != NULL) {
        if (hienTai->id == id) {
            cout << "Nhap diem moi cho sinh vien (he 10): ";
            cin >> hienTai->diemH10;
        }
    }
    
    // Diem he 10 sang he 4 va phan he diem chu
            if (hienTai->diemH10 < 4.0) {
                hienTai->diemH4 = 0.0;
                hienTai->diemChu = "F";
            } else if (hienTai->diemH10 >= 4.0 && hienTai->diemH10 < 5.0) {
                hienTai->diemH4 = 1.0;
                hienTai->diemChu = "D";
            } else if (hienTai->diemH10 >= 5.0 && hienTai->diemH10 < 5.5) {
                hienTai->diemH4 = 1.5;
                hienTai->diemChu = "D+";
            } else if (hienTai->diemH10 >= 5.5 && hienTai->diemH10 < 6.5) {
                hienTai->diemH4 = 2.0;
                hienTai->diemChu = "C";
            } else if (hienTai->diemH10 >= 6.5 && hienTai->diemH10 < 7.0) {
                hienTai->diemH4 = 2.5;
                hienTai->diemChu = "C+";
            } else if (hienTai->diemH10 >= 7.0 && hienTai->diemH10 < 8.0) {
                hienTai->diemH4 = 3.0;
                hienTai->diemChu = "B";
            } else if (hienTai->diemH10 >= 8.0 && hienTai->diemH10 < 8.5) {
                hienTai->diemH4 = 3.5;
                hienTai->diemChu = "B+";
            } else if (hienTai->diemH10 >= 8.5 && hienTai->diemH10 <= 10) {
                hienTai->diemH4 = 4.0;
                hienTai->diemChu = "A";
            } else {
                cout << "Diem khong hop le, moi nhap lai.\n";
                return;
            }

            cout << "Thong tin sinh vien da duoc cap nhat.\n";
            return;
        }
        hienTai = hienTai->next;
    }
    cout << "Khong tim thay sinh vien " << id << ".\n";
}
