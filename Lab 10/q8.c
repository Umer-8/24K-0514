#include <stdio.h>
#include <string.h>

struct Car {
    char make[50];
    char model[50];
    int year;
    int price;
    float mileage;
   
}cars[50];

void addcar(struct Car cars[], int *carCount) {
    printf("\nEnter car Make:\n ");
    scanf(" %[^\n]",cars[*carCount].make);

    printf("Enter car Model:\n ");
    scanf(" %[^\n]",cars[*carCount].model);

    printf("Enter Year:\n ");
    scanf(" %d",& cars[*carCount].year);

    printf("Enter price: \n");
    scanf("%d", &cars[*carCount].price);

    printf("Enter mileage:\n ");
    scanf("%f", &cars[*carCount].mileage);

    (*carCount)++;
    printf("Car added successfully!\n");
}


void searchbymake(struct Car cars[], int carCount) {
    char make[50];
    int found = 0;

    printf("\nEnter make \n");
    scanf(" %[^\n]", make);

    for (int i = 0; i < carCount; i++) {
        if (strcmp(cars[i].make,make) == 0) {
           printf("Model:%s\nYear:%d\nPrice:%d\nMileage:%f\n",cars[i].model,cars[i].year,cars[i].price,cars[i].mileage);
            found = 1;
        }
    }

    if (!found) {
        printf("No cars found of the make '%s'.\n", make);
    }
}
void searchbymodel(struct Car cars[], int carCount) {
    char model[50];
    int found = 0;

    printf("\nEnter model \n");
    scanf(" %[^\n]", model);

    for (int i = 0; i < carCount; i++) {
        if (strcmp(cars[i].model,model) == 0) {
           printf("Make:%s\nYear:%d\nPrice:%d\nMileage:%f\n",cars[i].make,cars[i].year,cars[i].price,cars[i].mileage);
            found = 1;
        }
    }

    if (!found) {
        printf("No cars found of the model '%s'.\n", model);
    }
}

void displaycars(struct Car cars[], int carCount) {
    
    for (int i = 0; i < carCount; i++) 
    {
        printf("Make: %s\n",cars[i].make);
        printf("Model: %s\n", cars[i].model);
        printf("Year: %d\n", cars[i].year);
        printf("Price: %d\n", cars[i].price);
        printf("Mileage: %.1f\n\n", cars[i].mileage);
    }
}

int main() {

    int carCount = 10;  
      strcpy(cars[0].make, "Toyota");
    strcpy(cars[0].model, "Corolla");
    cars[0].year = 2020;
    cars[0].price = 20000;
    cars[0].mileage = 15000;

    strcpy(cars[1].make, "Honda");
    strcpy(cars[1].model, "Civic");
    cars[1].year = 2018;
    cars[1].price = 18000;
    cars[1].mileage = 30000;

    strcpy(cars[2].make, "Ford");
    strcpy(cars[2].model, "Mustang");
    cars[2].year = 2021;
    cars[2].price = 35000;
    cars[2].mileage = 5000;

    strcpy(cars[3].make, "Tesla");
    strcpy(cars[3].model, "Model 3");
    cars[3].year = 2022;
    cars[3].price = 40000;
    cars[3].mileage = 2000;

    strcpy(cars[4].make, "Chevrolet");
    strcpy(cars[4].model, "Malibu");
    cars[4].year = 2019;
    cars[4].price = 22000;
    cars[4].mileage = 25000;

    strcpy(cars[5].make, "BMW");
    strcpy(cars[5].model, "X5");
    cars[5].year = 2021;
    cars[5].price = 65000;
    cars[5].mileage = 10000;

    strcpy(cars[6].make, "Audi");
    strcpy(cars[6].model, "Q7");
    cars[6].year = 2020;
    cars[6].price = 55000;
    cars[6].mileage = 12000;

    strcpy(cars[7].make, "Mercedes");
    strcpy(cars[7].model, "E-Class");
    cars[7].year = 2021;
    cars[7].price = 70000;
    cars[7].mileage = 8000;

    strcpy(cars[8].make, "Nissan");
    strcpy(cars[8].model, "Altima");
    cars[8].year = 2019;
    cars[8].price = 23000;
    cars[8].mileage = 20000;

    strcpy(cars[9].make, "Hyundai");
    strcpy(cars[9].model, "Elantra");
    cars[9].year = 2022;
    cars[9].price = 25000;
    cars[9].mileage = 5000;

    int choice;
     while(1)
 {
       printf("\nPress 1 to add car\nPress 2 to search car by make\nPress 3 to search car by model \nPress 4 to display all cars\n Press 5 to exit. \n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                addcar(cars, &carCount);
                break;
            case 2:
                searchbymake(cars, carCount);
                break;
            case 3:
               searchbymodel(cars, carCount);
                break;
                case 4:
                displaycars(cars,carCount);
                break;

            case 5:
                printf("Exiting program.\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
  return 0;
}