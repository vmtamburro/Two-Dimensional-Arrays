#ifndef ARRAYPROTOTYPE_H_INCLUDED
#define ARRAYPROTOTYPE_H_INCLUDED


const int NUM_ROWS = 5;
const int NUM_COLS =5;

const int numbers[NUM_ROWS][NUM_COLS] = {{1, 2, 3, 4, 5},
                                         {6, 7, 8, 9, 10},
                                         {11, 12, 13, 14, 15},
                                         {16, 17, 18, 19, 20},
                                         {21, 22, 23, 24, 25}};

void getAverage(const int numbers[NUM_ROWS][NUM_COLS]);
void getTotal(const int numbers[NUM_ROWS][NUM_COLS]);
void getRowTotal(const int numbers[NUM_ROWS][NUM_COLS], int);

void getColTotal(const int numbers[NUM_ROWS][NUM_COLS], int);
void getHighestInRow(const int numbers[NUM_ROWS][NUM_COLS], int);
void getLowestInRow(const int numbers[NUM_ROWS][NUM_COLS], int);

#endif // ARRAYPROTOTYPE_H_INCLUDED
