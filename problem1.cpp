#include <iostream>
#include <string>
using namespace std;
class Problem1{
    public:
        int levelsDown(){
            std::cout << "Please enter your input: ";
            std::string input;
            std::cin >> input;
            int strLength = input.size();
            int sum = 0;
            for(int i = 0; i < strLength; i++){
                if(input[i] == ';'){
                    sum += 2;
                }
                else if(input[i] == '.'){
                    sum += 4;
                }
                else if(input[i] == '%'){
                    sum += 3;
                }
            }
            // std::cout << '\n';
            return sum;
        }
};

int main(){
    Problem1 input;
    cout << input.levelsDown();
    std::cout << '\n';
}