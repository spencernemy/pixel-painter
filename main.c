#include "painter.h"

int main(void) {
    int image[SIZE][SIZE], option, row, col;
    printf("--- Pixel Painter ---\n\n");
    
    initializeImage(image);
    displayImage(image);

    while (1) {
        // Print menu
        printf("Menu:\n1. Draw Pixel\n2. Erase Pixel\n3. Invert Image\n4. Flip Row\n5. Flip Column\n6. Clear Image\n7. Display Image\n0. Exit\n\n");
        printf("Enter your choice: ");
        scanf(" %d", &option);

        switch (option) {
            case 1: // Option 1: Draw Pixel
                printf("Enter row (0-4): ");
                scanf(" %d", &row);
                printf("Enter column (0-4): ");
                scanf(" %d", &col);
                drawPixel(image, row, col);
                break;
            case 2: // Option 2: Erase Pixel
                printf("Enter row (0-4): ");
                scanf(" %d", &row);
                printf("Enter column (0-4): ");
                scanf(" %d", &col);
                erasePixel(image, row, col);
                break;
            case 3: // Option 3: Invert Image
                invertImage(image);
                printf("Image inverted.\n");
                break;
            case 4: // Option 4: Flip Row
                printf("Enter row to flip (0-4): ");
                scanf(" %d", &row);
                flipRow(image, row);
                break;
            case 5: // Option 5: Flip Column
                printf("Enter column to flip (0-4): ");
                scanf(" %d", &col);
                flipColumn(image, col);
                break;
            case 6: // Option 6: Clear Image
                clearImage(image);
                printf("Image cleared.\n");
                break;
            case 7: // Option 7: Display Image
                printf("Current image:\n");
                displayImage(image);
                break;
            case 0: // Option 0: Exit
                break;
            default: // Invalid input
                printf("Invalid operation.\n");
                break;
        }
        printf("\n");

        if (option == 0) break; // If user exit program

        displayImage(image); // Display image after each operation
    }

    return 0;
}