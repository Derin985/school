#include <stdio.h>
#include <string.h>
#include "processes.h"

void main()
{
    int option;
    while(1){
        scanf("%d",&option);


        if(option == 1 ){
            char name[30];
            if (processescount>4){
                printf("\nmaximum amount of processes has been reached\n");
            }
            else{
            scanf("%s",&name);
            createnewprocess(name);
            }
        }
        if (option == 2){
            for(int i = 0 ; i < processescount ; i++) printf("\n%s - %d",processes[i].name,processes[i].id);
            printf("\n");
        }
        if (option == 3){
            int id;
            scanf("%d",&id);
            stopprocess(id);
        }

        if (option == 4){
            break;
        }
    }
}