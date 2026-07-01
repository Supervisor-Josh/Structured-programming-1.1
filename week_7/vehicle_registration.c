// program to store details of available vehicles for sale
/*
Name: Joshua Kioko
Reg No: BCS-03-0067/2026
Version 1
*/

#include <stdio.h>
#include <string.h>

struct vehicle {
	char reg_no[10];
	char vehicle_model[15];
	char manufacturer[20];
	int year_of_manufacture;
	float daily_rental_charge;
};

int main(){
	struct vehicle vehicle1, vehicle2, vehicle3;
	printf("Enter the vehicle's registration number: ");
	scanf("%s", &vehicle1.reg_no);
	printf("Enter the vehicle's model: ");
	scanf("%s", &vehicle1.vehicle_model);
	printf("Enter the vehicle's manufacturer: ");
	scanf("%s", &vehicle1.manufacturer);
	printf("Enter the vihicle's year of manufacturing: ");
	scanf("%d", &vehicle1.year_of_manufacture);
	printf("Enter the vehicle's daily rental charge: ");
	scanf("%f", &vehicle1.daily_rental_charge);
	
	printf("-------------------------------------------\n");
	printf("      VEHICLE REGISTRATION REPORT\n");
	printf("-------------------------------------------\n");
	printf("Registration No: %s\n", vehicle1.reg_no);
	printf("Vehicle model: %s\n", vehicle1.vehicle_model);
	printf("Manufacturer: %s\n", vehicle1.manufacturer);
	printf("Year manufactured: %d\n", vehicle1.year_of_manufacture);
	printf("Daily rental fee: Ksh%.2f\n", vehicle1.daily_rental_charge);
	printf("-------------------------------------------\n");
	return 0;
}