#include <iostream>
#include "Deque2.cpp"
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    DequeTemp<int>* a = new DequeTemp<int>;
    DequeTemp<int>* aclass;
    a->PushFront(1);
    a->PushFront(2);
    a->PushBack(3);
    a->PushBack(4);
    cout << *a << endl;
    cout << "First = " << a->PeekFront() << endl;
    cout << "Back = " << a->PeekBack() << endl;
    cout << "Size = " << a->GetSize() << endl;
    a->PopFront();
    cout << "PopFrontDeque: " << *a << endl;
    a->PopBack();
    cout << "PopBackDeque: " << *a << endl;
    aclass = a;
    cout << "New Aclass = " << *aclass << endl;
    system("pause");
}
