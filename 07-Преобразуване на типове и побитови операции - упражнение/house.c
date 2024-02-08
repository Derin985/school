#include <stdio.h>

void main(){

    unsigned char lights;
    int option;
    

    while (1)
    {
        scanf("%d",&option);
        if(option == 1)
        {
            int room;
            scanf("%d",&room);
            room = room - 1 ;
            if(lights & (1<<room)) lights = lights & ~(1 << room);
            else lights = lights | (1 << room);
        }
        if(option == 2)
        {
            printf("the light is on in rooms: ");
            for(int i = 0 ; i<=7 ; i++) {
                if(lights & (1 << i)) printf("%d ",i+1);
            }
            printf("\n");
            
        }
        if(option == 3)
        {
            break;
        }

    }
    
}