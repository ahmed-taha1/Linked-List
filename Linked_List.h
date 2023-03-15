#include <bits/stdc++.h>
using namespace std;

template<typename T>
struct Node{
    T value;
    Node<T>* next;
    Node<T>* prev;
    Node();
};

template<typename T>
class LinkedList{
protected:
    int size;
    Node<T>* tail;
    Node<T>* head;
public:
    LinkedList();
    void push_front(const T& val);
    void push_back(const T& val);
    void pop_back();
    void pop_front();
    void PrtLst() const;
    bool isEmpty() const;
    void insertAt(const int& ind, const T& val);
    T retriveAt(const int& ind) const;
    int Size() const;
    void popAt(const int& ind);
};