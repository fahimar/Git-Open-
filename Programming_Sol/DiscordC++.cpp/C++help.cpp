#include <iostream>
#include <string>
#include "windows.h" 

using namespace std;

// Vars 
int const small_rooms{3};
int const large_rooms{1};
const int price_smallroom{25};
const int price_largeroom{35};


int main() {
cout << "How many small rooms would you like to be cleaned: " << endl;

Sleep(100);
cout  << "How many large rooms do you want to be cleaned: " << endl;

Sleep(100);
cout << "Total: ";
cout << small_rooms * price_smallroom * large_rooms * price_largeroom + 6.6;
    }
