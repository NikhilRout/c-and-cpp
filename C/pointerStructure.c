#include <stdio.h>
#include <string.h>

// Define the structure
struct Person {
    int age;
    char gender[100];
    float gpa;
};

// Function to swap two Person structures
void swap(struct Person *a, struct Person *b) {
    struct Person temp = *a;
    *a = *b;
    *b = temp;
}

// Function to perform sorting based on gpa in ascending order
void sortPersons(struct Person *people, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (people[j].gpa > people[j + 1].gpa) {
                swap(&people[j], &people[j + 1]);
            }
        }
    }
}

int main() {
    // Define an array of Person structures
    struct Person people[5] = {
        {25, "Male", 3.7},
        {22, "Female", 3.5},
        {30, "Male", 3.9},
        {28, "Female", 3.2},
        {21, "Male", 3.4}
    };

    int numPeople = sizeof(people) / sizeof(people[0]);

    // Sort the array based on GPA in ascending order
    sortPersons(people, numPeople);

    // Display each element of the sorted array with a tab space in between
    printf("Sorted People by GPA in ascending order:\n");
    struct Person *ptr = people;
    for (int i = 0; i < numPeople; i++) {
        printf("Age: %d\tGender: %s\tGPA: %.2f\n", ptr->age, ptr->gender, ptr->gpa);
        ptr++;
    }

    return 0;
}
