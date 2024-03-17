/*Write a menu driven application to compute the following properties of a sphere, given a diameter, d,
which is greater than or equal to 0.0 (please add necessary validations)*
Chidi Nna
Intro To Programming - Assignment 3 */

#include <stdio.h>
#include <math.h>


double sphere_radius(double);
double sphere_surface_area(double);
double sphere_circumference(double);
double sphere_volume(double);

const double PI = 3.1416;

int main() {
    int choice;
    double diameter,radius,SA,circumfrence,volume;

    do{
        printf("Menu:\n");
        printf("1. Option 1 Calculate radius\n");
        printf("2. Option 2 Calculate surface area\n");
        printf("3. Option 3 Calculate circumference\n");
        printf("4. Option 4  Calculate volume\n");
        printf("5. Option 5 Quit\n");
        printf("Select: ");
        scanf("%d", &choice);

        switch (choice) {         //Controls Menu options 1-5
            case 1:
                puts("Enter in a Diameter ") ;
                scanf("%lg", &diameter);
                radius = sphere_radius(diameter);
                printf("Your radius is %g units", radius);
                puts("");
                break;
            case 2:
                puts("Enter in a Diameter ") ;
                scanf("%lg",&diameter);
                SA = sphere_surface_area(diameter);
                printf("Your Surface Area is %g units", SA);
                puts("");
                break;
            case 3:
                puts("Enter in a Diameter ") ;
                scanf("%lg",&diameter);
                circumfrence = sphere_circumference(diameter);
                printf("Your circumference is %g units", circumfrence);
                puts("");
                break;
            case 4:
                puts("Enter in a Diameter ") ;
                scanf("%lg",&diameter);
                volume = sphere_volume(diameter);
                printf("Your volume is %g units", volume);
                puts("");
                break;
            case 5:
                puts("Program Has been Terminated");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }while(choice !=5);
    return 0;
}





double sphere_radius(double d){   //return sphere radius
    double r = d/2;

    return r;

}


double sphere_surface_area(double d){   //return sphere surface area
    double r = d/2;
    double sa;

     sa = 4 * PI * r * r;
     return sa;

}

double sphere_circumference(double d){  //return sphere circumference

     double circumfrence;
     circumfrence = PI * d;
     return circumfrence;
}

double sphere_volume(double d){   //return sphere volume
    double r = d/2;
    double vol;

    vol = 4 * PI / 3 * r * r * r;
    return vol;

}



