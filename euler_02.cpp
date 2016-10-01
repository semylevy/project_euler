//
//  euler_02.cpp
//  
//
//  Created by Semy Levy on 27/09/16.
//
//

// Instructions: By considering the terms in the Fibonacci sequence whose values do not exceed four million,
//               find the sum of the even-valued terms

#include <iostream>

int main(){
    int temporal;
    int suma = 2;
    int val1 = 1;
    int val2 = 2;
    while(temporal<4000000){
        temporal = val1 + val2;
        val1 = val2;
        val2 = temporal;
        if(temporal % 2 == 0){
            suma += temporal;
        }
    }
    std::cout << suma << std::endl;
    return 0;
}
