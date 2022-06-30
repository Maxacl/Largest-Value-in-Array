#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int TOTAL_ELEMENTS = 10;
    int listOfValues[TOTAL_ELEMENTS];
    int i;
    int maxValue;

    printf("Enter your %d integer values\n", TOTAL_ELEMENTS);

    for (i = 0; i < TOTAL_ELEMENTS; ++i){
        printf("Value is : ");
        scanf("%d", &(listOfValues[i]));
    }

    maxValue = listOfValues[0];

    for (i = 0; i < TOTAL_ELEMENTS; ++i) {
        if (listOfValues[i] > maxValue) {
            maxValue = listOfValues[i];
        }
    }

    printf("The largest number is: %d\n", maxValue);


    return 0;
}
