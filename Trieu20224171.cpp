// Ham tinh diem trung binh he 10, gpa trung binh và diem chu trung binh cua tat ca sinh vien
void tinhDiemTrungBinh(SinhVien* head, float &diemTBH10, float &gpaTB, string &diemChuTB) {
    if (head == NULL) {
        cout << "Danh sach sinh vien rong.\n";
        diemTBH10 = 0.0;
        gpaTB = 0.0;
        diemChuTB = "F";
        return;
    }
    
    float tongDiemH10 = 0.0;
    float tongGPA = 0.0;
    int soLuongSinhVien = 0;

    SinhVien* hienTai = head;
    while (hienTai != NULL) {
        tongDiemH10 += hienTai->diemH10;
        tongGPA += hienTai->diemH4;
        soLuongSinhVien++;
        hienTai = hienTai->next;
    }

    // Tra ve diem trung binh la tong diem chia cho so luong sinh vien
    diemTBH10 =  tongDiemH10 / soLuongSinhVien;
    gpaTB =  tongGPA / soLuongSinhVien;
    
   // Tinh diem he chu trung binh
   if(gpaTB<1.0) {
   	diemChuTB = "F";
   	} else if(gpaTB>=1.0 && gpaTB<1.5) {
   		diemChuTB = "D";
   	} else if(gpaTB>=1.5 && gpaTB<2.0) {
   		diemChuTB = "D+";
   	} else if(gpaTB>=2.0 && gpaTB<2.5) {
   		diemChuTB = "C";
   	} else if(gpaTB>=2.5 && gpaTB<3.2) {
   		diemChuTB = "B";
   	} else if(gpaTB>=3.2 && gpaTB<3.6) {
   		diemChuTB = "A";
   	} else if(gpaTB>=3.6 && gpaTB<=4.0) {
   		diemChuTB = "A+";
    }
}
// Ham in danh sach sinh vien
void inDanhSach(SinhVien* head) {
    if (head == NULL) {
        cout << "Danh sach sinh vien rong.\n";
        
        return;
    }

    cout << "Danh sach sinh vien:\n";
    SinhVien* hienTai = head;
    while (hienTai != NULL) {
        cout << "Ma so: " << hienTai->id << endl;
        cout << "Ten: " << hienTai->ten << endl;
        cout << "Diem: " << hienTai->diemH10 << " (GPA: " << hienTai->diemH4 << "; diem he Chu: " << hienTai->diemChu << ")" << endl;
        hienTai = hienTai->next;
    }
}
