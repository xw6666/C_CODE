//#define _CRT_SECURE_NO_WARNINGS 1
//#include "AddressBook.h"
//void menu()
//{
//    printf("**************************************\n");
//    printf("**** 1.增添                2.删除 ****\n");
//    printf("**** 3.修改                4.查找 ****\n");
//    printf("**** 5.展示                6.排序 ****\n");
//    printf("*************** 0.退出 ***************\n");
//    printf("**************************************\n");
//    // printf("*****************************************\n");
//}
//
//void test()
//{
//    //读取用户输入
//    int input = 0;
//    //创建通讯录
//    struct contact con;
//    //初始化通讯录
//    initContact(&con);
//    do
//    {
//        menu();
//        printf("请选择->\n");
//        scanf("%d", &input);
//        switch (input)
//        {
//        case EXIT:
//            printf("退出");
//            break;
//        case ADD:
//            //添加元素
//            addContact(&con);
//            system("pause");
//            system("cls");
//            break;
//        case DEL:
//            //删除元素
//            delContact(&con);
//            break;
//        case MODIFY:
//            //修改元素
//            modContact(&con);
//            break;
//        case SEARCH:
//            //查找元素
//            searchContact(&con);
//            break;
//        case SHOW:
//            // 展示通讯录信息
//            showContact(&con);
//            system("pause");
//            system("cls");
//            break;
//        case SORT:
//            //排序
//            sortContact(&con);
//            break;
//        default:
//            printf("选择非法，请重新选择->\n");
//        }
//    } while (input);
//}
//int main()
//{
//    test();
//    return 0;
//}