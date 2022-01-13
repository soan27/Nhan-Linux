#include<stdio.h>
#include<math.h>
#include<string.h>
int demTu(char *s, char m)
{
    int i,dem = 1;
    for (i=0; i<strlen(s); i++)
    {
       if(s[i]==m)
        {
            return i;
        }

    }
    return 0;
}
int main()
{

    char str[205];
    gets(str);
    char m;
    scanf("%c",&m);
    printf("Lan dau xuat hien tai vi tri:  %d",demTu(str, m)+1);
    return 0;
}
