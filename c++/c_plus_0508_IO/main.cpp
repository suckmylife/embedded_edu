#include <iostream>
// #include "header1.h"
// #include "header2.h"
using namespace std;
//using namespace square;
//using std::cout;
// namespace first {
// int value = 1;
// }

// namespace second {
// int value =2;
// }

namespace BestComlmpl
{
    void SimpleFunc(void)
    {
        cout << "BestComlmpl func" << endl;
    }
}

namespace ProgComlmpl
{
    void SimpleFunc(void)
    {
        cout << "ProgComlmpl func" << endl;
    }
}


namespace AAA{
    namespace BBB {
        namespace CCC {
                int num1;
                int num2;
            }
    }
}

int f()
{
    return 20+30;
}

enum Days{SUN,MON,TUE,WED,THU,FRI,SAT};

int main()
{
    //52page
    // int val1;
    // cout << "first num input : ";
    // cin>>val1;

    // int val2;
    // cout << "second num input : ";
    // cin >> val2;

    // int result =val1+val2;
    // cout << "plus result : " << result <<endl;

    //54page
    // int val1, val2;
    // int result = 0;
    // cout << "two number input : ";
    // cin >> val1 >> val2;
    // if(val1>val2)
    // {
    //     for(int i=val2+1; i<val1; i++)
    //     {
    //         result += i;
    //     }
    // }
    // else
    // {
    //     for(int i=val1+1; i<val2; i++)
    //     {
    //         result += i;
    //         cout << i;
    //     }
    // }

    // cout << "two number between sum : " << result <<endl;

    //55page
    // char name[200];
    // char lang[200];

    // cout<< "what is your name :";
    // cin >> name;
    // cout << "what is your favorite programming language : ";
    // cin >> lang;

    // cout << "my name is " << name <<endl;
    // cout << "my favorite programming language is " << lang << endl;

    //78 page
    // int y = x;
    // cout << y;


    //83 page
    // int i = 0;
    // cin >> i; //오류남 당연히 - using std::cout만 했을때의 경우
    // cout << i;

    //86 page
    // cout << first::value << endl;
    // cout << second::value << endl;

    //90 page
    // BestComlmpl::SimpleFunc();
    // ProgComlmpl::SimpleFunc();

    //96 page
    // AAA::BBB::CCC::num1 = 20;
    // AAA::BBB::CCC::num2 = 30;
    // namespace ABC=AAA::BBB::CCC;
    // cout << ABC::num1 <<endl;
    // cout << ABC::num2 <<endl;

    //swap
    // int i = 3;
    // int j = 10;
    // int temp;

    // cout << "i :" << i << " j : " <<j<<endl;

    // temp = i;
    // i = j;
    // j = temp;
    // cout << "Swap!!"<<endl;
    // cout << "i :" << i << " j : " <<j<<endl;

    //46page
    // bool a = true;

    // cout << "a : "<<a <<endl;
    // a=false;
    // cout << "a : "<<a <<endl;
    // a= -98;
    // cout << "a : "<<a <<endl;
    // a=0;
    // cout << "a : "<<a <<endl;

    //68page
    // int num =10;
    // int &ref = num;
    // cout << "num = " << num << endl;
    // cout << "ref = " << ref << endl;

    // ref = 100;
    // cout << "ref = 100 , num = " << num << endl;
    // cout << "ref = 100 , ref = " << ref << endl;

    // cout << "&num = " << &num << endl;
    // cout << "&ref = " << &ref << endl;

    //73 page
    // int val1 = 100;
    // int &val2 = val1;
    // //int &val3 = 200; //선언조차 안됨
    // int &val4 = val2;
    // //int &val5;

    // val1 = val1*3;

    // cout << "val 1 = " << val1 << endl;
    // cout << "val 2 = " << val2 << endl;
    // cout << "val 4 = " << val4 << endl;

    //78 page
    // int num =12;
    // int *ptr =&num;
    // int **dptr = &ptr;

    // int &ref = num;
    // int *(&pref) = ptr;
    // int **(&dpref) = dptr;
    // ptr = ptr +1;
    // cout << "ref : " << ref << endl;
    // cout << "*pref : " << *pref << endl;
    // cout << "**dpref : " << **dpref << endl;

    //84 page
    // int n = 1234;
    // double d = 1.231;

    // auto autoval1 = d;
    // auto autoval2 = n;
    // auto autoval3 = n + d;
    // autoval3 = 1.234;

    // cout << "autoval1 : " << autoval1 << endl;
    // cout << "autoval2 : " << autoval2 << endl;
    // cout << "autoval3 : " << autoval3 << endl;

    //85 page
    double d = 1.414;
    decltype(f()) decval1 = d;
    decltype(d) decval2 = decval1;
    decltype((d)) decval3 = decval2;
    decval2 = 3.141592;

    cout << "&decval1 : " << &decval1 <<endl;
    cout << "&decval2 : " << &decval2 <<endl;
    cout << "&decval3 : " << &decval3 <<endl;

    cout << "decval1 : " << decval1 <<endl;
    cout << "decval2 : " << decval2 <<endl;
    cout << "decval3 : " << decval3 <<endl;

    //93 page
    // int i;
    // printf("input the date(0~6) :");
    // scanf("%d", &i);

    // if(i == SUN || i == SAT)
    //     printf("Thanks god it's holiday \n");
    // else
    //     printf("whoops, it's working day \n");

    //cout.flush();
    system("pause"); //process exited with code : 0. 의 순서를 맨 뒤로 가게 하는 법
    return 0;
}
