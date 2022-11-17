#include <fstream>
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    cout << "hello world" << endl;
    string filename = argv[1];
    cout << filename << endl;
    ifstream infile(filename);
    // this is just a test edit to make sure that git is working

    string line;
    while (getline(infile, line)) {
        cout << "this is a line in our code" << endl;
        cout << line << endl;
    }
    cout << "if this prints that means our while loop didnt run :(" << endl;
    return 0;
}