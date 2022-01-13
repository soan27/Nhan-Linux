#include<stdio.h>
#include<math.h>
#include<string.h>
void dao(char *str)
{
    for(int i = strlen(str)-1; i>=0;i--)
    {

        printf("%c",str[i]);
    }

}

int main()
{

    char str[205];
    printf("Moi ban nhap chuoi:");
    gets(str);
    dao(str);
    return 0;
}
