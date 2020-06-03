/******************************************************************************
 * Program: assign5_showcase.cpp
 * Author: Jordan Chan
 * Date: 5/26/2020
 * Description:
 * ***************************************************************************/
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
/******************************************************************************
 * Function: functionStart
 * Parameters: int a
 * Description: Function will start the code. It takes in user input and
 * checks for validity. Since it's in a do-while loop, it will repeat if
 * input is incorrect.
 * Test Case #1: Input = "1" Output = Continues
 * Test Case #2: Input = "2" Output = Error Message
 * ***************************************************************************/
int functionStart (char a){
    cout << "Welcome to my Pokemon Showcase! Press [1] to continue!" << endl <<": ";
    cin >> a;
    while (a != '1') {
        cout << "Error. Please press [1]" << endl << ": ";
        cin >> a;}
    return a;
}
/******************************************************************************
 * Function: rowsColumns
 * Parameters: int r, intc
 * Description: Function will ask the user for how many rows and columns are in
 * the showcase. Maximum is 3 and will display an error if it's above or below
 * the limit.
 * Test Case #1: Input = "3, 2" Output = Continue
 * Test Case #2: Input = "4, 1" Output = Error Message
 * Test Case #3: Input = "-1, 2" Output = Error Message
 * Test Case #4: Input = "69, 74" Output = Error Message
 * ***************************************************************************/
int rowsColumns (int c){
    cout << "How many columns (3 max) would you like." << endl << ": ";
    cin >> c;
    while ((c < 1) || (c > 3)) {
        cout << "Error. Please try again " << endl << ": ";
        cin >> c;

        /*int** poke_toys = pokemon (size_r, size_c);
        displayCase (poke_toys, size_r, size_c);
        for (int r = 0; r < size_r; r++)*/
    }
    return c;
}

int row(int r){
    cout << "How many rows (3 max) would you like." << endl << ": ";
    cin >> r;
    while ((r < 1) || (r > 3)) {
        cout << "Error. Please try again." << endl << ": ";
        cin >> r;
    }
}
/******************************************************************************
 * Function: displayCase
 * Parameters: int r, intc
 * Description: Function will ask the user for how many rows and columns are in
 * the showcase. Maximum is 3 and will display an error if it's above or below
 * the limit.
 * Test Case #1: Input = "3, 2" Output = Continue
 * Test Case #2: Input = "4, 1" Output = Error Message
 * Test Case #3: Input = "-1, 2" Output = Error Message
 * Test Case #4: Input = "69, 74" Output = Error Message
 * ***************************************************************************/
void print_case (string** poke_toys, int size_r, int size_c) {
    for(int i = 0; i < size_r; i++){
        cout << "|";
        for(int j = 0; j < size_c; j++){
            cout << poke_toys[i][j] << "|";
        }
        cout << endl;
    }
}
string** pokemon (int nr, int nc) {
    string** f = new string*[nr];
    for (int r = 0; r < nr; r++)
        f[r] = new string[nc];
    return f;
}
int main() {
    int a;
    int displayCase [3][3];
    int c;
    int r;
    int size_r;
    int size_c;
    int r2 = 3;
    int c2 = 3;
    srand(time(NULL));
    char option;
    float money = 0;

    a = functionStart(a);

    r = row(r);

    c = rowsColumns(c);

    size_r = r;
    size_c = c;

    cout << size_r << endl;
    cout << size_c << endl;
    string** poke_toys = pokemon (size_r, size_c);

    for(int i = 0; i < size_r; i++){
        for(int j = 0; j < size_c; j++){
            poke_toys[i][j] = '_';
        }
    }

    print_case(poke_toys, size_r, size_c);

    while(true){
        cout << " SELECT A ROW. " << endl << ": ";
        cin >> r;
        r = r - 1;

        cout << " SELECT A COLUMN. " << endl << ": ";
        cin >> c;
        c = c - 1;

        cout << " WOULD YOU LIKE TO BUY (1), SELL(2) OR LOOK AT POKEMON (3)? Press anything else to end program!" << endl << ": ";
        cin >> option;

        if(option == '1'){
            poke_toys[r][c] = "Eevee";
            money = money - 100;
        }
        else if (option == '2'){
            poke_toys[r][c] = "_";
            money = money + 100;
        }
        else if(option == '3'){

        }
        else{
            //delete [] poke_toys[r];
            //:wq
            //delete [] poke_toys;
            return 0;
        }
        cout << " YOU HAVE: $" << money << " LEFT! " << endl;

        print_case(poke_toys, size_r, size_c);

    }
}
