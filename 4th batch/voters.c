/*
Write a program to make a structure named 'Election' that
has members as booth_name, voter_name, voter ID, count and voter_age(float). Use this structure to
input data of 200 voters in a booth, count the total numbers in a booth and display the result.

*/



#include <stdio.h>

#define people 5

// Define the structure
struct Election {
    char booth_name[50];
    char voter_name[50];
    int voter_id;
    float voter_age;
    int count;
};

int main() {
    struct Election voters[people];
    int total_voters = 0;

    printf("Enter Booth Name: ");
    scanf(" %[^\n]", voters[0].booth_name);  // Assume same booth for all

    printf("\n--- Enter Voter Details ---\n");

    for (int i = 0; i < people; i++) {
        printf("\nVoter %d:\n", i + 1);

        printf("Voter Name: ");
        scanf(" %[^\n]", voters[i].voter_name);

        printf("Voter ID: ");
        scanf("%d", &voters[i].voter_id);

        printf("Voter Age: ");
        scanf("%f", &voters[i].voter_age);

        voters[i].count = 1;  // Count for each voter
        total_voters += voters[i].count;
    }

    // Display Result
    printf("\n--- Voter List for Booth: %s ---\n", voters[0].booth_name);
    printf("Total Number of Voters: %d\n", total_voters);

    return 0;
}
