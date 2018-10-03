//
//  Time.hpp
//  Time
//
//  Created by Jersey on 2018/10/2.
//  Copyright © 2018年 Jersey. All rights reserved.
//

#ifndef Time_hpp
#define Time_hpp

#include <stdio.h>

class Ctime
{
public:
    void setHour(int hour);
    void setMinute(int minute);
    void setSecond(int second);
    
    int getHour();
    int getMinute();
    int getSecond();
    int tick();
private:
    int m_nHour;
    int m_nMinute;
    int m_nSecond;
};

#endif /* Time_hpp */
