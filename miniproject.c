#include <stdio.h>

FILE *ptrFile;
char chr;

void main(void) {

    ptrFile=fopen("Recipes.txt","r");

    if (ptrFile!=NULL) {
        printf("File open\n");

        //while file is open 
        while (!feof(ptrFile)) {
                    chr = (char)(getc(ptrFile));
                    printf("%c",chr);
        }

    
    if (fclose(ptrFile)==0)
        printf("File closed\n");

    //error handlers
    else
        printf("Error in fclose op.");
    } else {

        printf("Error in fopen op.\n");

    }
}