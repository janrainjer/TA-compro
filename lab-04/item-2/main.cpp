/* Chapter : 4 - item : 2 - (12) เปรียบเทียบตัวอักษร B

- ให้รับ input เป็นตัวอักษร 1 ตัว และเปรียบเทียบว่าเป็นตัว B หรือไม่
ปล. พิมพ์ใหญ่ พิมพ์เล็ก ถือว่าเป็นคนละตัว
*/
#include <stdio.h>

void print_with_commas(unsigned long n) {
    if (n < 1000) {
        printf("%lu", n);
        return;
    }
    print_with_commas(n / 1000);
    printf(",%03lu", n % 1000);
}

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
    printf("comma format  : ");
    print_with_commas(number);
    printf("\n");

    return 0;
}
