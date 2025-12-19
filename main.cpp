#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char* argv[]) {

    if(argc != 3){
        cout << "Provide proper usage arguments such as ./converter input.md output.html" << endl;
        return 1;
    }

    string inputFile = argv[1];
    string outputFile = argv[2];

}