#include <iostream>
#include<queue>
#include<stack>
#include<map>
#include<string>
#include<set>
#include<unordered_map>
#include<unordered_set>
#include<list>
#include <algorithm>
#include<exception>
using namespace std;

void inputName(char * name){
    cout<< "input name : ";
    cin>> name;
    if(strlen(name)<=2)
        throw name;
}

int inputAge(){
    int age;
    cout << "input age : ";
    cin>>age;
    if(age <1)
        throw age;
    return age;
}

void handler(){
    cout << "In handler"<<endl;
}

void f1(void) noexcept(false){
    cout << "About to throw 1"<<endl;
    if(1)
        throw 1;
}

void f2(void) noexcept(false){
    try{
        f1();
    }
    catch(...){
        handler();
        throw;
    }
}

void MyErrorHandler(){
    cout << "it is except exception"<<endl;
    exit(-1);
}

// class MyException{
//     int myValue;
// public:
//     MyException(int value){
//         myValue = value;
//     }
//     void exceptionResult(){
//         if(myValue <10){
//             cout << "input more than 10" <<endl;
//         }else if(myValue >20){
//             cout<< "input less than 20" <<endl;
//         }else if(myValue%7 !=0){
//             cout<<"input 7 friend"<<endl;
//         }
//     }
// };

class MyException : public exception{
    int myValue;
public:
    MyException(int value){
        myValue = value;
    }
    virtual const char *what() const throw(){
        if(myValue <10){
            return "input more than 10";
        }else if(myValue >20){
            return "input less than 20";
        }else if(myValue%7 !=0){
            return "input 7 friend";
        }
        return "wrong answer";
    }
};

int getMultiple(){
    int value;
    cout<< " 10~20 7 friend input : ";
    cin >> value;
    if(value<10|value>20|value%7!=0){
         throw MyException(value);
    }
    return value;
}
int getValue(){
    int value;
    value = getMultiple();
    return value;
}

