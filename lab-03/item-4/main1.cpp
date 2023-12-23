#include <stdio.h>

int main() {
  char str[100];

  // แสดงข้อความแจ้งให้ผู้ใช้กรอกข้อความ
  printf("Please input a string: ");

  // รับข้อความจากผู้ใช้
  fgets(str, sizeof(str), stdin);

  // แสดงข้อความที่รับเข้ามา
  printf("string: %s\n", str);

  return 0;
}