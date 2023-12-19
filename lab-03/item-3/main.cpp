/* Chapter : 3 - item : 3 - แปลง องศาฟาเรนไฮต์ เป็น องศาเซลเซียส (ทศนิยม)

- รับค่าอุณหภูมิเป็นองศาฟาเรนไฮต์ (จำนวนทศนิยม) แล้วแสดงผลเป็น องศาเซลเซียส
*/
#include <stdio.h>

int main() {
    double fahrenheit;

    printf(" *** Convert Fahrenheit to Celcius ****\n");
    printf("Enter temperature in degree Fahrenheit : ");
    scanf("%lf", &fahrenheit);

    double celsius = (5.0 / 9.0) * (fahrenheit - 32.0);

    printf("%.2f degree Fahrenheit equals %.2f degree celcius.\n", fahrenheit, celsius);

    return 0;
}