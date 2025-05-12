#include "younghee.h"

void Younghee::introduce(){
    cout<< "name       : " << name << endl;
    cout << "sex       : " << sex <<endl;
    cout << "job       : " << job <<endl;
    cout << "character : " << character <<endl;
    cout << "age       : " << age <<endl;
    cout << "marriageStatus : " << marriageStatus <<endl;
}

void Younghee::eat(const char* food){
    cout << "Younghee eat " << food << endl;
}

void Younghee::sleep(){
    cout << "Younghee sleep " <<endl;
}

void Younghee::drive(const char* dest){
    cout << "Younghee drive to " << dest << endl;
}

void Younghee::write(){
    cout << "Younghee write book " << endl;
}

void Younghee::read(){
    cout << "Younghee read a book " << endl;
}

Younghee::Younghee(const char* name,const char* sex,const char* job,const char* character,
                          int age, bool marriageStatus)
{
    strcpy_s(this->name,name);
    strcpy_s(this->sex,sex);
    strcpy_s(this->job,job);
    strcpy_s(this->character, character);
    this->age = age;
    this->marriageStatus = marriageStatus;
}

