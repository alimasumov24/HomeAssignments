#include <iostream>
#include "greetWord.h"

using namespace std;

int main() {
    string word;
    
    cout << "Hello world!";
    
    
    while (true) {
    
    
        cout << "Input: ";
        getline(cin, word);
        
        greetWord(word);
    }
}
