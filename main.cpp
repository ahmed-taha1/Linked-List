#include "Linked_List.cpp"

int main(){
    LinkedList<int> test;

    test.push_back(12);
    cout << "after pushing 12 to the back: ";
    test.PrtLst();     cout << '\n';

    test.push_front(21);
    cout << "after pushing 21 to the front: ";
    test.PrtLst();     cout << '\n';

    test.push_front(50);
    cout << "after pushing 50 to the front: ";
    test.PrtLst();     cout << '\n';

    test.push_back(62);
    cout << "after pushing 62 to the back: ";
    test.PrtLst();     cout << '\n';


    test.insertAt(2, 15);
    cout << "after inserting 15 to index 2: ";
    test.PrtLst(); cout << '\n';

    test.insertAt(1, 160);
    cout << "after inserting 160 to index 1: ";
    test.PrtLst(); cout << '\n';

    test.pop_back();
    cout << "after pop back: ";
    test.PrtLst();     cout << '\n';

    test.pop_front();
    cout << "after pop front: ";
    test.PrtLst();     cout << '\n';

    test.pop_front();
    cout << "after pop front: ";
    test.PrtLst();     cout << '\n';

    cout << "is the list empty?: " << test.isEmpty();
}