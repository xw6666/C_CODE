//#define _CRT_SECURE_NO_WARNINGS 1
//#include "AddressBook.h"
//void menu()
//{
//    printf("**************************************\n");
//    printf("**** 1.����                2.ɾ�� ****\n");
//    printf("**** 3.�޸�                4.���� ****\n");
//    printf("**** 5.չʾ                6.���� ****\n");
//    printf("*************** 0.�˳� ***************\n");
//    printf("**************************************\n");
//    // printf("*****************************************\n");
//}
//
//void test()
//{
//    //��ȡ�û�����
//    int input = 0;
//    //����ͨѶ¼
//    struct contact con;
//    //��ʼ��ͨѶ¼
//    initContact(&con);
//    do
//    {
//        menu();
//        printf("��ѡ��->\n");
//        scanf("%d", &input);
//        switch (input)
//        {
//        case EXIT:
//            printf("�˳�");
//            break;
//        case ADD:
//            //���Ԫ��
//            addContact(&con);
//            system("pause");
//            system("cls");
//            break;
//        case DEL:
//            //ɾ��Ԫ��
//            delContact(&con);
//            break;
//        case MODIFY:
//            //�޸�Ԫ��
//            modContact(&con);
//            break;
//        case SEARCH:
//            //����Ԫ��
//            searchContact(&con);
//            break;
//        case SHOW:
//            // չʾͨѶ¼��Ϣ
//            showContact(&con);
//            system("pause");
//            system("cls");
//            break;
//        case SORT:
//            //����
//            sortContact(&con);
//            break;
//        default:
//            printf("ѡ��Ƿ���������ѡ��->\n");
//        }
//    } while (input);
//}
//int main()
//{
//    test();
//    return 0;
//}