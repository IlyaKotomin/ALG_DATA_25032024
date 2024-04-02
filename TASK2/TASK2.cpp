#include <iostream>
#include "StaticStack.h"

using namespace std;

int main()
{
    int digit = 0;
    std::string content;
    do
    {
        cout << "Enter Digit: ";
        cin >> digit;
        cout << "Enter Content: ";
        cin >> content;
        if (digit > 0)
            static_stack::push(digit, content);
    } while (digit > 0);

    while (static_stack::pop(digit))
    {
        cout << "Digit: " << digit << endl;
        auto [key, next, content] = static_stack::get_element(digit);  // NOLINT(clang-diagnostic-shadow)

        cout << "Element: " << key << endl;
        cout << "Content: " << content << endl;
    }
    return 0;
}
