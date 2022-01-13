#include<stdio.h>
#include<math.h>
void doDaiChuoi(char *str)
{
    int i=0,dem=0;
    while(str[i]>0&&str[i]<=255)
    {
        i++;
        dem++;
    }
    printf("do dai chuoi: %d\n",dem);
}

int main()
{

    char str[205];
    printf("Moi ban nhap chuoi:");
    gets(str);
    doDaiChuoi(str);

    return 0;
}
