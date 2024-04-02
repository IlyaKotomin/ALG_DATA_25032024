#include "StaticStack.h"

#include <utility>

int static_stack::pop(int& key)
{
    if (!start) return 0;

    const static_stack* previous =  start;
    key = start->key;
    start = start->next;
    delete previous;
    return 1;
}

static_stack static_stack::get_element(int key)
{
    static_stack* element = start;

    while (element->key != key)
        element = start->next;
    return *element;
}

void static_stack::push(const int key, std::string content)
{
    static_stack* previous = start;
    start = new static_stack;
    
    start->next = previous;
    start->content = std::move(content);
    start->key = key;
}
