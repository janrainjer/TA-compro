/* Chapter : 1 - item : 4 - แสดงผลตามตัวอย่าง 4

แสดงผลตามตัวอย่าง
- มีจำนวน 6 บรรทัด
- บรรทัดแรก แสดง 1234567890 จำนวน 8 ครั้ง
- บรรทัดที่สอง แสดง * จำนวน 10 ตัวอักษรดังตัวอย่าง
- บรรทัดที่สาม แสดง Hello, world!
- บรรทัดที่สี่ แสดง Hello, Ladkrabang.
- บรรทัดที่ห้า แสดง Hello, Computer Programming.
- บรรทัดที่หก แสดง ตัวอักษรให้ถูกต้อง โดยใช้ \t ภายใน format string ห้ามมีช่องว่าง (space)
*/
#include <stdio.h>
int main()
{
	printf("12345678901234567890123456789012345678901234567890123456789012345678901234567890");
	printf("*\t*\t*\t*\t*\t*\t*\t*\t*\t*\n");
	printf("Hello, world!\n");
	printf("Hello, Ladkrabang.\n");
	printf("Hello, Computer Programming.\n");
	printf("one\ttwo\tthree\tfour\tfive\tHallelujah\n");

	return 0;
}