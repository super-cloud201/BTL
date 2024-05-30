// sap xep theo ten
void SapXepTheoTen(DanhSach& ds) {
    bool daSapXep;
    SinhVien* p;
    SinhVien* q = nullptr; 

    do {
        daSapXep = true;
        p = ds.pHead;

        while (p->pNext != q) {
            if (p->hoTen > p->pNext->hoTen) {
                // hoan doi thong tin 2 sinh vien
                swap(p->maSV, p->pNext->maSV);
                swap(p->hoTen, p->pNext->hoTen);
                swap(p->diemGiuaKy, p->pNext->diemGiuaKy);
                swap(p->diemCuoiKy, p->pNext->diemCuoiKy);
                daSapXep = false;
            }
            p = p->pNext;
        }
        q = p; 
    } while (!daSapXep);
}

// ham sap xep sinh vien theo diem 
void SapXepTheoDiem(DanhSach& ds) {
    bool daSapXep;
    SinhVien* p;
    SinhVien* q = nullptr;

    do {
        daSapXep = true;
        p = ds.pHead;

        while (p->pNext != q) {
            float diemTB1 = TinhDiemTrungBinh(*p);
            float diemTB2 = TinhDiemTrungBinh(*(p->pNext));
            if (diemTB1 < diemTB2) {
                swap(*p, *(p->pNext)); 
                daSapXep = false;
            }
            p = p->pNext;
        }
        q = p;
    } while (!daSapXep);
}

// sap xep theo ma so sinh vien
void SapXepTheoMaSV(DanhSach& ds) {
    bool daSapXep;
    SinhVien* p;
    SinhVien* q = nullptr;
    do {
        daSapXep = true;
        p = ds.pHead;

        while (p->pNext != q) {
            if (p->maSV > p->pNext->maSV) {
                swap(*p, *(p->pNext)); 
                daSapXep = false;
            }
            p = p->pNext;
        }
        q = p;
    } while (!daSapXep);
}