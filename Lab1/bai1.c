#include "stdio.h"
#include "conio.h"



void NhapMang(int *a,int n)
{
 for(int i=0;i<n;i++)
 {
  printf("\nNhap vao a[%d]=",i);
  scanf("%d",&a[i]);
 }
}


void XuatMang(int *a,int n)
{
 for(int i=0;i<n;i++)
 {
  printf("%4d",a[i]);
 }
}


int SoLuongPhanTuLe(int *a,int n)
{
 int dem=0;
 for(int i=0;i<n;i++)
 {
  if(a[i]%2==0)
  {
   dem++;
  }
 }
 return dem;
}


void XuLyDuLieu(int *a,int *b,int n)
{
 int k=0;
 for(int i=0;i<n;i++)
 {
  if(a[i]%2!=0)
  {
   b[k++]=a[i];
  }
 }
}


void main()
{
 int *a,*b,n,tieptuc;
 quaylai:printf("\nNhap vao so luong phan tu cua mang:");
 scanf("%d",&n);
 if(n<1)
 {
  printf("\nSo luong phan tu khong hop le");
  goto quaylai;
 }
 a=(int *)malloc(n*sizeof(int));
 NhapMang(a,n);
 printf("\n------- Mang Vua Nhap La -------\n");
 XuatMang(a,n);
 int dem=SoLuongPhanTuLe(a,n);
 b=(int *)malloc(dem*sizeof(int)); // 
 XuLyDuLieu(a,b,n);
 printf("\n------- Mang B Chua Cac Phan Tu Le Cua Mang A La -------\n");
 XuatMang(b,dem);
 free(a); 
 free(b); 

}