//
//  Time.cpp
//  Time
//
//  Created by Jersey on 2018/10/2.
//  Copyright © 2018年 Jersey. All rights reserved.
//

#include "Time.hpp"
#include<iostream>
using namespace std;

void Ctime::setHour(int hour)
{
    m_nHour = hour;
}

void Ctime::setMinute(int minute)
{
    m_nMinute = minute;
}

void Ctime::setSecond(int second)
{
    m_nSecond = second;
}

int Ctime::getHour()
{
    return m_nHour;
}

int Ctime::getMinute()
{
    return m_nMinute;
}

int Ctime::getSecond()
{
    return m_nSecond;
}

int Ctime::tick()
{
    m_nSecond = m_nSecond + 1;
    if (m_nSecond == 60)
    {
        if(m_nMinute == 59)
        {
            if(m_nHour == 23)
            {
                cout<<"00:00:00"<<endl;
            }
        }
        else
        {
            cout<<m_nHour<<":"<<m_nMinute+1<<":00"<<endl;
        }
    }
    else
    {
        cout<<m_nHour<<":"<<m_nMinute<<":"<<m_nSecond<<endl;
    }
    return 0;
}

