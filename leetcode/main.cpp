#include <iostream>
using namespace std;

// headers
#include "Num_pal.h"
#include "Last_word_length.h"

int main(){

    // PALINDROME
    Num_pal pal;
    bool result = pal.isPalindrome(1213);
    cout << result;
    cout << '\n';

    // LAST WORD
    Last_word_length len;
    int lengthOfLastWord = len.length("hello");
    cout << lengthOfLastWord;
    cout << '\n';

    return 0;
}