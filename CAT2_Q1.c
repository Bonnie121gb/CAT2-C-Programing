/*
Name: Cheruiyot Boniface
Reg No:CT100/G/20094/23
Desciption: CAT 2 Arrays
  */
//  An array represents a strong  linear data structure capable of holding a pre-defined number of elements of a single data type in successively allocated memory locations.

#include<stdio.h>

int main() {

// Declare and initialize a 2D array scores wit 2 rows and 2 columns

int scores[2][2] = {

{65,92},

{84,72}

};

int scores[2][2] = {

{35,70},

{59,67}

};

//Print the elements of the above using nested loop

printf("First array scores:\n");

for (int i = 0; i < 2; i++) {

for (int j = 0; j < 2; j++) {

printf("%d" , scores[i][j]);

}

printf("\n")

}

printf("second array scores:\n")

for(int i = 0; i < 2; i++) {

for(int j = 0; j < 2; j++) {

printf("%d ", scores2[i][j]);

}

printf("\n")

}

return 0;

}
