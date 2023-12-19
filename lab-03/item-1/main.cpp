/* Chapter : 3 - item : 1 - การใช้งานตัวแปรข้อความ

ให้แก้ไข code ด้านล่างให้แสดงผลตามตัวอย่าง
- บรรทัดแรกด้านซ้าย มีข้อความ Program
- บรรทัดแรกด้านขวา มีคำว่า Programming
- บรรทัดสุดท้าย (บรรทัดที่ 25) มีคำว่า Computer Programming อยู่กึ่งกลางบรรทัด
- ให้แก้ไขในส่วนของคำสั่ง printf เท่านั้น เฉพาะในส่วนของ พารามิเตอร์ตัวแรก (format string)
- ห้ามใช้ \n และ \t
- ถ้าภายหลังพบว่าไม่ทำตามข้อกำหนด จะได้ 0 คะแนนในข้อนี้

int main() {

	char str1[] = "Computer Programming is fun.";
	char str2[] = "Programming";
	printf("%s%s%s%s",str2,str2,"",str1);

	return 0;
}
*/

#include <stdio.h>

int main() {

	char str1[] = "Computer Programming is fun.";
	char str2[] = "Programming";
	printf("%s%s%s",str1,str2,str2);

	return 0;
}