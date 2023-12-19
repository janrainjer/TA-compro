/* Chapter : 3 - item : 4 - การรับข้อความจากคีย์บอร์ด

- จงเขียนโปรแกรมรับข้อความ 1 บรรทัด
- นำข้อความที่รับเข้ามา แสดงผลตามตัวอย่าง
*/

#include <stdio.h>

int main() {
    char str[100];

    printf(" *** Get input from keyboard as string ***\n");
    printf("Please input a string : ");
    scanf(" %[^\n]", str);  
    printf("string : %s\n", str);
    printf("string : %.7s\n", str);  
    printf("string : %.15s\n", str); 

    return 0;
}