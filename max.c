// Excercise 2
#include "max.h"
#include <assert.h>
#include <stdio.h>

int max(int *numbers, int size) {

// Assert statement included to check if there is elements in the array
assert(size > 0);

// The first value of the array is set to the int cur_max
int cur_max = numbers[0]; 

// A for loop is implemented
// The loop counts thru the array from element 0 until it reaches the last element
for (int i = 0; i < size; i++){
//An if statement is created to asure cur_max is always set to be the biggest number 
    if (numbers[i] > cur_max){
        cur_max = numbers[i];
    }
}

// The function returns the largest number in the array
  return cur_max;
}


#ifndef TEST

int main() {

	return 0;
}

#endif
