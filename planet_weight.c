#include <stdio.h>
/*
Person's weight is different on other planets in the Solar System because the gravity is different. Weight can be measured in any units and the same units will be the same on the other planet.
Person's mass is always the same. To calculate the weight, the mass is multiplied by the surface gravity.
Weight = Mass x Surface Gravity
Mass can be calculated by knowing the weight on Earth and the Surface Gravity on Earth: 
Mass = Earth Weight / Surface Gravity
*/

int main() 
{
  double earthWeight;
  double destinationWeight;
  int planetNumber;
  double earthSurfaceGravity = 1.0;
  float yourMass;

  printf("*********************************************************\n");
  printf("\t\tPlanet Weight Calculator\n");
  printf("*********************************************************\n\n");
  
  printf("Weight can be calculated for the following planets:\n\n");
  printf("1. Mercury\t2. Venus\t3. Mars\t\t4. Jupiter\n");
  printf("5. Saturn\t6. Uranus\t7. Neptune\n\n");

  printf("What is your weight on planet Earth?\n");
  scanf("%lf", &earthWeight);
  yourMass = earthWeight / 1.0;

  printf("Enter a planet number you want to live on (from 1-7)?\n");
  scanf("%d", &planetNumber);

  switch(planetNumber){
    case 1:
    destinationWeight = yourMass * 0.38;
    printf("Weight on Mercury: %.2f kg\n", destinationWeight);
    break;
    case 2:
    destinationWeight = yourMass * 0.91;
    printf("Weight on Venus: %.2f kg\n", destinationWeight);
    break;
    case 3:
    destinationWeight = yourMass * 0.38;
    printf("Weight on Mars: %.2f kg\n", destinationWeight);
    break;
    case 4:
    destinationWeight = yourMass * 2.34;
    printf("Weight on Jupiter: %.2f kg\n", destinationWeight);
    break;
    case 5:
    destinationWeight = yourMass * 0.93;
    printf("Weight on Saturn: %.2f kg\n", destinationWeight);
    break;
    case 6:
    destinationWeight = yourMass * 0.92;
    printf("Weight on Uranus: %.2f kg\n", destinationWeight);
    break;
    case 7:
    destinationWeight = yourMass * 1.12;
    printf("Weight on Neptune: %.2f kg\n", destinationWeight);
    break;
    default:
    printf("Enter a planet number from 1-7\n");
    break;
  }
  return 0;

}