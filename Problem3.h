
#ifndef PROBLEM3_H
#define PROBLEM3_H

#include <string>
#include <vector>

class Problem3 {
public:
    int distance();
    int distanceFromCoordinates(int x2, int y2);

private:
    std::vector<std::string> splitInput(const std::string& input);
};

#endif 
