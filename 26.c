#include <stdio.h>
int main () {
    int a = 5; //0101 in binary
    int b = 9; //1001 in binary
    printf("a&b=%d\n",a&b); //and
    printf("a | b =%d\n",a|b); //or
    printf("a^b=%d\n",a^b); //xor
    printf("~a=%d\n",~a); //not
    printf("b<<1=%d\n",b<<1);//left shift
    printf("b>>1=%d\n",b>>1);//right shift
    return 0;
}