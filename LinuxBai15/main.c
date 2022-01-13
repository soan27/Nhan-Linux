#include<stdio.h>
#include<math.h>
#include<string.h>
void demTu(char *s, char m)
{
    int i,dem = 1;
    printf("Vị trí xuất hiện của %c trong chuoi la: ",m);
    for (i=0; i<strlen(s); i++)
    {
       if(s[i]==m)
        {
            printf("%d\t",i+1);
        }

    }
}
int main()
{

    char str[205];
    gets(str);
    char m;
    scanf("%c",&m);
    demTu(str,m);
    return 0;
}
