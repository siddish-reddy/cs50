#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[]){
    
    if(argc != 2){
        printf("Please enter a number");
        return 1;
    }

    // convert string denoting key to int.
    // Add code to ensure first arg is numeric
    int k = atoi(argv[1]);
    
    // get the string to translate
    string message = GetString();

    for(int i = 0, n = strlen(message); i < n; i++){
        if(isupper(message[i])){
            printf("%c", (message[i] + k - 'A') % 26 + 'A');
        }else if(islower(message[i])){
            printf("%c", (message[i] + k - 'a') % 26 + 'a');
        }else
            printf("%c", message[i]);
    }
    printf("\n");
    return 0;
}