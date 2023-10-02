#include <iostream>
#include <cstring>

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

int pre(char x)
{
    if (x == '+' || x == '-')
    {
        return 1;
    }
    else if (x == '*' || x == '/')
    {
        return 2;
    }
    else
    {
        return 0;
    }
}

int isOperand(char x)
{
    if (x == '+' || x == '-' || x == '/' || x == '*')
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

char *inToPost(char *infix, Stack *st)
{
    int i = 0, j = 0;
    char *postfix;
    int len = strlen(infix);
    postfix = new char[len];

    while (infix[i] != '\0')
    {
        if (isOperand(infix[i]))
        {
            postfix[j++] = infix[i++];
        }
        else
        {
            if (pre(infix[i]) > pre(st->S[st->top]))
            {
                push(st, infix[i++]);
            }
            else
            {
                postfix[j++] = pop(st);
            }
        }
    }

    while (st->top != -1)
    {
        postfix[j++] = pop(st);
    }
    postfix[j] = '\0';

    return postfix;
}

int eval(char *postfix)
{
    int i = 0;
    int x1, x2, r;
    Stack st;

    for (i = 0; postfix[i] != '\0'; i++)
    {
        if (isOperand(postfix[i]))
        {
            push(&st, postfix[i] - '0');
        }
        else
        {
            x2 = pop(&st);
            x1 = pop(&st);
            switch (postfix[i])
            {
            case '+':
                r = x1 + x2;
                break;

            case '-':
                r = x1 - x2;
                break;

            case '*':
                r = x1 * x2;
                break;

            case '/':
                r = x1 / x2;
                break;

            default:
                break;
            }
            push(&st, r);
        }
    }
    return pop(&st);
}

int main()
{
    Stack st;
    create(&st);

    char infix[] = "2+3/4*44+23-12/2*3";
    char *postfix = inToPost(infix, &st);

    cout << "Before eval function" << endl;
    cout << postfix << endl;
    cout << "After eval function" << endl;
    int result = eval(postfix);
    cout << result << endl;

    return 0;
}