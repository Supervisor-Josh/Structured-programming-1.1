// a hotel management system using arrays

/*
Name: Joshua Kioko
Reg No: BCS-03-0067/2026
Date: 26 June 2026
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float revenue[7];
    float total_revenue = 0;
    int i, f, r;
     
    // --- 1D Array: Weekly Revenue Tracker --- 
    printf("--- Weekly Revenue Tracker ---\n");
    for(i = 0; i < 7; i++) {
        printf("Enter revenue for day %d: ", i + 1);
        scanf("%f", &revenue[i]);
        total_revenue += revenue[i];
    }
    printf("Total Weekly Revenue: %.2f\n", total_revenue);
    printf("Average Daily Revenue: %.2f\n\n", total_revenue / 7);

	// --- 2D Array: Room Occupancy (One Branch) ---
    int occupancy[5][10];
    printf("--- Room Occupancy (One Branch) ---\n");

    for(f = 0; f < 5; f++) {
        int occupied = 0, vacant = 0;
        for(r = 0; r < 5; r++) {
        	printf("Enter occupancy for Floor %d, Room %d (1=Occupied, 0=Vacant): ", f + 1, r + 1);
        	scanf("%d", &occupancy[f][r]);
            if (occupancy[f][r] == 1) occupied++;
            else vacant++;
        }
        printf("Floor %d: %d occupied, %d vacant\n", f + 1, occupied, vacant);
    }

	// --- 3D Array: Multiple Branches ---
    int chain[3][5][10];
    int total_occupied = 0;

    printf("\n--- Room Occupancy (All Branches) ---\n");
    for(i = 0; i < 3; i++) {
        for (f = 0; f < 5; f++) {
            for(r = 0; r < 10; r++) {
                if (chain[i][f][r] == 1) {
                    total_occupied++;
                }
            }
        }
    }
    printf("Total number of occupied rooms across all branches: %d\n", total_occupied);

    return 0;
}