#include <iostream>
#include "arrayprototype.h"
#include <fstream>

using namespace std;



void getTotal(const int numbers[NUM_ROWS][NUM_COLS])
{
int total = 0;

for (int row = 0; row < NUM_ROWS; row++)
{
    for (int col = 0; col<NUM_COLS; col++)
    {
        total += numbers[row][col];
    }
}

cout << "Grand total is " <<total<<endl;
}

void getAverage (const int numbers[NUM_ROWS][NUM_COLS])
{
float numOfNums = NUM_ROWS * NUM_COLS;
float average;

int total = 0;
    for (int row = 0; row < NUM_ROWS; row++)
    {
        for (int col = 0; col<NUM_COLS; col++)
        {
            total += numbers[row][col];
        }
    }

    average = total / numOfNums;

cout << "Average is: " << average << endl;
}



void getRowTotal(const int numbers[NUM_ROWS][NUM_COLS], int row)
{
while (row > (NUM_ROWS + 1)){
    cout << "Maximum number of rows is " << (NUM_ROWS + 1) << "." << endl;
    cout << "Enter the number of the row you would like to sum: ";
    cin >> row;
}
if (row <= (NUM_ROWS + 1)){
int total = 0;

    for ( int col = 0; col < NUM_COLS; col++)
    {
        total += numbers[row - 1][col];
    }

cout << "Total for row " << (row) << " is : " << total <<endl;

}
}



void getColTotal(const int numbers[NUM_ROWS][NUM_COLS], int col)
{
while (col > (NUM_COLS + 1))
{
    cout << "Maximum number of rows is " << (NUM_COLS + 1) << "." << endl;
    cout << "Enter the column you would like to sum: ";
    cin >> col;
}

if (col <= (NUM_COLS + 1)){
int total = 0;

    for ( int row = 0; row < NUM_ROWS; row++)
    {
        total += numbers[row][col-1];
    }

cout << "Total for column " << (col) << " is : " << total <<endl;

}
}

void getHighestInRow(const int numbers[NUM_ROWS][NUM_COLS], int row)
{

int count;
int highest;

while (row > (NUM_ROWS + 1))
{
    cout << "Maximum number of rows is " << (NUM_ROWS + 1) << "." << endl;
    cout << "Enter the row where you would like to find the maximum: ";
    cin >> row;
}

if (row <= (NUM_ROWS + 1)){
    for ( int col = 0; col < NUM_COLS; col++)
    {
        highest = numbers[row-1][0];
            for (count = 1; count < NUM_ROWS; count ++)
            {
                if (numbers[row-1][count]>highest)
                highest = numbers[row-1][count];
            }

    }

cout << "Highest in row " << row << " is " << highest << "." << endl;

}
}




void getLowestInRow(const int numbers[NUM_ROWS][NUM_COLS], int row)
{

while (row > (NUM_ROWS + 1))
{
    cout << "Maximum number of rows is " << (NUM_ROWS + 1) << "." << endl;
    cout << "Enter the row where you would like to find the minimum: ";
    cin >> row;
}

if (row <= (NUM_ROWS + 1)){
        int count;
        int lowest;

        for ( int col = 0; col < NUM_COLS; col++)
        {
            lowest = numbers[row-1][0];
                for (count = 1; count < NUM_ROWS; count ++)
                {
                    if (numbers[row-1][count] < lowest)
                    lowest = numbers[row-1][count];
                }

        }

cout << "Lowest in row " << row << " is " << lowest << "." << endl;
}
}
