/* Chapter : 7 - item : 2 - หาจำนวนเฉพาะ

จงเขียนโปรแกรม รับจำนวนเต็มบวก 2 จำนวน แล้วแสดงผล
จำนวนเฉพาะตั้งแต่ จำนวนที่น้อย ถึง จำนวนที่มาก

- function ที่เอาไว้ตรวจสอบจำนวนเฉพาะ ให้มาแล้วด้านล่าง
- ให้เขียนฟังชัน int main ให้ครบ
- ห้ามกำหนดตัวแปรเพิ่มเติม

#include<stdio.h>
int isPrime(int);
int main() {

    int a, b, max, min, i, count=0;
    printf(" *** Prime number list *** \n");
    printf("Enter 2 positive numbers : ");
    scanf("%d %d",&a,&b);
    // เขียน code เพิ่มเติมส่วนนี้ . . . . .

    return 0;
}

int isPrime(int x) {
    int i, count=0;

    for (i=1;i<=x;i++)
        if(x%i==0)
            count++;

    if (count==2)
            return 1; //True

    return 0; //False
  }
*/