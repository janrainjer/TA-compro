/* Chapter : 2 - item : 5 - การแสดงข้อความ %s

เติม พารามิเตอร์ตัวแรก (first parameter) ของ printf ให้เหมาะสม เพื่อแสดงผลตามตัวอย่าง

int main() {

  printf("1234567890123456789012345678901234567890\n");
  printf("%  s\n","I am such a hardworking student.");
  printf("%   s\n","I am such a hardworking student.");
  printf("%  s\n","I am such a hardworking student.");
  printf("%  s\n","I am such a hardworking student.");
  printf("%   s\n","I am such a hardworking student.");

  return 0;
}
*/

int main() {
  printf("1234567890123456789012345678901234567890\n");
  printf("%40.9s\n","I am such a hardworking student.");
  printf("%40.23s\n","I am such a hardworking student.");
  printf("%40s\n","I am such a hardworking student.");
  printf("%-40s\n","I am such a hardworking student.");
  printf("%37s\n","I am such a hardworking student.");

  return 0;
}