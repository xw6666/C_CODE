#include "stack.h"
void test1()
{
    Stack s;
    InitStack(&s);
    PushStack(&s,1,1);
    PushStack(&s,1,2);
    PushStack(&s,2,2);
    PushStack(&s,3,2);
    PrintStack(&s,2);
}

int main()
{
    test1();
    return 0;
}