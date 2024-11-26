#define SIZE 100
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
void nhapmang (float a[], int n);
void xuatmang (float a[], int n);
float tinhtong (float a[], int n);
float tbc_vtle (float a[], int n);
int demduong (float a[], int n);
void sapxep (float a[], int n);
void GTVTL (float a[], int n);
void VTGIATRI0 (float a[], int n);
void giatrilonI (float a[], int n);
void vitrilonIDT(float a[], int n);
int main()
{
	float A[SIZE];
	float kq;
	int n;
	
	do
	{
		printf("\nNhap vao so phan tu: ");
		scanf("%d", &n);
	}while(n<=0||n>100);
	
	//goi ham cau a
	nhapmang(A,n);
	
	//goi ham cau b
	xuatmang(A,n);
	
	//goi ham cau c
	/*kq=tinhtong(A,n);
	printf("\nTong cac phan tu la :%f ",kq);
	
	//goi ham cau d
	kq=tbc_vtle(A,n);
	printf("\nTBC cac phan tu la :%.2f ",kq);
	
	//goi ham cau e
	kq=demduong(A,n);
	printf("\nTong cac phan tu duong la :%.f ",kq);
	
	//goi ham cau f 
	sapxep(A,n);
	
	//goi ham cau g
	GTVTL (A,n);
	
	//goi ham cau h 
	VTGIATRI0 (A,n);
	
	//goi ham cau i
	giatrilonI(A,n);*/
	
	//goi ham cau j
	vitrilonIDT(A,n);
	return 0;
}
void vitrilonIDT(float a[], int n)
{
	printf("vi tri dau tien co gia tri lon nhat trong mang la: ");
	for (int i=0;i<n;i++)
	{
		if (a[i]==max(a,n))
		{
			printf("%d ",i);
			return;
		}
	}
}

void giatrilonI (float a[], int n)
{
	int i=0;
	int max=0;
	for (i=0;i<n;++i)
	{
		if (a[i]>max)
		{
			max=a[i];
		}
	}
	printf("\ngia tri lon nhat la :%d",max);

}

void VTGIATRI0 (float a[], int n)
{
	int i =0;
	for (i=0;i<n;++i)
	{
		if (a[i]==0)
		{
			printf("\nVi tri co gia tri bang 0 la :%d",i);
		}
	}
}

void GTVTL (float a[], int n)
{
	int i=0;
	for (i=0;i<n;++i)
	{
		if (fmod(i,2)!=0)
		{
			printf("\ngia tri tai vi tri le la :%.2f",a[i]);
		}
	}
}

void sapxep (float a[], int n)
{
    for(int i=0; i< n-1; i++)
    {
        for(int j=i+1; j< n; j++)
        if(a[i]>a[j])//neu a[i] > a[j]
        {
            //dung temp lam trung gian doi a[i] voi a[j]
            float temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
    printf("\nMang sau khi sap xep la:\n");
    //hien thi mang sap xep ra man hinh
    for(int i=0; i< n; i++)
    {
        printf("%.2f \t",a[i]);
    }
}

int demduong (float a[], int n)
{
	int dem=0;
	int i=0;
	for (i=0;i<n;i++)
	{
		if(a[i]>0)
		{
			dem=dem+1;
		}
	}
	return dem;
}

float tbc_vtle (float a[], int n)
{
	float s=0;
	int dem = 0;
	int i;
	for (i=0;i<n;i++)
	{
		if (fmod(a[i],2)!=0)
		{
			dem = dem + 1;
			s=s+a[i];
		}
	}
	return s/dem;

}

float tinhtong (float a[], int n)
{
	float tong=0;
	int i=0;
	do{
		tong = tong + a[i];
		++i;
	}while(i<=n-1);
	return tong; 
}

void xuatmang (float a[], int n)
{
	int i;
	for(i=0; i<=n-1; i++)
	{
		printf("%8.2f", a[i]);
	}
}

void nhapmang (float a[], int n)
{
	int i;
	
	i = 0;
	while(i<=n-1)
	{
		printf("\nNhap gia tri tai vi tri %d: ", i);
		scanf("%f", &a[i]); //a+i
		i++;
	}
}
