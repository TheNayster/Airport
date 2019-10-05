/* 
    airport-program.c
    Project 1
    Eduardo Martinez

    This is the driver for the airport program. It is displays the main menu presenting a selection of options 
    for the user to get information about the airports in the system. The main function will then call functions
    in airport.c to calculate and retrieve information, which will then be printed here. 
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include "airport-program.h"

/*
  printMenu
  ----------
  This function prints the main menu.
  Returns: nothing


*/

void printMenu()
{
    printf( "\n#########################################\n" );
    printf( "\tAirport Program Menu\n" );
    printf( "#########################################\n" );
    printf( "\t1 - Get Airport Information\n" );
    printf( "\t2 - Get Airport Listing\n" );
    printf( "\t3 - Get Distance Between Two Airports\n" );
    printf( "\t4 - Find Airports Within Range\n" );
    printf( "\t0 - Quit\n" );
    printf( "Enter your selection: " );
}
/* 
    main 
    ---------------------------
    This is the main driver of your program. See the comments below on how to complete the driver. 
    Returns: 0 
*/
int main( int argc, char *argv[] )
{
    
    //Airport airports[ MAX ];
    int choice;
    //fillAirports( airports );

    while( TRUE )
    {
        /* call the function to print the menu */
        printMenu();
        /* ask the user to input their selection */
        scanf( "%d", &choice );
        
        switch( choice )
        {
            case 1:
                /*
                    1. Ask the user to enter a 3-letter airport code.
                    2. Call findAirport()
                    3. If either airport's latitude or longitude of -99999, that means the airport was not found. In that case, print out an error. 
                    4. Print the airport information 
                */
                break;
            case 2:
                /*
                    Call the printAirports() function
                */
                break;
            case 3:
                /*
                    1. Ask the user to enter a 3-letter airport code.
                    2. Ask the user to enter another 3-letter airport code.
                    3. Call findAirport() twice (for each of the airports entered)
                    4. If either airport's latitude or longitude of -99999, that means the airport was not found. In that case, print out an error. Otherwise, call the calculateDistance() function.
                    5. Print out the distance.
                */
                break;
            case 4:
                /*  
                    1. Ask the user to enter a 3-letter airport code, 
                    2. Ask the user to enter a range in miles (integer)
                    3. Call findAirport() to find the struct for that Airport 
                    4. Call findInRange() to get an array of Airports within the range
                    5. Print the return array of Airport, if the array's length is empty state that no airports were found
                */
                break;
            case 0:
                printf( "Good-bye!\n" );
                return 0;
        }
    }
   
    system("PAUSE");
    return 0;
    
}
