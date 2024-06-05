#include <fstream> 
#include <iostream> 
#include <string> 
using namespace std; 
  
int main() 
{ 
    // open the input file named "input.txt" 
    ifstream inputFile("text.txt"); 
  
    // ceck if the file is successfully opened 
    if (!inputFile.is_open()) { 
        cerr << "Error opening the file!" << endl; 
        return 1; 
    } 
  
    string line; 

    int triangleCount = 0;
  
    // read each line 
    cout << "File Content: " << endl; 
    while (getline(inputFile, line)) { 
        // cout << line << endl; 
        // index 0 and 1 are spaces


        // index 2,3,4 are possible numbers
        string firstNumber;
        if(line[2] != ' '){
            firstNumber += line[2];
        }
        if(line[3] != ' '){
            firstNumber += line[3];
        }
        firstNumber += line[4];


        // index 7,8,9 are possible numbers
        string secondNumber;
        if(line[7] != ' '){
            secondNumber += line[7];
        }
        if(line[8] != ' '){
            secondNumber += line[8];
        }
        secondNumber += line[9];



        // index 12,13,14 are possible numbers
        string thirdNumber;
        if(line[12] != ' '){
            thirdNumber += line[12];
        }
        if(line[13] != ' '){
            thirdNumber += line[13];
        }
        thirdNumber += line[14];

        // turn strings into int
        int first = stoi(firstNumber);
        int second = stoi(secondNumber);
        int third = stoi(thirdNumber);

        if( ((first + second) > third) && ((first + third) > second) && ((second + third) > first) ){
            // cout << "This is a triangle!\n";
            cout << triangleCount << '\n';
            triangleCount++;
        }

    } 
  
    // close file
    inputFile.close(); 

    cout << triangleCount;
    cout << '\n';
  
    return 0; 
}