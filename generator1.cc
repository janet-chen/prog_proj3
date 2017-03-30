#include <iostream>
#include <cstdlib> // for atoi
using namespace std;

//insert, find in decreasing order
int main(int argc, char* argv[])
    {
        if (argc != 2) // remember, argv[0] is the program name
        {
            cerr << "Wrong number of arguments!" << endl;
return 1; }
        int n = atoi(argv[1]);
        for(int i = n - 1; i > 0 ; i--) {
            cout << "I " << i << endl;
        }

        for(int i= n-1; i > 0; i --){
            cout << "F " << i << endl;
        }
return 0; }
