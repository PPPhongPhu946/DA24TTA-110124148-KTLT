#include<stdio.h> 
#include <math.h>
void print1toN(int n);
void inchan(int n);
void inchia5(int n);
int sont(int n);
int tongtu1denN(int n);
int tongcacsole(int n);
int TongSNTnhohonN(int n);
float TBcongsole(int n);
float TBcongSNT(int n);
int main ()
{
	int n,i;
	do{
		printf("Nhap vao so nguyen n (0<n<=100) =");
		scanf("%d",&n);
	}while (i<0 || i>100);
	
	/*printf("\nSo nguyen tu 1 den %d la : ",n);print1toN(n);
	printf("\nIn ra so chan tu 1 den %d la : ",n);inchan(n);
	printf("\nCac so chia het cho 5 trong doan tu 1 den %d la :",n);inchia5(n);*/

	printf("\nGia tri so nguyen to nho hon %d la : ", n);
	for(int i=2;i<n;i++)
	{
		if(sont(i)==1)
		{
			printf("%5d ",i);
		}
	}
	
			
/*	printf("\nTong cac gia tri tu 1 den %d la %d :",n,tongtu1denN(n));
	printf("\nTong cac so le tu 1 den %d la %d:",n,tongcacsole(n));
	printf("\nTong cac so nguyen to nho hon %d la : %d",n,TongSNTnhohonN(n));
	printf("\nTrung binh cong so le tu 1 den %d la : %.2f",n,TBcongsole(n));
	printf("\nTrung binh cong so nguyen to nho hon %d la : %.2f",n,TBcongSNT(n));*/
	return 0;
}





// ham in ra tu 1 den n
void print1toN(int n)
{
    for(int i = 1; i <= n; i++){
      printf("\t%d",i);
    }
}
//-----------------------------------------------------------------//
// ham in ra so chan tu 1 den n
void inchan(int n)
{
	for (int i = 1; i<=n; ++i){
		if(i%2 == 0){
			printf("\t%d",i);
		} 
	}
}
//-------------------------------------------------------------------//
//in chia 5
void inchia5(int n)
{
	for (int i = 1; i<=n; ++i){
		if(i%5==0){
			printf("\t%d",i);
		}
	}
}
//---------------------------------------------------------------------//
//So nguyen to 
int sont(int n)
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
//----------------------------------------------------------------------//
//tong cac gia tri tu 1 den n
int tongtu1denN(int n)
{
	int s=0;
	for(int i=1;i<=n;i++)
	{
		s+=i;
	}
	return s;
}
//-----------------------------------------------------------------------//
//tinh tong cac so le 
int tongcacsole(int n)
{
	int s=0;
	for(int i=1;i<=n;i=i+2)
	{
		s+=i;
	}
	return s;
}
//------------------------------------------------------------//
// tong so nguyen to nho hon N
int TongSNTnhohonN(int n)
{
	int s=0;
	for(int i=1;i<n;i++)
	{
		if(sont(i)==1)
		{
			s+=i;
		}
	}
	return s;
}
//--------------------------------------------------------//
// TBC so le
float TBcongsole(int n)
{
	int dem=0;
	float s=0;
	for(int i=1;i<=n;i=i+2)
	{
		s+=i;
		dem++;	
	}
	s=(float)s/dem;
	return s;
}
//----------------------------------------------------------//
// TBC so nguyen to
float TBcongSNT(int n)
{
	int dem=0;
	float s=0;
	for(int i=1;i<n;i++)
	{
		if(sont(i)==1)
		{
			s+=i;
			dem++;
		}
	}
	return s/dem;
}





	
	


	



