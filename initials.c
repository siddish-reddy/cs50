#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int main(void){
    
    string fullName = GetString();
    char c;
    int i = 0;
//    string initials = "";
//    bool getNextLetter = false;
    
    while(fullName[i]){
        c = fullName[i];
        if(i == 0 || fullName[i-1] == ' ')
            printf("%c", toupper(c));
        i++;
    }

    printf("\n");
	
	return 0;
}
