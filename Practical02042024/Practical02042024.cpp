#include <iostream>

using namespace std;

constexpr int MATRIX_SIDE = 6;
int matrix[MATRIX_SIDE][MATRIX_SIDE];
int arr[MATRIX_SIDE * MATRIX_SIDE];

void fill_matrix()
{
    for (int i = 0; i < MATRIX_SIDE; i++)
        for (int j = 0; j < MATRIX_SIDE; j++)
            matrix[i][j] = rand() % 99;  // NOLINT(concurrency-mt-unsafe)
}

void print_matrix()
{
    cout << "matrix: " << endl;
    for (int i = 0; i < MATRIX_SIDE; i++)
    {
        for (int j = 0; j < MATRIX_SIDE; j++)
            cout << matrix[i][j] << "\t";
        cout << endl << endl;
    }
}

void block_sort()
{
    
}
void exchange_sort()
{
    
}

int main()
{
    fill_matrix();
    print_matrix();

    int counter = 0;
    int odd[MATRIX_SIDE*MATRIX_SIDE];
    int even[MATRIX_SIDE*MATRIX_SIDE];
    
    
    for (int i = 0; i < MATRIX_SIDE; i++)
    {
        for (int j = 0; j < MATRIX_SIDE; j++)
        {
            arr[counter] = matrix[i][j];
            counter++;
        }
    }

    cout << "UNSORTED:" << endl;
    for (const int number : arr)
        cout << number << endl;

    //separeting

    int odd_counter = 0;
    int even_counter = 0;
    for (int i = 0; i < MATRIX_SIDE * MATRIX_SIDE; i++)
    {
        if (arr[i] % 2 == 0)
            odd[odd_counter++] = arr[i];
        else
            even[even_counter++] = arr[i];
    }
    
    cout << "Odd:" << endl;
    for (int i = 0; i < odd_counter; i++)
        cout << odd[i] << endl;

    cout << "Even:" << endl;
    for (int i = 0; i < even_counter; i++)
        cout << even[i] << endl;


    // sort odd ->> exchange
    
    
    return 0;
}