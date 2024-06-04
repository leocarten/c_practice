#include <iostream>
using namespace std;

class SubCom{
    public:
        int add(int num1, int num2){
            return num1 + num2;
        }
};

class UnitTests{
    public:
        bool test(int value, int expected){
            if(value == expected){
                return true;
            }
            return false;
        }
};

int main(){
    SubCom myObject;
    UnitTests tests;

    int answer1 = myObject.add(10,5);
    int answer2 = myObject.add(20,4);
    int answer3 = myObject.add(11,3);

    // test cases to make sure the add method works as intended
    if(tests.test(answer1,15) && tests.test(answer2,24) && tests.test(answer3,14)){
        cout << "Tests pass successfully";
    }else{
        cout << "Tests failed";
    }

    cout << '\n';

    return 0;
}