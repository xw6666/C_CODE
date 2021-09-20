#include  <iostream>

using  namespace  std;
int  OK = 0;
int  ERROR = 1;

#define  MAXSIZE  1000
typedef  struct  Book {
    string  no;                        //ISBN  code
    string  name;
    int  price;
}  ElemType;
int  cmp(ElemType  a, ElemType  b) {
    if (a.name == b.name && a.no == b.no && a.price == b.price)
        return  1;
    else  return  0;
}
/*
struct  SqList  {
        Book  *elem;
        int  length;
};*/
struct  SqList {
    ElemType* elem;
    int    length;

    int  readinfo();

    int  Init();

    //获得第i个元素的值，i从1..length
    int  GetElem(int  i, ElemType& e);

    //获得e的位置，0号元素返回1，length-1号元素返回length
    int  LocateELem(ElemType  e);

    //在第i个元素处插入，插入元素成为i-1号
    int  ListInsert_Sq(int  i, ElemType  e);

    //删除第i个元素位置，对应i-1号元素
    int  ListDelete_Sq(int  i);

    void  Destroy();
};

int  SqList::readinfo() {
    int  n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        ElemType  e;
        cin >> e.no;
        cin >> e.name;
        cin >> e.price;

        if (ListInsert_Sq(i + 1, e) == ERROR)  return  ERROR;
    }

    return  OK;
}

int  SqList::Init() {
    //length需要清零，用new生成，内存分配失败返回ERROR
    this->length = 0;
    this->elem = (ElemType*)malloc(sizeof(ElemType) * MAXSIZE);
    if (elem == NULL)
    {
        return ERROR;
    }

    return  OK;
}

int  SqList::GetElem(int  i, ElemType& e) {
    //返回i-1号元素
    if (i > length)
    {
        return false;
    }

    e = elem[i - 1];

    return  OK;
}
//返回与e信息相同的元素所在位置，第几号位，范围为1~length
int  SqList::LocateELem(ElemType  e) {
    //cmp(elem[i],e));
    for (int i = 0; i < length; i++)
    {
        if(cmp(elem[i], e) == 1)
        {
            return i + 1;
        }
    }

    return  0;
}
int  SqList::ListInsert_Sq(int  i, ElemType  e) {
    i--;
    //length需要加1
    int j = length - 1;
    while (j >= i)
    {
        elem[j + 1] = elem[j];
        j--;
    }

    this->elem[i] = e;
    length++;

    return  OK;
}
int  SqList::ListDelete_Sq(int  i) {
    i--;
    //length需要改变
    if (length == 0)
    {
        return ERROR;
    }
    int j = i + 1;
    while (j < length)
    {
        elem[j - 1] = elem[j];
        j++;
    }
    length--;

    return  OK;
}
void  SqList::Destroy() {

    length = 0;
    free(elem);
    elem = NULL;
}
int  main() {
    SqList  booklist;

    //  初始化
    booklist.Init();

    //整体读入信息
    booklist.readinfo();


    //获得一个元素，根据其位置确定查找的新位置
    ElemType  e1;
    //int  loc1  =  rand()%booklist.length+1;
    int  loc1;
    cin >> loc1;
    if (booklist.GetElem(loc1, e1) == OK) {
        e1.price--;
        int  iloc = booklist.LocateELem(e1);
        if (booklist.ListDelete_Sq(iloc) == OK)  cout << "SUCCESS" << endl;
        else  cout << "FAIL" << endl;
    }

    booklist.Destroy();

    if (booklist.elem == NULL)
        cout << "SUCCESS" << endl;

    return  0;
}