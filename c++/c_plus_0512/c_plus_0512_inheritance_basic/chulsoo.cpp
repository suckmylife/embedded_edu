#include "chulsoo.h"

void Chulsoo::introduce(){
    cout<< "name       : " << name << endl;
    cout << "sex       : " << sex <<endl;
    cout << "job       : " << job <<endl;
    cout << "character : " << character <<endl;
    cout << "age       : " << age <<endl;
    cout << "marriageStatus : " << marriageStatus <<endl;
}

void Chulsoo::eat(const char* food){
    cout << "chulsoo eat " << food << endl;
}

void Chulsoo::sleep(){
    cout << "chulsoo sleep " <<endl;
}

void Chulsoo::drive(const char* dest){
    cout << "chulsoo drive to " << dest << endl;
}

void Chulsoo::write(){
    cout << "chulsoo write book " << endl;
}

void Chulsoo::read(){
    cout << "chulsoo read a book " << endl;
}

Chulsoo::Chulsoo(const char* name,const char* sex,const char* job,const char* character,
                          int age, bool marriageStatus)
{
    strcpy_s(this->name,name);
    strcpy_s(this->sex,sex);
    strcpy_s(this->job,job);
    strcpy_s(this->character, character);
    this->age = age;
    this->marriageStatus = marriageStatus;
}
