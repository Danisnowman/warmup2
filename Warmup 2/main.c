//
//  main.c
//  Warmup 2
//
//  Created by Daniel Hernández on 7/25/18.
//  Copyright © 2018 Daniel Hernández. All rights reserved.
//

#include <stdio.h>
#include "commonFunctions.h"
#include "structs.h"

int main(int argc, const char * argv[]) {
    struct savePoint savedPoint[20];
    for (int i = 0; i < 20; i++) {
        savedPoint[i].x = askDouble("Enter the first value\n");
        savedPoint[i].y = askDouble("Enter the second value\n");
        savedPoint[i].z = askDouble("Enter the third value\n");
    }
    return 0;
}
