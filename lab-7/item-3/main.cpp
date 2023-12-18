/* Chapter : 7 - item : 3 - (4) ใส่ตัวแปรผิดชนิด
 
นักศึกษาเขียนโปรแกรมบวกเลขธรรมดา ๆ ขึ้นมา แต่ทว่า นักศึกษาสังเกตเห็นความผิดปกติในโปรแกรม
เนื่องจากนักศึกษาประกาศตัวแปรเป็นชนิด char แทนที่จะเป็น int นักศึกษารู้สึกเสียใจมาก แต่ก็ไม่ย่อท้อ
รีบลงมือเขียนฟังก์ชันขึ้นมาแก้ไขปัญหาอย่างทันที

- INPUT :
ตัวอักษร 2 ชุด

- OUTPUT :
สังเกตุจาก test case

ปล. แสดงผลให้เหมือนเป๊ะ ๆ นะ
ปล2. สมมติว่าไม่มีจำนวนติดลบนะ

# ให้นำโค้ดนี้ไปต่อเติมเท่านั้น !! และห้ามใช้ฟังก์ชันสำเร็จรูป เช่น atoi ให้ใช้ loop และความพยายามแทน

#include <stdio.h>
#include <string.h>

int char_to_int(char num[]);

int main()
{
    char num1[10], num2[10];
    printf("Enter 2 number : ");
    scanf("%s %s", &num1, &num2);

    int n1 = char_to_int(num1);
    int n2 = char_to_int(num2);

    // CODE OUTPUT HERE //
}

int char_to_int(char num[])
{
    // CODE FUNCTION HERE //
}
*/