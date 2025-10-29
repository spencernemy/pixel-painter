#include <stdio.h>

#define SIZE 5

// Function prototypes
void initializeImage(int image[SIZE][SIZE]);
int drawPixel(int image[SIZE][SIZE], int row, int col);
int erasePixel(int image[SIZE][SIZE], int row, int col);
void invertImage(int image[SIZE][SIZE]);
int flipRow(int image[SIZE][SIZE], int row);
int flipColumn(int image[SIZE][SIZE], int col);
void clearImage(int image[SIZE][SIZE]);
void displayImage(int image[SIZE][SIZE]);
void rotateRight(int image[SIZE][SIZE]);
