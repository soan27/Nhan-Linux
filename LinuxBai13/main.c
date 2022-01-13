
#include <stdio.h>
#include <string.h>
#define MAX = 100

char* delete_space(char *str,char *result) {
  int pos = 0;

  const int len = strlen(str); /*Tìm độ dài chuỗi ban đầu*/
  for(int i = 0; i < len; i++) {
      char c = str[i];

      /*Nếu ký tự lấy ra là ký tự trắng thì bỏ qua*/
      if (c == '\r' || c == '\n' || c == ' ') {
        continue;
      }

      /*Thêm ký tự lấy ra vào kết quả*/
      result[pos++] = c;
  }
  return result;
}

int main(void) {

    printf("Moi ban nhap chuoi: ");
    char str[MAX];
    scanf("%c", &str);
    printf("[%s]\n", str);
    char result[100];
    printf("[%s]\n",(delete_space(str,result)));
}
