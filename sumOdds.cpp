#include "arrayFuncs.h"
#include <cstdlib>
#include <iostream>

#include "utility.h"

int sumOdds(int a[], int size) {
 

	int sumOdds = 0;
    for(int i =0; i< size; i++){
        if(a[i]%2 !=0){
            sumOdds += a[i];
        }
    }


	return sumOdds; // STUB!  Replace with correct code.
}
