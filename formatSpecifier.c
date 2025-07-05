#include <stdio.h>
int main() {
    // Format specifier = Special tokens that begin with a % symbol,
    //                                   followed by a character that specifies the data type
    //                                   and optional modifiers (width, precision, flags).
    //                                   They control how data is displayed or interpreted.

    int x = 10;
    float y = 100.8;
    double pi = 3.141592653589793;
    char ch = 'A';
    char name[]= "Virat Kholi";

    printf("The value of x : %5d\n",x);// 5 to show 5 character
    printf("The value of x : %f\n",y);
    printf("The value of x : %.4f\n",pi);// .4 to show only 4 character after decimal
    printf("The value of x : %c\n",ch);
    printf("The value of x : %s\n",  name);
}