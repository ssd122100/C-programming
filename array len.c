#include <stdio.h>

int main() {
   // simple array
   int arr[] = {1, 2, 3, 4, 5, 6};
   int arr_len = *(&arr + 1) - arr; // using pointer arithmetic
   printf("The length of the int array is: %d", arr_len);
   return 0;
}
