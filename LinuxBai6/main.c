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
int KiemTra(int a[][MAX],int m,int n)
{

    for(int j=0; j<m; j++)
    {
        for(int i=0; i<n; i++)
        {
            if(a[j][i]%2 == 0)
            {
                if(a[j][i]<2015)
                {
                    return 1;
                }
            }
        }

    }
    return 0;
}
int main()
{
    int m,n;
    printf("Nhap so dong va so cot: ");
    scanf("%d%d", &m,&n);
    float a[m][n];
    nhap(a,m,n);
    xuat(a,m,n);
    if(KiemTra(a,m,n) == 1){
        printf("yes");
    }
    else{
        printf("No");
    }
    return 0;
}
