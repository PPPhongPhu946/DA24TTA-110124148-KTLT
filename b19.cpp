#define SIZE 100
#include <stdio.h>
#include <math.h>
void nhapMang(int a[], int n);
void xuatMang(int a[], int n);
int tongMang(int a[], int n);
int tongduong(int a[], int n);
int tongle(int a[], int n);
int demam(int a[], int n);
int demle(int a[], int n);
int demSNT(int a[], int n);
int KTSNT(int n);
int SoNTDT(int a[],int n);
int main()
{
	int A[SIZE];
	int n, kq;
	
	do
	{
		printf("\nNhap vao so phan tu: ");
		scanf("%d", &n);
	}while(n<=0||n>100);
	
	//n hop le
	//goi ham cau a
	nhapMang(A,n);
	
	//Goi ham cau b
	printf("\nMang vua nhap la: ");
	xuatMang(A,n);
	
	//Goi ham cau c
	/*kq = tongMang(A,n);
	printf("\nTong cac gia tri trong mang la %d", kq);
	return 0;
	
	//Goi ham cau d
	kq=tongduong(A,n);
	printf("\nTong cac gia tri duong trong mang la %d", kq);
	return 0;
	
	//Goi ham cau e
	kq=tongle(A,n);
	printf("\nTong cac gia tri %d",kq);
	return 0;
	
	//Goi ham cau f
	kq=demam(A,n);
	printf("\nTong cac gia tri %d",kq);
	return 0;
	
	//Goi ham cau g 
	kq=demle(A,n);
	printf("\nTong cac gia tri %d",kq);
	return 0;
	
	//Goi ham cau h
	kq=demSNT(A,n);
	printf("\nSo phan tu la so nguyen to la %d",kq);
	return 0;
	
	//Goi ham cau i
	kq=SoNTDT(A,n);
	printf("\nSo nguyen to dau tien la %d",kq);
	return 0;*/
}

int SoNTDT(int a[],int n)
{
	int i;
	for (i=0;i<n;i++)
	{
		if(KTSNT(a[i])==1)
		{
			printf("%d\n",i);
			break;
		}
	}
}

int demSNT(int a[], int n)
{
	int dem = 0;
	int i;
	for (i=0;i<n;i++){
		if(KTSNT(a[i])==1){
			dem = dem + 1;
		}
		return dem;
	}
}

int KTSNT(int n)
{
    if(n < 2){
        return 0; // loai so  và 0, 1
    }
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            return 0; // ket thúc ngay
        }
    }
    return 1; // là sa nguyên to
}

int demle(int a[], int n)
{
	int dem = 0;
	int i;
	for (i=0;i<n;i++){
		if (a[i]%2!=0){
			dem = dem + 1;
		}
	}
	return dem;
}

int demam(int a[], int n)
{
	int dem = 0;
	int i;
	for (i=0;i<n;i++){
		if (a[i]<0){
			dem = dem + 1;
		}
	}
	return dem;
}

int tongle(int a[], int n)
{
	int tong = 0;
	int i;
	for(i=0;i<n;i++){
		if (i%2!=0){
			tong = tong + a[i];
		} 	
	}
	return tong;
}

int tongduong(int a[], int n)
{
int tong = 0;
	int i;
	for(i=0;i<n-1;i++){
		if (a[i]>0){
			tong = tong + a[i];
		}
	}
	return tong;
}

int tongMang(int a[], int n)
{
	int tong = 0;
	int i=0;
	do
	{
		tong = tong + a[i];
		i++;
	}while(i<=n-1);
	return tong;
}

void xuatMang(int a[], int n)
{
	int i;
	for(i=0; i<=n-1; i++)
	{
		printf("%8d", a[i]);
	}
}
void nhapMang(int a[], int n)
{
	int i;
	
	i = 0;
	while(i<=n-1)
	{
		printf("\nNhap gia tri tai vi tri %d: ", i);
		scanf("%d", &a[i]); //a+i
		i++;
	}
}
