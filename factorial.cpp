//
//  factorial.cpp
//  
//
//  Created by Semy Levy on 27/09/16.
//
//

#include <iostream>

using namespace std;

long factorial(long num){
    if(num==1){
        return 1;
    } else{
        return num*factorial(num-1);
    }
}

int main(int argc, char *argv[]) {
    
    cout << factorial(atoi(argv[1])) << endl;
    
    return 0;
}
