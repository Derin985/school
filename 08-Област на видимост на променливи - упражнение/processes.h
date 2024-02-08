#ifndef PROCCESSES
#define PROCCESSES

struct process
{
    int id;
    char name[30];
};

int createnewprocess(char name[]);
void stopprocess(int id);

extern struct process processes[5];
extern int processescount;
#endif