/* 
 * File:   main.cpp
 * Author: bar
 *
 * Created on 15. Dezember 2014, 01:36
 */

#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

int crosssum(int num) {
    int crosssum = 0;
    
    while (num)
    {
        crosssum += num % 10;
        num /= 10;
    }

    return crosssum;
}

int checkdude (int num, int qsum){
    int sum;
    sum = pow (qsum,3);
    if (sum == num){
        return 1;
    }
    else{
        return 0;
    }
}

int main(int argc, char** argv) {
    int qsum;
    bool dude = 0;
    int max;
    
    cout << "Please enter the amount of numbers to be checked: ";
    cin >> max;
    for(int num = 1; num <= max; num++){
        qsum = crosssum(num);
        dude = checkdude(num,qsum);

        if (dude){
            cout << num << " is a Dudeney Number \n";
            dude = 0;
        }
    }
    
    cout << "finished";
   
    return 0;
}

