#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

struct date{
    int day;
    int month;
    int year;
};

struct Movie {
    char title[20];
    char genre[20];
    struct date releaseDate;
    float rating;
};

void addMovie(struct Movie m[], int num){
    printf("Enter movie title: ");
    scanf("%s", m[num].title);
    printf("Enter movie genre: ");
    scanf("%s", m[num].genre);
    printf("Enter release date (day month year): ");
    scanf("%d %d %d", &m[num].releaseDate.day, &m[num].releaseDate.month, &m[num].releaseDate.year);
    printf("Enter movie rating: ");
    scanf("%f", &m[num].rating);
    num++;
}

void editMovie(struct Movie m[], int num, char search[20]){
    int found = 0;
    for(int i = 0; i < num; i++){
        if(strcmp(m[i].title, search) == 0){
            printf("Enter new movie title: ");
            scanf("%s", m[i].title);
            printf("Enter new movie genre: ");
            scanf("%s", m[i].genre);
            printf("Enter new release date (day month year): ");
            scanf("%d %d %d", &m[i].releaseDate.day, &m[i].releaseDate.month, &m[num].releaseDate.year);
            printf("Enter new movie rating: ");
            scanf("%f", &m[i].rating);
            printf("Movie information updated\n");
            found = 1;
        }
    }
    if(!found)
        printf("Movie not found\n");
}

void deleteMovie(struct Movie m[], int num, char search[20]){
    int found = 0;
    for(int i = 0; i <num; i++){
        if(strcmp(m[i].title, search) == 0){
            for(int j = i; j<(num-1); j++){
                m[j] = m[j+1];
            }
            num--;
            found = 1;
        }
    }
    if(!found)
        printf("Movie not found\n");
}

void displayDetails(struct Movie m[], int num, char search[20]){
    int found = 0;
    for(int i = 0; i < num; i++){
        if(strcmp(m[i].title, search) == 0){
            printf("Title: %s\n", m[i].title);
            printf("Genre: %s\n", m[i].genre);
            printf("Release Date: %d/%d/%d\n", m[i].releaseDate.day, m[i].releaseDate.month, m[i].releaseDate.year);
            printf("Rating: %.2f\n", m[i].rating);
            found = 1;
            break;
        }
    }
    if(!found){
        printf("Movie not found\n");
    }
}

void topRatedMovies(struct Movie m[], int num){
    for(int i = 0; i < num - 1; i++){
        for(int j = 0; j < num - 1; j++){
            if(m[j].rating<m[j+1].rating){
                struct Movie temp = m[j];
                m[j] = m[j+1];
                m[j+1] = temp;
            }
        }
    }
    printf("Top 5 rated movies: \n");
    for(int i = 0; i < 5; i++){
        printf("Movie Ranking: %d\n", i);
        printf("Title: %s\n", m[i].title);
        printf("Genre: %s\n", m[i].genre);
        printf("Release Date: %d/%d/%d\n", m[i].releaseDate.day, m[i].releaseDate.month, m[i].releaseDate.year);
        printf("Rating: %.2f\n", m[i].rating);
        printf("\n");
    }
}

void filterSearch(struct Movie m[], int num){
    char searchGenre[20];
    int searchYear;
    float searchRating;
    struct Movie filtered[num];
    int filterIndex = 0;
    char choice1, choice2, choice3;
    printf("Do you want to filer by genre? (y/n)\n");
    scanf("%c", &choice1);
    if(choice1 == 'y'){
        printf("Enter genre you're looking for: \n");
        scanf("%s", searchGenre);
    }
    printf("Do you want to filter by year? (y/n)\n");
    scanf("%c", &choice2);
    if(choice2 == 'y'){
        printf("Enter release year you're looking for: \n");
        scanf("%d", searchYear);
    }
    printf("Do you want to filter by rating? (y/n)\n");
    scanf("%c", &choice3);
    if(choice3 == 'y'){
        printf("Enter minimum rating you're looking for: \n");
        scanf("%d", searchRating);
    }
    for(int i = 0; i < num; i++){
        if((choice1 != 'y' || strcmp(m[i].genre,searchGenre) == 0) &&
           (choice2 != 'y' || m[i].releaseDate.year == searchYear) &&
           (choice3 != 'y' || m[i].rating >= searchRating)) {
            filtered[filterIndex] = m[i];
            filterIndex++;
           }
    }
    for(int i = 0; i < filterIndex; i++){
        printf("Movie %d\n", i);
        printf("Title: %s\n", m[i].title);
        printf("Genre: %s\n", m[i].genre);
        printf("Release Date: %d/%d/%d\n", m[i].releaseDate.day, m[i].releaseDate.month, m[i].releaseDate.year);
        printf("Rating: %.2f\n", m[i].rating);
    }
}

void randomMovie(struct Movie m[], int num){
    for(int i = 0; i < num; i++){
        srand(time(0));
        int randomIndex = rand() % num;
        printf("Title: %s\n", m[randomIndex].title);
        printf("Genre: %s\n", m[randomIndex].genre);
        printf("Release Date: %d/%d/%d\n", m[randomIndex].releaseDate.day, m[randomIndex].releaseDate.month, m[randomIndex].releaseDate.year);
        printf("Rating: %.2f\n", m[randomIndex].rating);
    }
}

int main(){
    struct Movie movies[100];
    int num = 0;
    int choice;
    char search[20];

    do{
        printf("\nMOVIE DATABASE MENU\n");
        printf("1. Add a new movie\n");
        printf("2. Edit existing movie\n");
        printf("3. Delete movie form database\n");
        printf("4. Display details of searched movie\n");
        printf("5. Display top-rated movies\n");
        printf("6. Begin filter-based search\n");
        printf("7. Generate random recommendation\n");
        printf("8. Exit\n");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                printf("Enter details for movie to be added\n");
                addMovie(movies, num);
                break;
            case 2:
                printf("Enter movie to be edited\n");
                scanf("%s", search);
                editMovie(movies, num, search); 
                break;
            case 3:
                printf("Enter movie to be deleted\n");
                scanf("%s", search);
                deleteMovie(movies, num, search);
                break;
            case 4:
                printf("Enter movie whose details are to be displayed\n");
                scanf("%s", search);
                displayDetails(movies, num, search);
                break;
            case 5:
                printf("Displaying top 5 most rated movies\n");
                topRatedMovies(movies, num);
                break;
            case 6:
                printf("Apply filters to narrow down your search\n");
                filterSearch(movies, num);
                break;
            case 7:
                printf("Genearating random movie recommendation\n");
                randomMovie(movies, num);
                break;
            case 8:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid input, please try again");
        }
    } while(choice != 8);

    return 0;
}