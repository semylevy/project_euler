//
//  euler_01.cpp
//  
//
//  Created by Semy Levy on 26/09/16.
//
//

// Instructions: Find the sum of all the multiples of 3 or 5 below 1000

#include <iostream>

int main() {
    int result;
    for(int i=0; i<1000; i++){
        if(i%3 == 0 || i%5 == 0){
            result += i;
        }
    }
    std::cout << result << std::endl;
    return 0;
}

