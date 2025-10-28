/**
 * painter.c
 * Author: Spencer Niemeyer
 * Description: Implements basic 2D image manipulation functions including
 * initialization, pixel drawing, inversion, flipping, clearing, displaying,
 * and 90° rotation.
 */
#include "painter.h"

// Initialize 2D array setting all values to 0
void initializeImage(int image[SIZE][SIZE]) {
    // For each element, set = 0
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            image[i][j] = 0;
        }
    }
}

// Draw individual pixel
int drawPixel(int image[SIZE][SIZE], int row, int col) {
    if (row < 0 || row >= SIZE || col < 0 || col >= SIZE) return 0; // If outside bounds
    image[row][col] = 1; // Draw pixel
    return 1;
}

// Erase individual pixel
int erasePixel(int image[SIZE][SIZE], int row, int col) {
    if (row < 0 || row >= SIZE || col < 0 || col >= SIZE) return 0; // If outside bounds
    image[row][col] = 0; // Erase pixel
    return 1;
}


// Invert entire image
void invertImage(int image[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            // Flip each pixel
            if (image[i][j] == 0) image[i][j] = 1;
            else image[i][j] = 0;
        }
    }
}

// Invert (flip) one row
int flipRow(int image[SIZE][SIZE], int row) {
    if (row < 0 || row >= SIZE) return 0; // If outside bounds
    for (int i = 0; i < SIZE; i++) {
            // Flip pixels in one row
            if (image[row][i] == 0) image[row][i] = 1;
            else image[row][i] = 0;
    }
    return 1;
}

// Invert (flip) one column
int flipColumn(int image[SIZE][SIZE], int col) {
    if (col < 0 || col >= SIZE) return 0; // If outside bounds
    for (int i = 0; i < SIZE; i++) {
            // Flip pixels in one column
            if (image[i][col] == 0) image[i][col] = 1;
            else image[i][col] = 0;
    }
    return 1;
}

// Set all pixels back to 0
void clearImage(int image[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            image[i][j] = 0;
        }
    }
}

// Displays image
void displayImage(int image[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", image[i][j]);
        }
        printf("\n");
    }
}

// Rotate entire image 90 degree right
void rotateRight(int image[SIZE][SIZE]) {
    int imageTemp[SIZE][SIZE];
    // Initialize imageTemp equal to image
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            imageTemp[i][j] = image[i][j];
        }
    }

    // Rotate image 90 degrees right
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            image[i][j] = imageTemp[SIZE-1-j][i];
        }
    }
}

