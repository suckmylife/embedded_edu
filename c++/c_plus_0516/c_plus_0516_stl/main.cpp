#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <deque>
#include <list>
using namespace std;

class Person{
private:
    int age;
    string name;
public:
    Person(const int a, const string& n):age(a),name(n){}
    int getAge(){return age;}
    string getName(){return name;}
};

class Multiplier{
    int first;
    int second;
public:
    Multiplier(int f, int s){
        first = f;
        second = s;
    }
    int getResult(){
        return first*second;
    }
};

int main()
{
    //18page
    // vector<int> v(6,1);
    // cout<< "v.capacity() : " << v.capacity() << "/v.size() : " << v.size() << endl;
    // for(auto i = 0; i<v.size(); i++){
    //     cout << v[i] <<" ";
    // }
    // cout<<endl << endl;
    // v.assign(4,3);
    // cout << "v.capacity() : " << v.capacity() << " / vsize() : " << v.size() << endl;
    // for(auto i =0; i< v.size(); i++){
    //     cout << v[i] << " " ;
    // }
    // cout<<endl << endl;
    // v[2] = 7;
    // for(vector<int>::iterator it = v.begin()+3; it!=v.end(); it++){
    //     *it = 9;
    // }
    // v.push_back(10);
    // v.push_back(20);
    // cout << "v.capacity() : " << v.capacity() << " /v.size() : " << v.size() << endl;
    // for(auto i = 0; i<v.size(); i++){
    //     cout << v[i] << " " ;
    // }
    // cout <<endl << endl;


    // v.push_back(30);
    // cout << "v.capacity() : " << v.capacity() << " /v.size() : " << v.size() << endl;
    // for(auto i = 0; i<v.size(); i++){
    //     cout << v[i] << " ";
    // }
    // cout << endl << endl;

    // v.resize(17);
    // cout << "v.capacity() : " << v.capacity() << " /v.size() : " << v.size() << endl;
    // for(auto i = 0; i<v.size(); i++){
    //     cout << v[i] << " ";
    // }
    // cout << endl << endl;

    //22page
    // //c++ 03
    // Person p1{20,"Tom"};
    // Person p2{19,"Jane"};

    // //c++ 유니폼 초기화
    // vector<Person>vec{
    //     {21,"Smith"},{11,"John"},{30,"Mary"},{45,"Ted"}
    // };
    // for_each(vec.begin(),vec.end(),[](Person p){
    //     cout << p.getAge() << " , " << p.getName() <<endl;
    // });

    //26 page
    // vector<Multiplier> multi;
    // for(int i =0; i<10; i++){
    //     Multiplier multiple = Multiplier(rand()%10,rand()%10);
    //     multi.push_back(multiple);
    // }
    // cout << " not sorting result : " << endl;
    // for(vector<Multiplier>::iterator iter = multi.begin();
    //      iter != multi.end(); iter++){
    //     cout << iter->getResult() <<endl;
    // }
    // sort(multi.begin(),multi.end(),[](Multiplier& m1, Multiplier& m2){
    //     return m1.getResult() < m2.getResult();
    // });
    // cout << "sorting result : " << endl;

    // for(vector<Multiplier>::iterator iter = multi.begin();
    //      iter != multi.end(); iter++){
    //     cout <<iter->getResult() <<endl;
    // }
    //29page
    // deque<int> dq;
    // dq.push_back(10);
    // dq.push_back(20);
    // dq.push_back(30);
    // cout<< "dq size : " << dq.size() <<endl;
    // cout << "dp : ";
    // for(auto i = 0; i<dq.size(); i++)
    //     cout<<dq[i] << " ";
    // cout <<endl;
    // for(auto i = 0; i<dq.size(); i++)
    //     cout<< "dq[" << i << "] address : " << &dq[i] <<endl;
    // cout <<endl;
    // deque<int> dq2;

    // dq2.push_back(100);
    // dq2.push_back(200);
    // dq2.push_back(300);
    // cout<< "dq2 size : " << dq2.size() <<endl;
    // cout << "dp2 : ";
    // for(auto i = 0; i<dq2.size(); i++)
    //     cout<<dq2[i] << " ";
    // cout <<endl;
    // for(auto i = 0; i<dq2.size(); i++)
    //     cout<< "dq2[" << i << "] address : " << &dq2[i] <<endl;
    // cout <<endl;

    // dq.push_back(40);
    // dq.push_back(50);
    // dq.push_back(60);
    // cout<< "dq.size : " << dq.size() <<endl;
    // cout << "dq : ";
    // for(auto i =0; i<dq.size(); i++){
    //     cout << dq[i] << " ";
    // }
    // cout << endl;

    // for(auto i =0; i<dq.size(); i++){
    //     cout << "dq[" <<i <<"] address : " << &dq[i] <<endl;
    // }
    // cout <<endl;

    // for(int i=70; i<2000; i+=10)
    //     dq.push_back(i);
    // cout << "dq.size : " << dq.size() <<endl;
    // cout << "dq : ";
    // for(auto i =0; i<dq.size(); i++){
    //     cout << "dq[" <<i <<"] address : " << &dq[i] <<endl;
    // }
    // cout <<endl;
    // cout << "dq[127] ("<<&dq[127]<<") : " <<dq[127]<<endl;
    // cout << "dq[128] ("<<&dq[128]<<") : " <<dq[128]<<endl;
    // deque<int>::iterator i = dq.begin()+127;
    // cout<<"*i("<<&(*i)<<"): " <<*i<<endl;
    // i++;
    // cout<<"*++i("<<&(*i)<<"): " << *i <<endl;
    // int* j = &dq[127];
    // cout<<j<<" : "<<*j<<endl;
    // j++;
    // cout << j << " : " << *j <<endl;

    //35page
    // list<int> it1;
    // list<int> it2;
    // it1.push_back(10);
    // it1.push_back(20);
    // it1.push_back(30);

    // it1.push_front(-10);
    // it1.push_front(-20);
    // it1.push_front(-30);

    // for(auto i = it1.begin(); i != it1.end(); i++){
    //     cout << *i << " ";
    // }
    // cout << endl;

    // for(auto i = 0; i<10; i++)
    //     it2.push_back(i);
    // for(auto i = it2.begin(); i != it2.end(); i++)
    //     cout<< *i << " ";
    // cout << endl;

    // for(auto p = it1.begin(); p != it1.end(); p++){
    //     if(*p == 10){
    //         it1.splice(p,it2);
    //         break;
    //     }
    // }

    // for(auto i = it1.begin(); i != it1.end(); i++)
    //     cout<<*i<<" ";
    // cout <<endl;


    system("pause");
    return 0;
}
