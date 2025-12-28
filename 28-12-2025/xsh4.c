#include <stdio.h>
int main() {
    //Your Code goes here!
    int pens, notebooks, pencils;
    int total;

    int pen_price = 20;
    int notebook_price = 70;
    int pencil_price = 9;

    printf("Enter number of pens: ");
    scanf("%d", &pens);

    printf("Enter number of notebooks: ");
    scanf("%d", &notebooks);

    printf("Enter number of pencils: ");
    scanf("%d", &pencils);
    if (pens >= 0 && notebooks >= 0 && pencils >= 0) {
        total = (pens * pen_price) +
                (notebooks * notebook_price) +
                (pencils * pencil_price);

        printf("\nTotal amount to be paid: %d units\n", total);
    } else {
        printf("\nInvalid input! Quantities cannot be negative.\n");
    }
    return 0;
}