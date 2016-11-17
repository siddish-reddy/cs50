#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void){
    
    float changeOwed = 0.0;
    int i = 0;
    
    printf("Oh hai! How much change is owed?\n");
    
    changeOwed = GetFloat();
    
    while(changeOwed < 0){
        printf("How much change is owed?\n");
        changeOwed = GetFloat();
    }
    
    int convertedChangeOwed = (int) roundf(changeOwed * 100);
    
    while(convertedChangeOwed != 0){
        while(convertedChangeOwed % 25 != convertedChangeOwed){
            convertedChangeOwed = convertedChangeOwed - 25;
            i++;
        }
        while(convertedChangeOwed % 10 != convertedChangeOwed){
            convertedChangeOwed = convertedChangeOwed - 10;
            i++;
        }
        while(convertedChangeOwed % 5 != convertedChangeOwed){
            convertedChangeOwed = convertedChangeOwed - 5;
            i++;
        }
        while(convertedChangeOwed % 1 != convertedChangeOwed){
            convertedChangeOwed = convertedChangeOwed - 1;
            i++;
        }
    }
    
    printf("%d\n", i);

return 0;
}
