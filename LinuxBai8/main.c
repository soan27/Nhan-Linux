#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 100
void nhap(float a[][MAX],int m,int n)
{
    for(int j=0; j<m; j++)
    {
        for(int i=0; i<n; i++)
        {
            scanf("%f",&a[j][i]);
        }
    }
}
void xuat(float a[][MAX],int m,int n)
{
    for(int j=0; j<m; j++)
    {
        for(int i=0; i<n; i++)
        {
            printf("%10f",a[j][i]);
        }
        printf("\n");
    }
}
float tongAm(float a[][MAX],int m,int n)
{
    float tongAm=0;
    for(int j=0; j<m; j++)
    {
        for(int i=0; i<n; i++)
        {
            if(a[j][i]<0)
            {
                tongAm+= a[j][i];
            }
        }

    }
    return tongAm;
}
int main()
{
    int m,n;
    printf("Nhap so dong va so cot: ");
    scanf("%d%d", &m,&n);
    float a[m][n];
    nhap(a,m,n);
    xuat(a,m,n);
    printf("Tong Am: %f", tongAm(a,m,n));
    return 0;
}
