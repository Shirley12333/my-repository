//
// Created by Shirley on 2022-10-19.
//
#include <iostream>
#include "Array.h"
void Array::set_data()
{
    n = 10;
    for(int i=0;i<10;i++)
    {
        cin>>arr[i];
    }
}
void Array::Max()
{
    max=0;
    for(int i=0;i<10;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
}
void Array::Min()
{
    min=100;
    for(int i=0;i<10;i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
        }
    }
}
void Array::sum()
{
    Sum=0;
    for(int i=0;i<10;i++)
    {
        Sum=Sum+arr[i];
    }
}
void Array::average()
{
    ave=Sum/10;
}
void Array::data_display()
{
    cout<<"the array is:"<<endl;
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i]<<"\t";
    }
    printf("\n");
    cout << "the dimension is" << endl;
    cout<<"the max is:"<<max<<endl;
    cout<<"the min is:"<<min<<endl;
    cout<<"the average is:"<<ave<<endl;
    cout<<"the sum is:"<<Sum<<endl;
}