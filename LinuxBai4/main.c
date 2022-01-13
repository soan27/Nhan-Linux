#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 100

void nhap(int a[],int n)
{
    int i;
    do
    {
        printf("Nhap so phan tu: ");
        scanf("%d",&n);
        if(n <= 0 || n > MAX)
        {
            printf("So phan tu khong hop le!\n");
        }
    }
    while(n<=0 || n >MAX);
    for(i=0; i<n; i++)
    {
        printf("\n Nhap a[%d]: ",i);
        scanf("%d",&a[i]);

    }

}

void xuat(int a[], int n)
{
    int i;
    for( i = 0; i<n; i++)
    {
        printf("%4d", a[i]);
    }
}

int checkNT(int n)
{
    int i;
    if(n<2)
    {
        return 0;
    }
    else if(n>2)
    {
        if(n %2 ==0)
        {
            return 0;
        }
        for(i = 3; i <= sqrt((float) n);i +=2)
        {
            if(n%i ==0)
            {
                return 0;
            }
        }
        return 1;
    }
}

void result(int a[],int n)
{
    int b[MAX], nb = 0 ,i;
    for(i =0 ;i < n; i++)
    {
        if(checkNT(a[i]) == 1)
           {
               b[nb] = a[i];
               nb++;
           }
    }
    xuat(b,nb);
}

int main()
{
    int m,n;
    int a[MAX];

    printf("Nhap mang: ");
    nhap(a,n);
    xuat(a,n);

    printf("\n");
    printf("Mang b chua so nguyen to tu mang A la : \n");
    result(a,n);
    return 0;
}
