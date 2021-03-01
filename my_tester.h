//
// Created by me on 11/27/2020.
//

#ifndef MY_TESTER_H
#define MY_TESTER_H

#include "double_linked_list.h"

class MyTester {
private:
    DoubleLinkedList list;
public:
    void print();
};

void MyTester::print() {
    list.pushBack(2);
    list.pushBack(3);
    list.pushBack(5);
    list.pushFront(1);
    list.pushFront(0);
    list.erase(3);

    DoubleLinkedList::DoubleNode *ptr = list.begin();
    while (ptr != nullptr) {
        std::cout << ptr->value() << ' ';
        ptr = ptr->next();
    }

    std::cout << std::endl;
    std::cout << "list size 1:" << list.size() << std::endl;


    DoubleLinkedList newList = DoubleLinkedList();

    newList.pushBack(10);
    newList.pushBack(11);
    newList.pushBack(12);

    DoubleLinkedList::DoubleNode *ptr3 = newList.begin();
    while (ptr3 != nullptr) {
        std::cout << ptr3->value() << ' ';
        ptr3 = ptr3->next();
    }
    std::cout << std::endl;

    std::cout << "new list size :" << newList.size() << std::endl;


    list.swap(newList);

    std::cout << "list size 2:" << list.size() << std::endl;

    DoubleLinkedList::DoubleNode *ptr2 = list.begin();
    while (ptr2 != nullptr) {
        std::cout << ptr2->value() << ' ';
        ptr2 = ptr2->next();
    }

}

#endif
