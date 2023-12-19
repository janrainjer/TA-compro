/* Chapter : 3 - item : 4 - การรับข้อความจากคีย์บอร์ด

- จงเขียนโปรแกรมรับข้อความ 1 บรรทัด
- นำข้อความที่รับเข้ามา แสดงผลตามตัวอย่าง
*/

#include <stdio.h>

int main() {
    char str[100];

    printf("*** Get input from keyboard as string ***\n");
    printf("Please input a string : ");
    scanf(" %[^\n]", str);  // ใส่ space หน้า %[^\n] เพื่อล้าง buffer จากการรับข้อมูลก่อนหน้า

    printf("string : %s\n", str);
    printf("string : %.7s\n", str);  // แสดงเฉพาะ 6 ตัวอักษรแรกของ string
    printf("string : %.15s\n", str); // แสดงเฉพาะ 20 ตัวอักษรแรกของ string

    return 0;
}