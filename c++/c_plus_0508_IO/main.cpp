#include <iostream>

using namespace std;

int main()
{
    int val1;
    cout << "first num input : ";
    cin>>val1;

    int val2;
    cout << "second num input : ";
    cin >> val2;

    int result =val1+val2;
    cout << "plus result : " << result <<endl;


    system("pause"); //process exited with code : 0. 의 순서를 맨 뒤로 가게 하는 법
    return 0;
}
