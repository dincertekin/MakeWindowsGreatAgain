#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void setupPrivacy(int step) {

}

void removeBloatwares(int step) {
    switch (step) {
        case 0: {
            system("powershell -command \"Get-AppxPackage | Select Name >> .\\apps.txt\"");
            
            printf("List of All Installed Apps:\n");

            FILE *file;
            int character;
            file = fopen("apps.txt", "r");
            int count = 0;
            while (!feof(file)) { // End of File check
                character = fgetc(file); // Get everything char by char
                printf("%c", character);
                if (character == '\n') {
                    printf("\033[0;36m[%d] \033[0m", count);
                    count++;
                }
            }
            fclose(file);
 
            int choice;
            printf("\033[0;36m[>]: \033[0m");
            scanf("%d", &choice);
            break;
        }
        
        default: {
            break;
        }
    }
}

void mainMenu() {
    printf("Welcome to Make Windows Great Again!\n");
    printf("What do you want to do?\n");
    printf(" \n");
    printf("\033[0;36m[1] \033[0mSet Up Privacy\n");
    printf("\033[0;36m[2] \033[0mRemove Bloatwares\n");
    printf(" \n");
    printf("\033[0;36m[0] \033[0mExit\n");
    printf(" \n");
    printf("\033[0;36m[>]: \033[0m");
    int choice;
    scanf("%d", &choice);
    if (choice == 0) {
        system("exit");
    } else if (choice == 1) {
        setupPrivacy(0);
    } else if (choice == 2) {
        removeBloatwares(0);
    }
}

int main() {
    mainMenu();
    return 0;
}
