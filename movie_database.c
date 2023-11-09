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

void addMovie(struct Movie m[], int *num){
    printf("Enter movie title: ");
    scanf("%s", m[*num].title);
    printf("Enter movie genre: ");
    scanf("%s", m[*num].genre);
    printf("Enter release date (day month year): \n");
    scanf("%d %d %d", &m[*num].releaseDate.day, &m[*num].releaseDate.month, &m[*num].releaseDate.year);
    printf("Enter movie rating: ");
    scanf("%f", &m[*num].rating);
    (*num)++;
}

void editMovie(struct Movie m[], int num, char search[]){
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
    if(!found){
        printf("Movie not found\n");   
    }
}

void deleteMovie(struct Movie m[], int num, char search[]){
    int found = 0;
    for(int i = 0; i <num; i++){
        if(strcmp(m[i].title, search) == 0){
            for(int j = i; j<(num-1); j++){
                m[j] = m[j+1];
            }
            num--;
            found = 1;
            printf("Movie deleted successfully\n");
        }
    }
    if(!found){
        printf("Movie not found\n");   
    }
}

void displayDetails(struct Movie m[], int num, char search[]){
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
    for(int i = 0; i < 5; i++){
        printf("Movie Ranking: %d\n", i+1);
        printf("Title: %s\n", m[i].title);
        printf("Genre: %s\n", m[i].genre);
        printf("Release Date: %d/%d/%d\n", m[i].releaseDate.day, m[i].releaseDate.month, m[i].releaseDate.year);
        printf("Rating: %.2f\n", m[i].rating);
        printf("\n");
    }
}

void filterSearch(struct Movie m[], int num) {
    char c1, c2, c3;
    char searchGenre[20];
    int searchYear;
    float minimumRating;
    int filteredIndex = 0;
    struct Movie filteredMovies[num];

    printf("Do you want to filter by genre? (y/n)\n");
    scanf(" %c", &c1);
    if(c1 == 'y'){
        printf("Enter genre you're looking for: ");
        scanf("%s", searchGenre);
        for(int i = 0; i < num; i++){
            if(strcmp(m[i].genre, searchGenre) == 0){
                filteredMovies[filteredIndex] = m[i];
                filteredIndex++;
            }
        }
    } else{
        for(int i = 0; i < num; i++){
            filteredMovies[filteredIndex] = m[i];
            filteredIndex++;
        }
    }

    printf("Do you want to filter by release year? (y/n)\n");
    scanf(" %c", &c2);
    if(c2 == 'y'){
        printf("Enter release year you're looking for: ");
        scanf("%d", &searchYear);
        int tempIndex = 0;
        for(int i = 0; i < filteredIndex; i++){
            if(filteredMovies[i].releaseDate.year == searchYear){
                filteredMovies[tempIndex] = filteredMovies[i];
                tempIndex++;
            }
        }
        filteredIndex = tempIndex;
    }

    printf("Do you want to filter by minimum rating? (y/n)\n");
    scanf(" %c", &c3);
    if(c3 == 'y'){
        printf("Enter minimum rating you're looking for: ");
        scanf("%f", &minimumRating);
        int tempIndex = 0;
        for(int i = 0; i < filteredIndex; i++){
            if(filteredMovies[i].rating >= minimumRating){
                filteredMovies[tempIndex] = filteredMovies[i];
                tempIndex++;
            }
        }
        filteredIndex = tempIndex;
    }

    if(filteredIndex == 0){
        printf("\nNo movies found matching your filtering criteria\n");
    } else{
        printf("\nMovies found based on your applied filters:\n");
        for(int i = 0; i < filteredIndex; i++){
            printf("\nMovie %d:", i+1);
            printf("Title: %s\n", filteredMovies[i].title);
            printf("Genre: %s\n", filteredMovies[i].genre);
            printf("Release Date: %d/%d/%d\n", filteredMovies[i].releaseDate.day, filteredMovies[i].releaseDate.month, filteredMovies[i].releaseDate.year);
            printf("Rating: %.2f\n", filteredMovies[i].rating);
            printf("\n");
        }
    }
}

void randomMovie(struct Movie m[], int num){
    srand(time(0));
    int randomIndex = rand() % num;
    printf("Title: %s\n", m[randomIndex].title);
    printf("Genre: %s\n", m[randomIndex].genre);
    printf("Release Date: %d/%d/%d\n", m[randomIndex].releaseDate.day, m[randomIndex].releaseDate.month, m[randomIndex].releaseDate.year);
    printf("Rating: %.2f\n", m[randomIndex].rating);
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
                printf("\nEnter details for movie to be added\n");
                addMovie(movies, &num);
                break;
            case 2:
                printf("\nEnter movie to be edited\n");
                scanf("%s", search);
                editMovie(movies, num, search); 
                break;
            case 3:
                printf("\nEnter movie to be deleted\n");
                scanf("%s", search);
                deleteMovie(movies, num, search);
                break;
            case 4:
                printf("\nEnter movie whose details are to be displayed\n");
                scanf("%s", search);
                displayDetails(movies, num, search);
                break;
            case 5:
                printf("\nTop 5 most rated movies\n");
                topRatedMovies(movies, num);
                break;
            case 6:
                printf("\nApply filters to narrow down your search\n");
                filterSearch(movies, num);
                break;
            case 7:
                printf("\nGenearating random movie recommendation...\n");
                randomMovie(movies, num);
                break;
            case 8:
                printf("\nExiting program...\n");
                break;
            default:
                printf("Invalid response, please try again");
        }
    } while(choice != 8);

    return 0;
}