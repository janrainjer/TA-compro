/* Chapter : 7 - item : 1 - (4) ชื่อคนน่ารัก

นักศึกษาสังเกตได้ว่าคนที่น่ารัก ๆ รอบตัวของนักศึกษานั้นมีความพิเศษอยู่ในชื่อ คือ
ชื่อของพวกเขาจะขึ้นต้นด้วยตัว T และลงท้ายด้วย A
นักศึกษาจึงได้เขียนโปรแกรมคัดกรองคนที่น่ารักขึ้นมา

- INPUT :
text ชุดนึงซึ่งยาวไม่เกิน 20 ตัวอักษร

- OUTPUT :
สังเกตุจาก test case

ปล. แสดงผลให้เหมือนเป๊ะ ๆ นะ

ให้เอาโค้ดไปเขียนเพิ่มให้เสร็จ
bool คือชนิดตัวแปรที่เป็นได้แค่ true กับ false
(ในภาษา C++ จะไม่ต้อง include stdbool เพราะมันมีอยู่แล้ว แต่ภาษา C ต้องเขียน)

#include <stdio.h>
#include <stdbool.h>

bool has_TA_in(char string[]);

int main()
{
    char name[20];
    printf("Enter your name : ");
    scanf("%s", &name);
    if (has_TA_in(name))
        printf("Your are cute >///<");
    else
        printf("Not cute ._.");
}

bool has_TA_in(char string[])
{
    // CODE FUNCTION HERE //
}
*/