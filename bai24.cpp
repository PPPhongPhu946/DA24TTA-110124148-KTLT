#include <stdio.h>
typedef struct {
    int tuSo;   
    int mauSo; 
} PHAN_SO;
void nhapPhanSo(PHAN_SO *ps);
void xuatPhanSo(PHAN_SO ps);
int UCLN(int a, int b);
void rutGonPhanSo(PHAN_SO *ps);
PHAN_SO congPhanSo(PHAN_SO ps1, PHAN_SO ps2); 
PHAN_SO truPhanSo(PHAN_SO ps1, PHAN_SO ps2); 
PHAN_SO nhanPhanSo(PHAN_SO ps1, PHAN_SO ps2);
PHAN_SO chiaPhanSo(PHAN_SO ps1, PHAN_SO ps2);
int main()
{
	PHAN_SO ps1, ps2, kq;
	printf("Nhap phan so thu 1\n");
    nhapPhanSo(&ps1);
    printf("Nhap phan so thu 2\n");
    nhapPhanSo(&ps2);
    
    printf("Phan so thu 1 sau khi rut gon la :\n");
    rutGonPhanSo(&ps1);
    xuatPhanSo(ps1);
    
    printf("Phan so thu 2 sau khi rut gon la :\n");
    rutGonPhanSo(&ps2);
    xuatPhanSo(ps2);
    
    kq = congPhanSo(ps1, ps2);
    printf("Ket qua cua %d/%d + %d/%d = ", ps1.tuSo, ps1.mauSo, ps2.tuSo, ps2.mauSo);
    xuatPhanSo(kq);
    
    kq = truPhanSo(ps1, ps2);
    printf("Ket qua cua %d/%d - %d/%d = ", ps1.tuSo, ps1.mauSo, ps2.tuSo, ps2.mauSo);
    xuatPhanSo(kq);
    
    kq = nhanPhanSo(ps1, ps2);
    printf("Ket qua cua %d/%d * %d/%d = ", ps1.tuSo, ps1.mauSo, ps2.tuSo, ps2.mauSo);
    xuatPhanSo(kq);
    
    kq = chiaPhanSo(ps1, ps2);
    printf("Ket qua cua %d/%d / %d/%d = ", ps1.tuSo, ps1.mauSo, ps2.tuSo, ps2.mauSo);
    xuatPhanSo(kq);
    
    return 0;
    
}

PHAN_SO congPhanSo(PHAN_SO ps1, PHAN_SO ps2) {
    PHAN_SO kq;
    kq.tuSo = ps1.tuSo * ps2.mauSo + ps2.tuSo * ps1.mauSo;
    kq.mauSo = ps1.mauSo * ps2.mauSo;
    rutGonPhanSo(&kq);  
    return kq;
}

PHAN_SO truPhanSo(PHAN_SO ps1, PHAN_SO ps2) {
    PHAN_SO kq;
    kq.tuSo = ps1.tuSo * ps2.mauSo - ps2.tuSo * ps1.mauSo;
    kq.mauSo = ps1.mauSo * ps2.mauSo;
    rutGonPhanSo(&kq);  
    return kq;
}

PHAN_SO nhanPhanSo(PHAN_SO ps1, PHAN_SO ps2) {
    PHAN_SO kq;
    kq.tuSo = ps1.tuSo * ps2.tuSo;
    kq.mauSo = ps1.mauSo * ps2.mauSo;
    rutGonPhanSo(&kq);  
    return kq;
}

PHAN_SO chiaPhanSo(PHAN_SO ps1, PHAN_SO ps2) {
    PHAN_SO kq;
    kq.tuSo = ps1.tuSo * ps2.mauSo;
    kq.mauSo = ps1.mauSo * ps2.tuSo;
    rutGonPhanSo(&kq);  
    return kq;
}

void rutGonPhanSo(PHAN_SO *ps)
{
    int ucln = UCLN(ps->tuSo, ps->mauSo);
    ps->tuSo /= ucln;
    ps->mauSo /= ucln;
}

int UCLN(int a, int b) 
{
    if (b == 0) return a;
    return UCLN(b, a % b);
}

void xuatPhanSo(PHAN_SO ps) 
{
    printf("Phan so: %d/%d\n", ps.tuSo, ps.mauSo);
}

void nhapPhanSo(PHAN_SO *ps) 
{
    do 
	{
        printf("Nhap tu so: ");
        scanf("%d", &ps->tuSo);
        printf("Nhap mau so (mau so khong duoc bang 0): ");
        scanf("%d", &ps->mauSo);
        if (ps->mauSo == 0) 
		{
            printf("Mau so khong duoc bang 0. Vui long nhap lai.\n");
        }
    } while (ps->mauSo == 0);
}
