/* Chapter : 4 - item : 1 - (4) สูตรคูณแม่ 3

- รับจำนวนเต็ม 1 จำนวน แล้วตรวจสอบว่า หารด้วย 3 ลงตัวหรือไม่
*/

#include <stdio.h>

int main() {
    unsigned long number;
    printf(" *** Display integer in different styles ***\n");
    printf("Enter an integer : ");
    scanf("%lu", &number);
    printf("Your number : %lu\n", number);
    printf("variable size = %lu bytes\n", sizeof(number));
    printf("last 3 digits : %03lu\n", number % 1000);
    printf("next 3 digits : %03lu\n", (number / 1000) % 1000);
    printf("next 3 digits : %03lu\n", (number / 1000000) % 1000);
    printf("next 3 digits : %lu\n", number / 1000000000);
    
    printf("comma format  : %'lu\n", number);

    return 0;
}
