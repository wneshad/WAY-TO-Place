//
//  main.c
//  C to F
//
//  Created by APPLE on 23/08/18.
//  Copyright © 2018 APPLE. All rights reserved.
//

#include <stdio.h>

int main() {
    float celsius, fahrenheit;
    
    printf("\nEnter temp in celsius : ");
    scanf("%f", &celsius);
    
    fahrenheit = (1.8 * celsius) + 32;
    printf("\nTemperature in fahrenheit : %f ", fahrenheit);
    
    return (0);
}
