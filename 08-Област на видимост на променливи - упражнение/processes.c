#include <stdio.h>
#include <string.h>
#include "processes.h"

struct process processes[5];
int processescount = 0;

int nextprocessid(){
    static int id = 0;
    id++;
    return id;
}

int createnewprocess(char name[]){
    processescount ++;
    struct process newprocess;
    newprocess.id = nextprocessid();
    strcpy(newprocess.name,name);
    processes[processescount-1] = newprocess;
}

void stopprocess(int id){
    for(int i = 0 ; i < processescount ; i++){
        if(processes[i].id == id){
            for(int j = i ; j<processescount-1 ; j++)
            {
                processes[j] = processes[j+1];
            }
            processescount--;
        }
    }
}