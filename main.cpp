#include <iostream>
#include <string>
using namespace std;

// header delcarations
#include "Problem3.h"

int main(){
    Problem3 problem;
    int result = problem.distance();
    std::cout << "Distance: " << result << std::endl;
    return 0;
}