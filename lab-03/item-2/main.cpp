/* Chapter : 3 - item : 2 - (43) แสดงเลขในแบบต่าง ๆ

ให้นักศึกษาเขียนโปรแกรมรับจำนวนเต็ม 1 ตัว แล้วแสดงผลดังนี้
- แสดงตัวอักษรตาม ASCII table
- แสดงทศนิยม 2 ตำแหน่ง
- แสดงค่า ตัวเลขคูณด้วย 2.5 เป็นทศนิยม 4 ตำแหน่ง
ปล. แสดงผลให้เหมือนเป๊ะ ๆ ด้วย

- ห้ามใช้  Type casting (การแปลงชนิดของตัวแปรให้เป็นอีกชนิด)
เช่น (int) 3.6 จะได้ 3 (การทำแบบนี้จะปัดเศษทิ้ง!!)

- ให้ใช้ จำนวนเต็ม * 1.0 แทน
เช่น 3 * 1.0 จะได้ 3.000000
*/

#include <stdio.h>
int main() {

    printf("*** Show numbers in various formats. ***\n");

    int num;

    printf("Enter an integer : ");
    scanf("%d", &num);
    printf("Char      -> %c\n", num);
    printf("Float     -> %.2f\n", num * 1.0);
    printf("Int*2.5   -> %.4f\n", num * 2.5);

    return 0;
}