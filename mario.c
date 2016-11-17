#include <stdio.h>
#include <cs50.h>

int main(void){
    
    int height;

    do{
        printf("Height: ");
        height = GetInt();
    }while(height < 0 || height > 23);
    
    if(height == 0)
        return 0;
    
    for(int i = 0; i < height; i++){
        
        int diff = 0, count = 0;
    
        for(int j = height - i - 2; j > -1; j--){
            printf(" ");
            count++;
        }
        diff = (height+1) - count; 
        printf("#");
        for(int j = 1; j < diff; j++){
            printf("#");
        }
        printf("\n");
    }
	return 0;
}
