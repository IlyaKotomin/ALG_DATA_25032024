#include <iostream>

using namespace std;

struct queue
{
    int key;
    queue *next;
} *first = nullptr, *last = nullptr,
  *f2 = nullptr, *l2 = nullptr;
#pragma region TASK1



void push(const int &key)
{
    queue *previous = last;
    last = new queue;
    last->key = key;
    last->next = nullptr;

    if(previous) previous->next = last;
    else first = last;
}

int pop(int& key)
{
    if (!first) return 0;

    key = first->key;
    const queue *previous = first;
    first = first->next;
    delete previous;

    if (last == nullptr) first = nullptr;
    return 1;
}

int main()
{
    //-> Creating new queue
    int num = 1;
    cout << "Enter num: " << endl;

    while (num > 0)
    {
        cin >> num;
        if (num % 2 == 0) push(num);
    }

    cout << "Queue content:" << endl;
    
    while (pop(num)) cout << num << "\t";
    
    return 0;
}


#pragma endregion

#pragma region TASK2

// void push(const int key, queue *&first, queue *&last)
// {
//     queue *previous = last;
//     last = new queue;
//     last->key = key;
//     last->next = nullptr;
//     if (previous) previous->next = last;
//     else first = last;
// }
// int pop(int &key, queue *&first, queue *&last)
// {
//     if (!first)
//     {
//         last = nullptr;
//         return 0;
//     }
//     
//     key = first->key;
//     const queue *previous = first;
//     first = first->next;
//     delete previous;
//     
//     return 1;
// }
//
// int main()
// {
//     int num = 1;
//     while (num != 0)
//     {
//         cin >> num;
//         if(num > 0) push(num, f1, l1);
//         if(num < 0) push(num, f2, l2);
//     }
//
//     cout << endl << "\tPos:" << endl;
//     while (pop(num, f1, l1))
//         cout << num << "\t";
//     
//     cout << endl << "\tNeg:" << endl;
//     while (pop(num, f2, l2))
//         cout << num << "\t";
//     
//     return 0;
// }

#pragma endregion
