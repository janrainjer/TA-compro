/* Chapter : 2 - item : 2 - การแสดงข้อความ มากกว่า 1 บรรทัด ไม่ใช้ \n \t

ให้เขียนโปรแกรมแสดงผลดังนี้

- บรรทัดแรกสุด ด้านซ้ายมือ แสดงผล Computer
- บรรทัดแรกสุด ด้านขวามือ แสดงผล Programming
- บรรทัดสุุดท้าย (บรรทัดที่ 25) แสดงผลชิดขวา I am a hard-working student.
- ห้ามใช้ \n \t

หมายเหตุ

1. การแสดงผลแต่ละบรรทัดมี 80 ตัวอักษร
*/

#include <stdio.h>

int main()
{
	printf("%-40s","Computer");
	printf("%40s","Programming");
	printf("%1840s","");
	printf("%-40s","");
	printf("%40s","I am a hard-working student.");
	
	return 0;
}