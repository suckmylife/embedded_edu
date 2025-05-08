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

    //cout.flush();
    system("pause"); //process exited with code : 0. 의 순서를 맨 뒤로 가게 하는 법
    return 0;
}
