/* Chapter : 4 - item : 3 - (14) เปรียบเทียบตัวอักษร D

- ให้รับ input เป็นตัวอักษร 1 ตัว และเปรียบเทียบว่าเป็นตัว D หรือไม่
ปล. พิมพ์ใหญ่ พิมพ์เล็ก ถือว่าเป็นตัวเดียวกัน
*/

#include <stdio.h>

void displayCommaFormat(unsigned long n) {
    if (n < 1000) {
        printf("%lu", n);
        return;
    }
    displayCommaFormat(n / 1000);
    printf(",%03lu", n % 1000);
}

int main() {
    unsigned long n;
    printf("*** Display integer in different styles ***\n");
    printf("Enter an integer: ");
    scanf("%ld", &n);
    
    printf("Your number: %ld\n", n);
    printf("variable size = %ld bytes\n", sizeof(n));
    
    printf("last 3 digits: %03ld\n", n % 1000);
    n /= 1000;
    
    printf("next 3 digits: %03ld\n", n % 1000);
    n /= 1000;
    
    printf("next 3 digits: %03ld\n", n % 1000);
    n /= 1000;
    
    printf("next 3 digits: %ld\n", n);
    n /= 1000;
    
    printf("comma format: ");
    displayCommaFormat(n);
    printf("\n");
    
    return 0;
}
