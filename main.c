/*
 * This program was made to count the words in a string
 *
 * Mario Emilio Aguilar Chung
 * A01411210@itesm.mx
 * 10/17/2018
 * 
 */
#include <stdio.h>
#include <string.h>

int main(void) {
    char arr [1000];
    int i;
    //Considering the logic, wherein each space will be considered as the start of a new word, the first word would not be taken into account then. Therefore, the counter is initialized in 1
    int count = 1;

    //Get the characters from the user
    printf ("Give me a series of characters:\n");
    printf ("\n");
    fgets (arr,sizeof(arr),stdin);


    //Start a loop to read the string
    for (i = 0; i < strlen(arr); i++)

    {
        //For each space that appears in the string, a new word will be added to the count
        if (arr[i]==' ')
        {
            count++;
        }
        //Tried to create a way to avoid numbers being input and considered as words, but didn't really know how. Also, realized that in some cases, numbers can be considered words
        /*if ((arr[i]>='0') && (arr[i]<='9') && (arr[i]=' '))
        {
            count--;
            printf ("Not a word \n");
        }*/
    }
    //Print results
    printf ("There are %i words in the string", count);
    return 0;
}