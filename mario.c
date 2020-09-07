#include <stdio.h>

int main(void)
{
    int h;
    do
    {
        printf("Enter height: ");
        scanf("%i", &h);
    }while(h < 1); //Loops as long as (h) is less than 1

    for(int i = 0; i < h; i++){

        //Increments the spaces for the pyramid
        for(int j = h; j > i; j--){
            printf(" ");
        }

        //Creates the pyramid
        for(int k = 0; k < i + 1; k++){
            printf("#");
        }
        //Prints the spaces between the rows of the pyamid
        printf("\n");
    }
    return 0;
}