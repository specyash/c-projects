#include <stdio.h>

int main(){
    int i = 8;
    int* j = &i;
    int** k = &j; // int** is used, here address of address is stored....
    printf("The value of i is %d\n", i);
    printf("The value of i is %d\n", *j);
    printf("The value of i is %d\n", *(&i));
    printf("The value of i is %d\n",**(&j));

    /*  (&j gets the address of j (same as value of k))
        (*(&j) gets the value at that address = j (which holds address of i))
        (**(&j) = value at the address stored in j = value of i)
        (Prints 8.)*/


    // almost like *& cancel each other out .

    return 0;
}