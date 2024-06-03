#include <iostream>
#include <string>
using namespace std;
#include<vector>
#include<sstream>

class Problem2{
    public:
        int amountOfPeople(){
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
                // cout << substr;
                // cout << '\n';
                result.push_back(substr);
            }
            for(int i = 0; i<result.size(); i++) {    
                int num = stoi(result[i]);
                if(sum + num < 10000){
                    sum += num;
                    amountPeople += 1;
                }
            }
            return amountPeople;
        }
};

int main(){
    Problem2 input;
    cout << input.amountOfPeople();
    std::cout << '\n';
    return 0;
}