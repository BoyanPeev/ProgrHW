#include <stdio.h>

void switch_lights(unsigned char lights, int room) {
    lights ^= (1 << (room -1));
}

void print_state(unsigned char lights){
    printf("The light is on in room:");
    for(int i = 0; i < 8; i++) {
        if ((lights >> i) & 1) {
            printf(" ");
            printf("%d", i + 1);
        }
    }
    printf("\n");
}

void main() {
    unsigned char lights = 0;
    int room;
    int choice;

    printf("Menu:\n");
    printf("1. Switch lights\n");
    printf("2. Print state\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter room number from 1 to 8: ");
            scanf("%d", &room);
            if (room < 1 || room > 8){
                printf("The number of the room must be from 1 to 8\n");
            }else{
                switch_lights(lights, room);
                printf("The light in room %d is switched\n", room);
            }
            break;
        case 2:
            print_state(lights);
            break;
        default:
            printf("You must enter 1 or 2\n");
    }
    
}