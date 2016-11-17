#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[]){
        
    if(argc != 2){
        printf("keyword must contain letters A-Z and a-z\n");
        return 1;
    }
    
    string key = argv[1];
    
    for(int i = 0; i < strlen(key); i++)
    {
        if(!isalpha(key[i])){
            printf("keyword must contain letters A-Z and a-z\n");
            return 1;
        }
    }
    
    if(isalpha(key[0])){
    
        string message = GetString();
        
        for(int i = 0, j = 0, n = strlen(message); i < n; i++){
            char keyLetter;
            
            if(isalpha(message[i])){
                if(isupper(key[j%strlen(key)]))
                    keyLetter = (key[j%strlen(key)] - 'A')%26;
                else if(islower(key[j%strlen(key)]))
                    keyLetter = (key[j%strlen(key)] - 'a')%26;
                    
                j++;
            }
                
            if(isupper(message[i])){
                printf("%c", (message[i] + keyLetter - 'A') %26 + 'A');
            }else if(islower(message[i])){
                printf("%c", (message[i] + keyLetter - 'a') %26 + 'a');
            }else{
                printf("%c", message[i]);
            }
        }
        printf("\n");
        return 0;
    }
}
