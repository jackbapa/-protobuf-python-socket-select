//
// Created by wy on 2020/6/28.
//
#include "comu.h"
#include "com.pb.h"
#include <iostream>
#include <strstream>
#include <sstream>

using namespace std;


char* mycomu::test() {



    cout<<"be_gin";
    demo::comu c;
//    设置属性mmm为字符串
    c.set_mmm("wy");
//    序列化为char *
    int buf_size = c.ByteSizeLong();
    void *buf_p = malloc(buf_size);
    c.SerializeToArray(buf_p,buf_size);
    return static_cast<char *>(buf_p);





};


