#include <iostream>
using namespace std;

class Stack
{
public:
    int size;
    int top;
    char *S;
};

void create(Stack *st)
{
    cout << "Enter size of stack." << endl;
    cin >> st->size;
    st->top = -1;
    st->S = new char[st->size];
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

void push(Stack *st, char x)
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

char pop(Stack *st)
{
    char x = -1;
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

int isBalance(char *exp)
{
    Stack st;
    int i;
    for (i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(')
        {
            push(&st, exp[i]);
        }
        else if (exp[i] == ')')
        {
            if (st.top == -1)
            {
                return 0;
            }
            else
            {
                pop(&st);
            }
        }
    }
    if (st.top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    Stack st;

    char exp[] = "((a+b)*(c+d))";
    cout << isBalance(exp);

    return 0;
}