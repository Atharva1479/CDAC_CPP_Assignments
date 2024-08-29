#include <iostream>

using namespace std;

class Stack
{

    int *stackArray; // dyn mem allo
    int maxSize;     // count
    int top;         // count stack

public:
    Stack() : maxSize(5), top(-1)
    {

        stackArray = new int[maxSize];
    };

    Stack(int m) : maxSize(m), top(-1)
    {

        stackArray = new int[maxSize];
    };

    bool isFull()
    {

        return top == maxSize - 1;
    }

    bool isEmpty()
    {

        return top == -1;
    }

    void push(int value)
    {

        if (isFull())
        {

            cout << "Array is full" << endl;
            return;
        }

        stackArray[++top] = value;
    }

    void pop()
    {

        if (isEmpty())
        {

            cout << "Array is empty" << endl;
            return;
        }

        cout << "Removed element: " << stackArray[top] << endl;

        --top;
    }

    void peek()
    {

        if (isEmpty())
        {

            cout << "Array is empty" << endl;
            return;
        }

        cout << "Top element: " << stackArray[top] << endl;
    }

    void print()
    {

        for (int i = 0; i <= top; i++)
        {

            cout << "Element: " << stackArray[i] << endl;
        }
    }
};

int main()
{
    Stack stack;

    for (int i = 0; i < 5; i++)
    {

        stack.push((10) * (i + 1));
    }

    stack.print();
    stack.pop();
    stack.peek();
    stack.print();
    return 0;
}