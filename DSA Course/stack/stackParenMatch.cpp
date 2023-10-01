#include <iostream>
using namespace std;

class Stack
{
public:
    int size;
    int top;
    int *S;
};

void create(Stack *st)
{
    cout << "Enter size of stack." << endl;
    cin >> st->size;
    st->top = -1;
    st->S = new int[st->size];
}

void display(Stack st)
{
    int i;
    for (i = st.top; i >= 0; i--)
    {
        cout << st.S[i] << " ";
    }
    cout << endl;
}

void push(Stack *st, int x)
{
    if (st->top == st->size - 1)
    {
        cout << "Stack overflow." << endl;
    }
    else
    {
        st->top++;
        st->S[st->top] = x;
    }
}

int pop(Stack *st)
{
    int x = -1;
    if (st->top == -1)
    {
        cout << "Stack underflow.";
    }
    else
    {
        x = st->S[st->top--];
    }
    return x;
}

int peek(Stack st, int index)
{
    int x = -1;
    if (st.top - index + 1 < 0)
    {
        cout << "Invalid index." << endl;
    }
    else
    {
        x = st.S[st.top - index + 1];
    }
    return x;
}

int isEmpty(Stack st)
{
    if (st.top == -1)
    {
        cout << "Stack is empty.";
        return 1;
    }
    else
    {
        cout << "Stack is not empty";
        return 0;
    }
}

int isFULL(Stack st)
{
    if (st.top == st.size - 1)
    {
        cout << "Stack is full.";
        return 1;
    }
    else
    {
        cout << "Stack is empty.";
        return 0;
    }
}

int stackTop(Stack st)
{
    if (isEmpty(st))
    {
        return st.S[st.top];
    }
    else
    {
        return -1;
    }
}

int main()
{
    Stack st;
    create(&st);

    push(&st, 10);
    push(&st, 20);
    push(&st, 30);
    push(&st, 40);
    push(&st, 50);

    // cout << pop(&st) << endl;
    cout << peek(st, 2) << endl;

    display(st);

    return 0;
}