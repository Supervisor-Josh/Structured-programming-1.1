// program to display the volume and surface area of a cylinder
/*
Name: Joshua Kioko
Reg No: BCS-03-0067/2026
Version 1.
*/
#include <stdio.h>

int main(){
	float radius, height, volume, surface_area, pi = 3.141592654;
	printf("Enter the radius: ");
	scanf("%f", &radius);
	
	printf("Enter the height: ");
	scanf("%f", &height);
	
	volume = pi * radius * radius * height;
	surface_area = (2 * pi * radius * radius) + (2 * pi * radius * height);
	
	printf("The volume is %.3f \n", volume);
	printf("The surface area is %.3f \n", surface_area);
	return 0;
}