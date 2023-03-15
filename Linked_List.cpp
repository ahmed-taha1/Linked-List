#include "Linked_List.h"

template<typename T>
Node<T>::Node(){
    value = T();
    next = NULL;
    prev = NULL;
}

template<typename T>
LinkedList<T>::LinkedList(){
    size = 0;
    head = NULL;
    tail = NULL;
}

template<typename T>
void LinkedList<T>::push_front(const T& val){

    Node<T>* temp = new Node<T>();
    temp -> value = val;

    if(head == NULL){
        head = tail = temp;
        size++;
        return;
    }

    temp -> next = head;
    head -> prev = temp;
    head = temp;
    size++;

}

template<typename T>
void LinkedList<T>::push_back(const T& val){

    Node<T>* temp = new Node<T>();
    temp -> value = val;

    if(head == NULL){
        head = tail = temp;
        size++;
        return;
    }

    temp -> prev = tail;
    tail -> next = temp;
    tail = temp;
    size++;

}

template<typename T>
void LinkedList<T>::pop_back(){

    if(tail == NULL){
        return;
    }

    Node<T>* temp = tail;
    tail = tail->prev;
    tail->next = NULL;
    delete temp;
    size--;

}

template<typename T>
void LinkedList<T>::pop_front(){
    if(head == NULL){
        return;
    }

    Node<T>* temp = head;
    head = head->next;
    head->prev = NULL;
    delete temp;
    size--;
}

template<typename T>
void LinkedList<T>::PrtLst() const{
    Node<T>* Curr = head;
    while (Curr != NULL){
        cout << Curr -> value << " ";
        Curr = Curr->next;
    }
}

template<typename T>
bool LinkedList<T>::isEmpty() const{
    return size == 0;
}

template<typename T>
void LinkedList<T>::insertAt(const int& ind, const T& val){
    if(ind >= size || ind < 0)
        return;

    if(ind == 0){
        push_front(val);
        return;
    }
    else if(ind == size - 1){
        push_front(val);
        return;
    }

    Node<T>* curr = head;
    Node<T>* temp = new Node<T>();
    temp -> value = val;

    for(int i = 0; i < ind; i++)
        curr = curr->next;

    temp->next = curr;
    temp->prev = curr->prev;
    curr->prev->next = temp;
    curr->prev = temp;
    size++;
}

template<typename T>
T LinkedList<T>::retriveAt(const int& ind) const{
    if(ind >= size || ind < 0)
        return T();
    Node<T>* curr = head;
    for(int i = 0; i < ind; i++)
        curr = curr -> next;
    return curr -> value;
}

template<typename T>
int LinkedList<T>::Size() const{
    return size;
}

template<typename T>
void LinkedList<T>::popAt(const int& ind){
    if(ind >= size || ind < 0)
        return;
    
    if(ind == 0){
        pop_front();
        return;
    }

    if(ind == size - 1){
        pop_back();
        return;
    }

    Node<T>* curr = head;
    for(int i = 0; i < ind; i++)
        curr = curr->next;
    curr->prev->next = curr->next;
    curr->next->prev = curr->prev;
    delete curr;
    size--;
}