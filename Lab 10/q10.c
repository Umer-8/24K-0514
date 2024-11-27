#include <stdio.h>
#include <string.h>

struct TravelPackage {
    char packageName[50];
    char destination[50];
    int duration;  
    int cost;      
    int seatsAvailable;
} tp[3];

void bookPackage(struct TravelPackage *tp) {
    if (tp->seatsAvailable > 0) {
        printf("\nYour package has been booked successfully!\n");
        tp->seatsAvailable--;
    } else {
        printf("\nSorry, no seats are available for this package.\n");
    }
}

void packageDetails(struct TravelPackage tp) {
    printf("Package Name: %s\n", tp.packageName);
    printf("Destination: %s\n", tp.destination);
    printf("Duration: %d days\n", tp.duration);
    printf("Cost: $%d\n", tp.cost);
    printf("Available seats: %d\n", tp.seatsAvailable);
}

int main() {
    
    strcpy(tp[0].packageName, "Beach Paradise");
    strcpy(tp[0].destination, "Hawaii");
    tp[0].duration = 7;
    tp[0].cost = 1200;
    tp[0].seatsAvailable = 10;

    strcpy(tp[1].packageName, "Mountain Adventure");
    strcpy(tp[1].destination, "Swiss Alps");
    tp[1].duration = 10;
    tp[1].cost = 1500;
    tp[1].seatsAvailable = 5;

    strcpy(tp[2].packageName, "City Escape");
    strcpy(tp[2].destination, "New York");
    tp[2].duration = 5;
    tp[2].cost = 800;
    tp[2].seatsAvailable = 8;

    int menu;
    while (1) {
        printf("\nPress 1 for booking a package\nPress 2 for viewing package details\nPress 3 to exit\n");
        printf("Enter your choice: ");
        scanf("%d", &menu);
        
        if (menu == 1) {
            int packageChoice;
            printf("\nAvailable packages:\n");
            for (int i = 0; i < 3; i++) {
                printf("%d. %s\n", i + 1, tp[i].packageName);
            }
            printf("\nSelect the package number to book: ");
            scanf("%d", &packageChoice);
            
            if (packageChoice >= 1 && packageChoice <= 3) {
                bookPackage(&tp[packageChoice - 1]);
            } else {
                printf("\nInvalid package number.\n");
            }
        }
        else if (menu == 2) {
            int packageChoice;
            printf("\nAvailable packages:\n");
            for (int i = 0; i < 3; i++) {
                printf("%d. %s\n", i + 1, tp[i].packageName);
            }
            printf("\nSelect the package number to view details: ");
            scanf("%d", &packageChoice);
            
            if (packageChoice >= 1 && packageChoice <= 3) {
                packageDetails(tp[packageChoice - 1]);
            } else {
                printf("\nInvalid package number.\n");
            }
        }
        else if (menu == 3) {
            printf("Exiting the program!\n");
            return 0;
        }
        else {
            printf("Invalid choice. Please try again!\n");
        }
    }
    return 0;
}
