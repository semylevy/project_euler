//
//  euler_03.cpp
//  
//
//  Created by Semy Levy on 27/09/16.
//
//

// Instructions: What is the largest prime factor of the number 600851475143 ?

#include <iostream>

int main(){
    long value = 600851475143;
    for(int i=value/2; i>0; i--){
        if(value%i == 0){
            std::cout << i << std::endl;
            return 0;
        }
    }
    return 0;
}