int main()
{

    //stl_container 46page
    // queue<int> q;
    // q.push(10);
    // q.push(20);
    // q.push(30);
    // q.push(40);

    // for(int i = 0; i<q.size(); ++i){
    //     cout << q.front() << " ";
    //     q.pop();
    // }
    // cout <<endl;

    //47 page
    // priority_queue<int> pq;
    // priority_queue<int,vector<int>,greater<int>> pq2;
    // priority_queue<int,deque<int>,greater<int>> pq3;
    // pq.push(10);
    // pq.push(20);
    // pq.push(30);
    // pq.push(40);
    // pq.push(10);
    // pq.push(20);

    // cout << "pq top  --> pq2 push" <<endl;
    // while(!pq.empty()){
    //     cout<<pq.top() << " ";
    //     pq2.push((pq.top()));
    //     pq.pop();
    // }
    // cout << endl<<endl;
    // cout << "pq2 top  --> pq3 push" <<endl;
    // while(!pq2.empty()){
    //     cout << pq2.top()<< " ";
    //     pq3.push(pq2.top());
    //     pq2.pop();
    // }
    // cout <<endl << endl;
    // cout << "pq3 top  --> X" <<endl;
    // while(!pq3.empty()){
    //     cout << pq3.top() << " ";
    //     pq3.pop();
    // }
    // cout << endl;

    //50page
    // stack<int> st;
    // st.push(10);
    // st.push(20);
    // st.push(30);
    // st.push(40);

    // while(!st.empty()){
    //     cout << st.top() << " ";
    //     st.pop();
    // }

    //53page
    // map<string,int> m;
    // m.insert(make_pair("A",10));
    // m.insert(make_pair("B",20));
    // m.insert(make_pair("C",30));
    // m.insert(make_pair("D",40));
    // m.insert(make_pair("E",50));
    // m["F"]=100;
    // for(auto i = m.begin(); i!=m.end(); ++i){
    //     cout << "["<<i->first << " " << i->second << "]";
    // }
    // cout << endl;
    // auto i = m.find("A");
    // cout <<i->first << " : " << i->second << endl;
    // m.insert(make_pair("E",150));

    //57 page
    // set<int> s;
    // pair<set<int>::iterator,bool> pr;
    // s.insert(10);
    // s.insert(30);
    // s.insert(60);
    // s.insert(20);
    // s.insert(50);
    // pr = s.insert(40);

    // for(auto i = s.begin(); i != s.end(); i++){
    //     cout << *i << " ";
    // }
    // cout<< endl;
    // s.insert(pr.first,55);
    // for(auto i = s.begin(); i != s.end(); i++){
    //     cout << *i << " ";
    // }
    // cout << endl;
    // auto f = s.find(55);
    // if(f != s.end()){
    //     cout << *f << endl;
    // }

    //62 page
    // unordered_map<string, int> um;
    // um.insert({"A",100});
    // um.insert(make_pair("B",200));
    // um.insert({
    //    {"C",1000},
    //    {"D",2000}
    // });

    // for(auto i = um.begin(); i!=um.end(); i++){
    //     cout << "["<<i->first << " " << i->second << "]";
    // }
    // cout << endl;
    // cout<<"found B value" << endl;
    // auto bc = um.bucket("B");
    // for(auto i = um.begin(bc); i!=um.end(bc); ++i){
    //     cout << i->first << " : " << i->second;
    // }
    // cout << endl;

    //64page
    // unordered_multiset<string> cities{
    //     "Braun" , "Hanover", "Frankfurt","New York","Chicago", "Toronto"
    // };
    // for(const auto& elem : cities){
    //     cout<<elem << " ";
    // }
    // cout << endl;
    // cities.insert({"London","Munich","Hanover"});
    // for(const auto& elem : cities){
    //     cout << elem << " ";
    // }
    // cout << endl;

    //88 page
    // int arr[10] = {97,44,23,55,61,12,3,75,27,84};
    // cout<< "sorting array : ";
    // sort(arr,arr+10);
    // for(int i = 0; i<10; i++){
    //     cout << arr[i] << " ";
    // }
    // cout<< endl;
    // vector<string> str;
    // string s;

    // int i = 0;
    // while(i<10){
    //     cout << "input char : ";
    //     cin>>s;
    //     str.push_back(s);
    //     i++;
    // }
    // sort(str.begin(),str.end());
    // cout<<"sorting char : ";
    // for(vector<string>::iterator it = str.begin(); it!=str.end(); it++){
    //     cout<<*it<< " ";
    // }
    // cout<<endl;

    //11장 7page 14page
    // int a,b;
    // int result;
    // cout<< "a/b -> input a, b"<<endl;
    // cout<< "a b : ";
    // cin>>a>>b;
    // try{
    //     if(a==0 || b==0)
    //         throw b;
    //     cout<< "anw : " << a/b <<endl;
    //     cout<<"rest : " << a%b <<endl;
    // }
    // catch(int expn){
    //     cout << "a or b is cannot ->" << expn<<endl;
    //     cout << "restart program please" << endl;
    // }
    // cout<<"end of main"<<endl;

    //cout<<"a/b result : " << result <<endl;

    //24 page
    // char name[512];
    // int age;
    // try{
    //     inputName(name);
    //     age=inputAge();
    //     cout<<"My name is "<<name << endl;
    //     cout<<"My age is "<<age <<endl;
    // }
    // catch(char *e){
    //     cout<< "exception name : " << e <<endl;
    // }
    // catch(int e){
    //     cout << "exception age : " << e <<endl;
    // }

    //28page
    // //f1();
    // try{
    //     f2();
    // }
    // catch(...){
    //     cout << "Caught exception from f2"<<endl;
    // }

    //31page
    // set_terminate(MyErrorHandler);
    // try{
    //     throw 1;
    // }
    // catch(char* const ex){
    // }

    //42 page
    // int value;
    // try{
    //     cout<<"10~20 input 7 friend : ";
    //     cin >> value;
    //     if(value<10|value>20|value%7!=0){
    //         throw MyException(value);
    //     }
    //     cout<<"correct! 10~20 7friend is " << value<<endl;
    // }catch(MyException &e){
    //     e.exceptionResult();
    // }

    //46 page
    // int value;
    // try{
    //     cout<<"10~20 input 7 friend : ";
    //     cin >> value;
    //     if(value<10|value>20|value%7!=0){
    //         throw MyException(value);
    //     }
    //     cout<<"correct! 10~20 7friend is " << value<<endl;
    // }catch(exception &e){
    //     cout<<e.what() <<endl;
    // }

    //51 page
    // int value;
    // try{
    //     value = getValue();
    //     cout<<"correct! 10~20 7friend is " << value<<endl;
    // }
    // catch(exception &e){
    //     cout<<e.what()<<endl;
    // }

    system("pause");
    return 0;
}
