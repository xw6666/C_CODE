#include"LinkStack.h"

void test1()
{
    LinkStack s;
    InitLinkStack(&s);
    PushLinkStack(&s,1);
    PushLinkStack(&s,2);
    PushLinkStack(&s,3);
    PushLinkStack(&s,4);
    PushLinkStack(&s,5);
    PopLinkStack(&s);
    PopLinkStack(&s);
    PopLinkStack(&s);
    // PopLinkStack(&s);
    // PopLinkStack(&s);
    // PopLinkStack(&s);
    PrintLinkStack(&s);
}

int main()
{
    test1();
    return 0;
}