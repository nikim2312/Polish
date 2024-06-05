#pragma once
#include <iostream>
#include <string>
#include<map>
using namespace std;
class Element {
public:
    string data;
    Element* next;
};
class Stack
{
public:

    Element* head = nullptr;


    void Push(string a);
    void Print();
    string Pop();
    string Back_el();
    //Element* Find(int num);
    void Back();
    void sort(bool order);
    int Count();
    //int* ToArray();
    bool IsEmpty();
};
