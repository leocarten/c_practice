#include <iostream>
#include <string>
using namespace std;
#include<vector>
#include<sstream>
#include <cmath>
#include "Problem3.h"

int Problem3::distance(){
    int sum = 0;
    int amountPeople = 0;
    std::string input;
    int strLength = input.size();
    std::cout << "Please enter your input: ";
    std::cin >> input;
    vector<string> result;
    stringstream s_stream(input); 
    while(s_stream.good()) {
        string substr;
        getline(s_stream, substr, ','); 
        result.push_back(substr);
    }

    int x = 0;
    int y = 0;

    for(int i = 0; i<result.size(); i++) {    

        int direction_int = (int)(result[i][1]) - 48;
        char direction = result[i][0];

        if(direction == 'N'){
            y += direction_int;
        }else if(direction == 'S'){
            y -= direction_int;
        }else if(direction == 'E'){
            x += direction_int;
        }else{
            x -= direction_int;
        }
    }
    return distanceFromCoordinates(x, y);
}

int Problem3::distanceFromCoordinates(int x2, int y2){

    int distance = sqrt( (pow(x2, 2)) + (pow(y2, 2)) );
    return ceil(distance) + 1;

}


// int main(){
//     Problem3 input;
//     cout << input.distance();
//     std::cout << '\n';
//     return 0;
// }