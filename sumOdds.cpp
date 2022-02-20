#include "arrayFuncs.h"
#include <cstdlib>
#include <iostream>

#include "utility.h"

int sumOdds(int a[], int size) {
 

	int numOdds = 0;
    for(int i =0; i< size; i++){
        if(a[i]%2 !=0){
            ++numOdds;
        }
    }


	return numOdds; // STUB!  Replace with correct code.
}
