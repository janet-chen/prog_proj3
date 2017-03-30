#include <iostream>
#include <cstdlib> // for atoi
using namespace std;

//insert, find random from 1 to n/2
int main(int argc, char* argv[])
{  
    srand(time(NULL));
    if (argc != 2) // remember, argv[0] is the program name
    {
        cerr << "Wrong number of arguments!" << endl;
	return 1; 
}
    int n = atoi(argv[1]);
    for(int i = 1; i <= n ; i++) {
        cout << "I " << i << endl;
    }
    for(int i = 1; i <= n/2 ; i++){
        cout << "R " << rand() % n/2  + 1<< endl;
    }
    for(int i=1; i <= n/2; i++){
    	cout << "F " << i << endl;
    }
	return 0; 
}