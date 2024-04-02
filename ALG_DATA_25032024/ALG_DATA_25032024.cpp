#include <iostream>

using namespace std;

constexpr int ARRAY_SIZE = 5;

void fill_array(int* arr, const int count)
{
    for (int i = 0; i < count; i++)
        arr[i] = (i + 5) * 5;
}

void print_array(int* arr, const int count)
{
    cout << "Arr count: " << count << " " << &arr << endl << endl;
    for (int i = 0; i < count; i++)
        cout << arr[i] << '(' << &arr[i] << ')' << endl;

    cout << endl;
}

void process_array(int* arr, const int count)
{
    const int steps = count / 2;

    for (int i = 0; i < steps; i++)
    {
        const int buffer = *(arr + i);
        *(arr + i) = *(arr + ARRAY_SIZE - 1 - i);
        *(arr + ARRAY_SIZE - 1 - i) = buffer;
    }
}

int main()
{
    const auto arr = new int[ARRAY_SIZE];
    fill_array(arr, ARRAY_SIZE);
    print_array(arr, ARRAY_SIZE);
    process_array(arr, ARRAY_SIZE);
    print_array(arr, ARRAY_SIZE);
    
    delete[] arr;

    return 0;// NOLINT(concurrency-mt-unsafe)
}
