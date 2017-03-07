//
//  main.cpp
//  Testing
//
//  Created by Steven on 2017/3/6.
//  Copyright © 2017年 Steven. All rights reserved.
//
//  本專案目的有二
//  1. 練習STL庫各類別之使用
//  2. 練習使用xcode做版本控制


#include <iostream>
#include <map>
#include <vector>

#include "print.h"
#include "calculate.h"

using namespace std;


template <class T>
float fun(vector<T > v)
{
    int ans=0;
    for (int i=0;i<v.size();i++)
    {
        ans+=v[i];
    }
    return (int)ans/v.size();
}



int main(int argc, const char * argv[]) {
    // insert code here...
    
    map <int, string > maptable;
    
    
    return 0;
}

