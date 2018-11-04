#include <iostream>
#include "arrayPrototype.h"


using namespace std;





int main()
{

getTotal(numbers);
getAverage(numbers);

//user input for Row Total
int row;
cout << "Enter the number of the row you would like to sum: ";
cin >> row;
getRowTotal(numbers, row);

int col;

cout << "Enter the column you would like to sum: ";
cin >> col;
getColTotal(numbers, col);

cout << "Enter the row where you would like to find the maximum: ";
cin >> row;
getHighestInRow(numbers, row);


cout << "Enter the row where you would like to find the minimum: ";
cin >> row;
getLowestInRow(numbers, row);



}
