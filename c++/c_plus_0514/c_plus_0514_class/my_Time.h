#ifndef MY_TIME_H
#define MY_TIME_H
#include <iostream>
#include <string>
using namespace std;
#define HOUR_SEC 3600
#define MIN_SEC 60

class Time
{
private:
    // int sec = 3600;
    // int min = 60;
    int hour, min, sec;
    int t_sec;

public:
    Time():sec(0),hour(0),min(0){};

    Time(const int hour, const int min, const int sec);
    void SetHour(const int hour);
    void SetMin(const int min);
    void SetSec(const int sec);
    int CalSecond();
    int GetHour();
    int GetMin();
    int GetSec();
    string ShowTime();
    bool operator<=(Time timeObj);
    bool operator>=(Time timeObj);
    //매개변수없이 초기화


    // Time(int s, int m):sec(s),min(m){}
    // int CalSecond(int t){
    //    return t*60;
    // }
    // int getSec(){
    //     return sec;
    // }
    // int getMin(){
    //     return min;
    // }
    // void setSec(int s){
    //     this->sec = s;
    // }
    // void setMin(int m){
    //     this->min = m;
    // }

};

#endif // MY_TIME_H
