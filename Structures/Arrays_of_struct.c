#include <stdio.h>

struct student {
    float cgpa;
    char name[10];
};

int main() {
    int i;
    float avg;
    struct student st[5];

    printf("Enter records of 5 students\n");

    // Taking input for 5 students
    for(i = 0; i < 5; i++) {
        printf("Enter Cgpa: ");
        scanf("%f", &st[i].cgpa);

        printf("Enter Name: ");
        scanf("%s", st[i].name);
    }

    // Compute average CGPA
    avg = 0.0;
    for(i = 0; i < 5; i++) {
        avg += st[i].cgpa;
    }
    avg = avg / 5.0;

    // Display result
    printf("Avg cgpa: %f\n", avg);

    return 0;
}
