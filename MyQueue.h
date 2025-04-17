//
//  main.cpp
//
//
//  Created by Moosa's Macbook Pro on 15/05/2025.
//  Copyright © 2025 Moosa's Macbook Pro. All rights reserved.
//
#pragma once

#include <iostream>
using namespace std;



template <class T>
class MyQueue
{
    T *arr;
    int front;
    int rear;
    int count;
    int maxsize;

public:
    MyQueue() = default;
    MyQueue(int ms)
    {
        maxsize = ms;
        arr = new T[maxsize];
        front = 0;
        rear = 0;
        count = 0;
    }
    void EnQueue(T num)
    {
        if (!isFull())
        {
            arr[rear] = num;
            rear++;
            count++;
        }
        else
        {
            cout << "Queue is Full.." << endl;
        }
    }
    T DeQueue()
    {
        if (!isEmpty())
        {
            count--;
            return arr[front++];
        }
        else
        {
            cout << "Queue is Empty.." << endl;
        }
    }
    int size()
    {
        return count;
    }
    bool isFull()
    {
        if (count == maxsize)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool isEmpty()
    {
        if (count == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void displayQueue()
    {
        for (int i = front; i < rear; i++)
        {
            cout << arr[i] << endl;
        }
    }
    T* arrAddress()
    {
        return arr;
    }

    //--------------------------------------------TASK2------------------------------------------

    void simulateTicketCounter()
    {
        if (!isEmpty())
        {
            T* arr2 = new T[this->count];
            for (int i = front; i < this->count; i++)
            {
                arr2[i] = this->arr[i];
            }

            int counter = 0;
            for (int i = front; i < this->count; i++)
            {
                counter++;
                if (counter % 4 == 0)
                {
                    T VIP = arr[i];

                }
            }
        }
    }


    ~MyQueue()
    {
        delete[] arr;
    }
};
