#include "my_Time.h"

Time::Time(const int hour, const int min, const int sec)
    : hour(HOUR_SEC), min(MIN_SEC), sec(1)
{

}

void Time::SetHour(const int hour){
    this->hour = hour;
}

void Time::SetMin(const int min){
    this->min = min;
}

void Time::SetSec(const int sec){
    this->sec = sec;
}

int Time::GetHour(){
    return this->hour;
}

int Time::GetMin(){
    return this->min;
}

int Time::GetSec(){
    return this->sec;
}

string Time::ShowTime(){
    return string(sizeof(hour),hour);
}

int Time::CalSecond(){
    t_sec = hour*60 + min*60 + sec;
    return t_sec;
}

bool Time::operator<=(Time timeObj){
    this->CalSecond();
    timeObj.CalSecond();
    if(this->t_sec <= timeObj.t_sec)
        return true;
    else
        return false;
}

bool Time::operator>=(Time timeObj){
    this->CalSecond();
    timeObj.CalSecond();
    if(this->t_sec >= timeObj.t_sec)
        return true;
    else
        return false;
}

