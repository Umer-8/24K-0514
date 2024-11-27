#include <stdio.h>
#include <string.h>

struct Movie {
    char title[100];
    char genre[50];
    char director[100];
    int releaseYear;
    float rating;
}movies[50];

void addmovie(struct Movie movies[], int *movieCount) {
    printf("\nEnter Movie Title: ");
    scanf(" %[^\n]", movies[*movieCount].title);

    printf("Enter Genre: ");
    scanf(" %[^\n]", movies[*movieCount].genre);

    printf("Enter Director: ");
    scanf(" %[^\n]", movies[*movieCount].director);

    printf("Enter Release Year: ");
    scanf("%d", &movies[*movieCount].releaseYear);

    printf("Enter Rating (0.0 to 10.0): ");
    scanf("%f", &movies[*movieCount].rating);

    (*movieCount)++;
    printf("Movie added successfully!\n");
}


void searchbygenre(struct Movie movies[], int movieCount) {
    char genre[50];
    int found = 0;

    printf("\nEnter Genre \n");
    scanf(" %[^\n]", genre);

    for (int i = 0; i < movieCount; i++) {
        if (strcmp(movies[i].genre, genre) == 0) {
            printf("Title: %s, Director: %s, Year: %d, Rating: %.1f\n",
                   movies[i].title, movies[i].director, movies[i].releaseYear, movies[i].rating);
            found = 1;
        }
    }

    if (!found) {
        printf("No movies found in the genre '%s'.\n", genre);
    }
}

void displaymovies(struct Movie movies[], int movieCount) {
    
    for (int i = 0; i < movieCount; i++) 
    {
        printf("Title: %s\n", movies[i].title);
        printf("Genre: %s\n", movies[i].genre);
        printf("Director: %s\n", movies[i].director);
        printf("Release Year: %d\n", movies[i].releaseYear);
        printf("Rating: %.1f\n\n", movies[i].rating);
    }
}

int main() {

    int movieCount = 10;  
    strcpy(movies[0].title, "Inception");
    strcpy(movies[0].genre, "Sci-Fi");
    strcpy(movies[0].director, "Christopher Nolan");
    movies[0].releaseYear = 2010;
    movies[0].rating = 9.0;

    
    strcpy(movies[1].title, "Titanic");
    strcpy(movies[1].genre, "Romance");
    strcpy(movies[1].director, "James Cameron");
    movies[1].releaseYear = 1997;
    movies[1].rating = 8.5;

    strcpy(movies[2].title, "The Dark Knight");
    strcpy(movies[2].genre, "Action");
    strcpy(movies[2].director, "Christopher Nolan");
    movies[2].releaseYear = 2008;
    movies[2].rating = 9.0;

  
    strcpy(movies[3].title, "The Godfather");
    strcpy(movies[3].genre, "Crime");
    strcpy(movies[3].director, "Francis Ford Coppola");
    movies[3].releaseYear = 1972;
    movies[3].rating = 9.2;


    strcpy(movies[4].title, "Forrest Gump");
    strcpy(movies[4].genre, "Drama");
    strcpy(movies[4].director, "Robert Zemeckis");
    movies[4].releaseYear = 1994;
    movies[4].rating = 8.8;

    strcpy(movies[5].title, "The Matrix");
    strcpy(movies[5].genre, "Sci-Fi");
    strcpy(movies[5].director, "The Wachowskis");
    movies[5].releaseYear = 1999;
    movies[5].rating = 8.7;


    strcpy(movies[6].title, "The Notebook");
    strcpy(movies[6].genre, "Romance");
    strcpy(movies[6].director, "Nick Cassavetes");
    movies[6].releaseYear = 2004;
    movies[6].rating = 7.8;

  
    strcpy(movies[7].title, "Interstellar");
    strcpy(movies[7].genre, "Sci-Fi");
    strcpy(movies[7].director, "Christopher Nolan");
    movies[7].releaseYear = 2014;
    movies[7].rating = 8.6;

    strcpy(movies[8].title, "The Pursuit of Happyness");
    strcpy(movies[8].genre, "Drama");
    strcpy(movies[8].director, "Gabriele Muccino");
    movies[8].releaseYear = 2006;
    movies[8].rating = 8.0;

    strcpy(movies[9].title, "Mad Max: Fury Road");
    strcpy(movies[9].genre, "Action");
    strcpy(movies[9].director, "George Miller");
    movies[9].releaseYear = 2015;
    movies[9].rating = 8.1;

    int choice;
     while(1)
 {
       printf("\nPress 1 to add movie\nPress 2 to search movie by genre\nPress 3 to display all movies\nPress 4 to exit \n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                addmovie(movies, &movieCount);
                break;
            case 2:
                searchbygenre(movies, movieCount);
                break;
            case 3:
                displaymovies(movies, movieCount);
                break;
            case 4:
                printf("Exiting program.\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
  return 0;
}