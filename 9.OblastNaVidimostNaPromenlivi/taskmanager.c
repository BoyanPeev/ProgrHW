#include <stdio.h>
#include <string.h>
#include "processes.h"

int main() {
    int choice;
    char name[30];
    int id;

    while (1) {
        printf("\n1. Suzdavane na proces\n");
        printf("2. Izvejdane na spisuk s vsichki procesi\n");
        printf("3. Spirane na proces\n");
        printf("4. Izhod\n");
        printf("Koq opciq izbirate: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: 
                printf("Ime na procesa: ");
                scanf("%30s", name);
                id = createnewprocess(name);
                if (id != 0) {
                    printf("Suzdaden e nov proces s id %d. \n", id);
                }
                break;
            case 2:
                if (processescount == 0) {
                    printf("Nqma aktivni procesi. \n");
                }else{
                    for(int i = 0; i < processescount; i++) {
                        printf("Proces id: %d, ime: %s\n", processes[i].id, processes[i].name);
                    }
                }
                break;
            case 3:
                printf("id na proces za spirane: ");
                scanf("%d", &id);
                stopprocess(id);
                break;
            case 4:
                printf("izhod ot programata. \n");
                return 0;

            default:
                printf("Nqma takava opciq. \n");
        }
    }
}