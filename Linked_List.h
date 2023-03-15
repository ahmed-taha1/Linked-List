#include <bits/stdc++.h>
using namespace std;

struct Node{
    int value;
    Node* next;
    Node* prev;
    Node();
};


class linkedList{
protected:
    int size;
    Node* tail;
    Node* head;
public:
    linkedList();
}

