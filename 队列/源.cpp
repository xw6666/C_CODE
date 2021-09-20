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

    //��õ�i��Ԫ�ص�ֵ��i��1..length
    int  GetElem(int  i, ElemType& e);

    //���e��λ�ã�0��Ԫ�ط���1��length-1��Ԫ�ط���length
    int  LocateELem(ElemType  e);

    //�ڵ�i��Ԫ�ش����룬����Ԫ�س�Ϊi-1��
    int  ListInsert_Sq(int  i, ElemType  e);

    //ɾ����i��Ԫ��λ�ã���Ӧi-1��Ԫ��
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
    //length��Ҫ���㣬��new���ɣ��ڴ����ʧ�ܷ���ERROR
    this->length = 0;
    this->elem = (ElemType*)malloc(sizeof(ElemType) * MAXSIZE);
    if (elem == NULL)
    {
        return ERROR;
    }

    return  OK;
}

int  SqList::GetElem(int  i, ElemType& e) {
    //����i-1��Ԫ��
    if (i > length)
    {
        return false;
    }

    e = elem[i - 1];

    return  OK;
}
//������e��Ϣ��ͬ��Ԫ������λ�ã��ڼ���λ����ΧΪ1~length
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
    //length��Ҫ��1
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
    //length��Ҫ�ı�
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

    //  ��ʼ��
    booklist.Init();

    //���������Ϣ
    booklist.readinfo();


    //���һ��Ԫ�أ�������λ��ȷ�����ҵ���λ��
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