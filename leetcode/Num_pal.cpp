#include "Num_pal.h"
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

bool Num_pal::isPalindrome(int num){
    // turn int to string
    string str_ = to_string(num);

    int other_counter = 0;
    for(int i = str_.length() - 1; i >= 0; i--){
        if(str_[other_counter] == str_[i]){
            other_counter++;
        }else{
            return false;
        }
    }
    return true;


}