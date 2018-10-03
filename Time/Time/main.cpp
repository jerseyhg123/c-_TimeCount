//
//  main.cpp
//  Time
//
//  Created by Jersey on 2018/10/2.
//  Copyright © 2018年 Jersey. All rights reserved.
//

#include <iostream>
#include"Time.hpp"
using namespace std;

int main()
{
    Ctime time;
    time.setHour(10);
    time.setMinute(40);
    time.setSecond(59);
    time.tick();
    return 0;
}
