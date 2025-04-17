//  main.cpp
//
//
//  Created by Moosa's Macbook Pro on 15/05/2025.
//  Copyright © 2025 Moosa's Macbook Pro. All rights reserved.
//


#include <iostream>
#include "MyQueue.h"
using namespace std;

template <typename t>
void display(t* arr,int size){
    for (int i = 0; i < 5; i++)
        cout << arr[i] << " ";
    cout << endl;
}

template<typename Type>
Type* reverseElements(Type* arr, int size) {
    Type* arr2 = new Type[size];
    for (int i = size - 1, j = 0; i >= 0; i--, j++)
    {
        arr2[j] = arr[i];
    }
    return arr2;
}


int main()
{
    MyQueue<int> MQ(5);
    MQ.EnQueue(10);
    MQ.EnQueue(20);
    MQ.EnQueue(30);
    MQ.EnQueue(40);
    MQ.EnQueue(50);

    cout << "Queue:" << endl;
    MQ.displayQueue();

    cout << MQ.DeQueue() << endl;
    cout << MQ.DeQueue() << endl;
    cout << "After DeQueue:" << endl;
    MQ.displayQueue();


    MyQueue<int>check(5);
    check.EnQueue(10);
    check.EnQueue(20);
    check.EnQueue(30);
    check.EnQueue(40);
    check.EnQueue(50);

    // -----------------------------------------------------TASK1----------------------------------------

    cout << "Before reverse\n";
    display<int>(check.arrAddress(), 5);

    int* revArr = reverseElements<int>(check.arrAddress(), 5);

    cout << "After reverse\n";

    display<int>(revArr, 5);
    delete[]revArr;

    //-----------------------------------------------------TASK2-----------------------------------------



    return 0;
}