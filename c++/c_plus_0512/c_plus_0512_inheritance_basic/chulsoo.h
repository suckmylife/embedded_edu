#ifndef CHULSOO_H
#define CHULSOO_H
#include <iostream>
using namespace  std;
#define NAME_LEN 20
#define SEX_LEN 10
#define JOB_LEN 20
#define CHAR_LEN 20

class Chulsoo
{
private:
    char name[NAME_LEN];
    char sex[SEX_LEN];
    char job[JOB_LEN];
    char character[CHAR_LEN];
    int age;
    bool marriageStatus;
public:
    void introduce();
    void eat(const char* food);
    void sleep();
    void drive(const char* dest);
    void write();
    void read();
    // void constructor(const char* name,const char* sex,const char* job,const char* character,
    //                  int age, bool marriageStatus);
    Chulsoo(const char* name,const char* sex,const char* job,const char* character,
                     int age, bool marriageStatus);
    Chulsoo(){
        cout << "Chulsoo creator complete" <<endl;
    }
};

#endif // CHULSOO_H
