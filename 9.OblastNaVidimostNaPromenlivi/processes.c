#include <stdio.h>
#include <string.h>
#include "processes.h"

struct Process processes[5];
int processescount = 0;

int nextprocessid() {
    if (processescount >= 5) {
        return 0;
    }

    return processescount + 1;

}

int createnewprocess(char name[]) {
    int id = nextprocessid();
    if (id == 0) {
        return 0;
    }

    struct Process new_process;
    new_process.id = id;

    strncpy(new_process.name, name, 30);
    new_process.name[30] = '\0';

    processes[processescount++] = new_process;

    return id;

}

void stopprocess(int id) {
    int i;
    for (i = 0; i < processescount; i++) {
        if (processes[i].id == id) {
            for (int j = i; j < processescount - 1; j++) {
                processes[j] = processes[j + 1];
            }
            processescount--;
            return;
        }
    }
}