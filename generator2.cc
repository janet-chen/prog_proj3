#include <iostream>
#include <cstdlib> // for atoi
using namespace std;

//insert, remove with random numbers
int main(int argc, char* argv[])
    {   srand(time(NULL));
        if (argc != 2) // remember, argv[0] is the program name
        {
            cerr << "Wrong number of arguments!" << endl;
return 1; }
        int n = atoi(argv[1]);
        for(int i = 1; i <= n ; i++) {
            cout << "I " << rand() % n << endl;
        }
        for(int i=1; i <= n; i++){
            cout << "R " << rand() % n << endl;
        }
return 0; }
