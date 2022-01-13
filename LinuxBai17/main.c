#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define MAX 1005
void chuyenDoi(char a[])
{
    for(int i= 0; i<strlen(a); i++)
    {
        if(a[i] >='A' && a[i] <= 'Z')
        {
            a[i]+=32;
        }
    }
}
int kiemTra(char a[])
{
    int len = strlen(a);
    for(int i=0; i<len/2; i++)
    {
        if(a[i] != a[len - 1-i])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int t;
    char a[MAX];
    scanf("%d\n", &t);
    for(int i=0; i<t; i++)
    {
        gets(a);
        chuyenDoi(a);
        if(kiemTra(a) == 1)
        {
            printf("Symmetric\n");
        }
        else
        {

            printf("Asymmetric\n");
        }


    }
    return 0;
}
