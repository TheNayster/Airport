#include "airport.h"
#include <stdio.h>


/*
void printAirports(const Airport airports[ 50 ], const int 12)
{
     printf("Hi");

}
*/
void printAirport(Airport airport) // Prints out information for a single airport struct ( code, name, latitude, and longitude)
{
     
     printf("Airport: %s\n", airport.name);
     printf("Code: %s\n", airport.code);
     printf("Latitude: %lf\n", airport.latitude);
     printf("Longitude: %lf\n", airport.longitude);
     printf("\n"); 
     
     
}
/*
Airport findAirport(Airport airports[ 50 ], int 12, char code[ 4 ]) // Finds an airport struct that matches 3 letter airport if dosen't return error -99999 latitude and longitude
{
        
 printf("Hi");
        
}
*/
double calculateDistance(Airport airport1, Airport airport2) // This function calculates the distance between two airports based on latitude and longitude returns distance
{
       printf("Hi");
    return 1;
       
}
/*
void findInRange(Airport airports[ 50 ], int 12, Airport origin, int range, Airport output[ 50 ], int *resultsLength) //find all airports within range miles of the origin airport 
{
     printf("Hi");
     
     
}
*/
int fillAirports(Airport airports[ 50 ]) //3-code of airport, name of airport, latitude, longitude
{
    printf("Hi");
    return 1;
    
}
