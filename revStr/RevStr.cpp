#include <iostream>
#include <string>

using namespace std;

class String{
    public:
        string revStr(string str_){
            // make a character array with size of str_.length()
            string reversedString;

            // populate this character array starting with the end of str_
            int charArrayCounter = 0;
            for(int i = str_.length() - 1; i >= 0; i--){
                reversedString += str_[i];
            }

            // return the char array as a string
            return reversedString;
        }
};

class TestCases{
    public:
        bool assert_(string value, string expected){
            if(value == expected){
                return true;
            }else{
                cout << value + std::string(" failed.");
                cout << '\n';
            }
            return false;
        }
};

int main(){
    // make objects
    String string_;
    TestCases tests;

    // call method
    string reversedString1 = string_.revStr("Hello");
    string reversedString2 = string_.revStr("racecar");
    string reversedString3 = string_.revStr("today");

    if(tests.assert_(reversedString1, "olleH") && tests.assert_(reversedString2, "racecar") && tests.assert_(reversedString3, "yadot")){
        cout << "All tests passed for revStr() successfully.";
    }else{
        cout << "A test has failed for revStr().";
    }
    cout << '\n';


    return 0;
}