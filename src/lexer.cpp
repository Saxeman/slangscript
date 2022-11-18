#include <fstream>
#include <iostream>
#include <string>
#include "../includes/lexer.h"

using namespace std;

int main(int argc, char *argv[]) {
    string filename = argv[1];
    cout << filename << endl;
    ifstream infile(filename);

    string line;
    // we need to read individual characters and essentially check whether the character that we 
    // are reading would be a part of our built in functionality, then add that to our lexicon

    // Another alternative would be to read each individual word (BUT HOW DO WE HANDLE WITH WHITE SPACES???) 
    // and just add it to our lexicon

    // I think that the best course of action here is to simply watch the youtube tutorials and continue from there.
    while (getline(infile, line, ' ')) {
        cout << line << endl;
    }
    cout << "if this prints that means our while loop didnt run :(" << endl;
    return 0;
}

int generic_func() {
    return 1;
}