#include <stdio.h>
#include <cs50.h>

int main(void){
    
    int minutes;
    
    do{
        printf("minutes: ");
        minutes = GetInt();
    } while(minutes < 1);
    
    int bottles = 1.5*minutes*128/16;

    
    printf("bottles: %d\n", bottles);
    
	return 0;
}
