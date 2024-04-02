#pragma once
#include <string>

inline struct static_stack
{
    int key;
    static_stack* next;
    
    static int pop(int& key);
    static static_stack get_element(int key);
    static void push(int key, std::string content);
} *start = nullptr;

