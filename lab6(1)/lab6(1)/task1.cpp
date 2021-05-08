#include <iostream>
#include "deque1.cpp"
using namespace std;
int main()
{
	int arr, pos, element;
	cout << "Deque Test Program" << endl << "Data:" << endl << "Deque Length = ";
	cin >> arr;
	DequeTemp<int> a(arr);
	cout << "Deque First Element = ";
	cin >> element;
	a.GetFirst(element);
	cout << "Deque Fill Element" << endl;
	while (a.GetSize() < arr)
	{
		cout << "[0] - Add element to Front Position" << endl << "[1] - Add element to Backward Position" << endl;
		cin >> pos;
		if (pos == 0)
		{
			cout << "Element " << a.GetSize() + 1 << " / " << arr << ": ";
			cin >> element;
			a.PushFront(element);
		}
		else if (pos == 1)
		{
			cout << "Element " << a.GetSize() + 1 << " / " << arr << ": ";
			cin >> element;
			a.PushBack(element);
		}
	}
	cout << endl << "Deque: " << a << endl;
	system("pause");
	while (true)
	{
		cout << "Deque Main Menu" << endl << "[1] Show Deque first element" << endl << "[2] Show Deque last element" << endl << "[3] - Delete Front Deque Element"
			<< endl << "[4] - Delete Last Deque Element" << endl << "[5] - Exit" << endl << "Selected Item = ";
		cin >> pos;
		switch (pos)
		{
		case 1:
		{
			cout << a.PeekFront() << endl;
			break;
		}
		case 2:
		{
			cout << a.PeekBack() << endl;
			break;
		}
		case 3:
		{
			a.PopFront();
			cout << endl << "Deque: " << a << endl;
			break;
		}
		case 4:
		{
			a.PopBack();
			cout << endl << "Deque: " << a << endl;
			break;
		}
		case 5:
		{
			return 0;
		}
		default:
		{
			cout << "Error. Selected Item not exist.";
		}
		}
	}
}
