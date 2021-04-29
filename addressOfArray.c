#include <stdio.h>
int main()
{
//initiliza an array of ints
int numbers[5] = {1,2,3,4,5};
int i = 0;

//print the address of the array variable
printf("numbers = %p\n", numbers);

//print the address of each array index
do{
 printf("numbers[%u] = %p\n", i, (void*)(&numbers[i]));
 i++;
} while(i<5);
//print the size of the array
printf("sizeof(numbers) = %lu\n", sizeof(numbers));
//print the length of the array
printf("Length of the array = %lu\n", sizeof(numbers)/sizeof(numbers[0]));
}

