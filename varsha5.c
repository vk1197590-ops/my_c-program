#include <stdio.h>
int findBook(int bookIDs[], int numBooks, int searchID) {
    int low = 0;
    int high = numBooks - 1;
    int mid;
    while (low <= high) {
        mid = low + (high - low) / 2;
        if (bookIDs[mid] == searchID) {
            return mid;
        }
        else if (bookIDs[mid] < searchID) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return -1; 
}
int main() {
    int libraryBooks[] = {101, 105, 112, 120, 133, 145, 150, 167, 188, 199};
    int numberOfBooks = sizeof(libraryBooks) / sizeof(libraryBooks[0]);
    int targetBookID;
    int foundIndex;
    printf("Enter the Book ID to search for: ");
    scanf("%d", &targetBookID);
    foundIndex = findBook(libraryBooks, numberOfBooks, targetBookID);
    if (foundIndex != -1) {
        printf("Book with ID %d found at position %d (index %d).\n", targetBookID, foundIndex + 1, foundIndex);
    } else {
        printf("Book with ID %d not found in the library.\n", targetBookID);
    }
    return 0;
}