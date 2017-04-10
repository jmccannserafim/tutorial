//
//  main.cpp
//  tutorial1
//
//  Created by Jim McCann on 10/04/2017.
//  Copyright © 2017 Jim McCann. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <string>

int main(int argc, const char * argv[]) {
    // tutorial 1
    
    const double pi=M_PI;
    char vol;
    int i=5, j=2;
    int array1[2];
    
    double x=1.e0, y=2.e0, z=3.e0 ,half=0.5 ;
    double w;
    
    vol='t';
    array1[0]={4};
    array1[1]=2.;

    w=pow(y,half);
    w=i/(double(j));
    std::cout << "\n" << w << "\n";
    std::cout << "\n" << vol << "\n" << array1[1] << "\n";
    return 0;
}
