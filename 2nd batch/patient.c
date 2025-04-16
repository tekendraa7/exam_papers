/*
 Write a program to make a structure named covid that have data
members as patient_name, patient_id and fever readings (float) of past 6 days of same patient. Input
values of patient_name, patient id and fever readings of past 6 days in degree Fahrenheit and display the
average fever value at output with proper precaution message.

*/

#include <stdio.h>

struct covid 
{
    char name[50];
    int id;
    float fever[6];
};

int main() {
    struct covid p;
    float sum = 0, average;
    int i;

    
    printf("Enter patient name: ");
    scanf(" %[^\n]", p.name);  

    printf("Enter patient ID: ");
    scanf("%d", &p.id);

    
    printf("Enter fever readings for 6 days (in Fahrenheit):\n");
    for (i = 0; i < 6; i++) {
        printf("Day %d: ", i + 1);
        scanf("%f", &p.fever[i]);
        sum += p.fever[i];  
    }

    
    average = sum / 6;

   
    printf("\n--- Patient Report ---\n");
    printf("Name: %s\n", p.name);
    printf("ID: %d\n", p.id);
    printf("Average Fever: %.2f fahrenheit\n", average);

   
    if (average > 100) {
        printf("Precaution: High fever! Please see a doctor.\n");
    } else {
        printf("Precaution: Temperature is normal. Stay safe!\n");
    }

    return 0;
}
