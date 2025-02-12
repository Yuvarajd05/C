#include<stdio.h>

int main() {
      
    // An integer variable
    int a[5] = {10,20,30,40,50};

    // Create a pointer to integer (declaration)
    int * ptr;

    // Store the address of a inside pointer (initialization)
    //ptr = &a[0];
    for(int i=0;i<5;i++){
    ptr = &a[i];
    printf("ptr = %p\n", ptr);
    printf("array value = %d\n", *ptr);
    }
      
 return 0;
}