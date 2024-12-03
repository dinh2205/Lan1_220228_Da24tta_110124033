/* MSSV: 110124033
	Ho Va Ten: Tran Quoc Dinh
	Lop: Da24TTA*/


#include"stdio.h"

void nhaptime(float a[],int  n);
void xuattime(float a[],int n);
float tinhtongsogio(float a[],int n);
float trungbinhsogiohoc(float a[],int n);
void ngayhocnhieunhat(float a[],int n);
void ngayhocitnhat(float a[],int n);

int main()
{
	int n;
	float a[n];
	printf("moi nhap so thu (< = 7): ");
	do{
		
	scanf("%d",&n);
}while(n<0||n>7);

nhaptime(a,n);
xuattime(a,n);
printf("Tong gio = %.2f ",tinhtongsogio(a,n));
printf("Tong trung binh so gio hoc: %.2f",trungbinhsogiohoc(a,n));
ngayhocnhieunhat(a,n);
ngayhocitnhat(a,n);

return 0;
}
void nhaptime(float a[], int n)
{
    for (int i=1;i<=n; i++) 
    {
        printf("Moi nhap thu %d: ",i+1);
        scanf("%f" ,&a[i]); 
    }
}


void xuattime(float  a[],int n)
{
	int i=0;
	for(int i=1;i<=n;i++)
	{
		printf("\nThu %d: %.2f Gio",i+1,a[i]);
	}
	printf("\n");
}
float tinhtongsogio(float a[],int n)
{
	float Tong=0;
	for(int i=1;i<=n;i++)
	{
		Tong+=a[i];
	}
	return Tong;
}

float trungbinhsogiohoc(float a[],int n)
{
	float Tong=0;
	float Dem=0;
	for(int i=1;i<=n;i++)
	{
		Tong+=a[i];
		Dem++;
	}
	return Tong/Dem;
}

void ngayhocnhieunhat(float a[],int n)
{
	float max=0;
	for(int i=1;i<=n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	for(int i=1;i<n;i++)
	{
		if(a[i]==max)
			{
				printf("\nngay hoc nhieu nhat vao thu %d",i+1);
				break;
			}
	
	}
}

void ngayhocitnhat(float a[],int n)
{
	float min=0;
	for(int i=1;i<=n;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	for(int i=1;i<n;i++)
	{
		if(a[i]==min)
			{
				printf("\nngay hoc it nhat vao thu %d",i+1);
				break;
			}
	
	}
}

