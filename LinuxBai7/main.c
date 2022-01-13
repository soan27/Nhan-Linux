#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 100
void nhap(int a[][MAX],int m,int n)
{
    for(int j=0; j<m; j++)
    {
        for(int i=0; i<n; i++)
        {
            scanf("%d",&a[j][i]);
        }
    }
}
void xuat(int a[][MAX],int m,int n)
{
    for(int j=0; j<m; j++)
    {
        for(int i=0; i<n; i++)
        {
            printf("%10d",a[j][i]);
        }
        printf("\n");
    }
}

int kiemtrasonguyen(int n)
{
    if(n<2 || (n>2 && n%2==0))
    {
        return 0;
    }

    int limit = (int)sqrt(n);
    int i;
    for(i=3; i<=sqrt(n); i+=2)
    {
        if(n%i==0)
            return 0;
    }

    return 1;
}

int demSoLuongSNT(int a[][MAX],int m,int n){
    int dem = 0;
    for(int j=0; j<m; j++)
    {
        for(int i=0; i<n; i++)
        {
            if(kiemtrasonguyen(a[j][i]) == 1){
                dem++;
            }
        }

    }
    return dem;
}
int main()
{
    int m,n;
    printf("Nhap so dong va so cot: ");
    scanf("%d%d", &m,&n);
    float a[m][n];
    nhap(a,m,n);
    xuat(a,m,n);
    printf("so cac so Nguyen to trong mang là: %d",demSoLuongSNT(a,m,n));
    return 0;
}
