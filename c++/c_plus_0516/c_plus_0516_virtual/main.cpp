#include <iostream>
#include <vector>
using namespace std;
class BaseOne{
public:
    //void SimpleFuncOne() {cout << "BaseOne" << endl;}
    void SimpleFunc() {cout << "BaseOne" << endl;}
};

class BaseTwo{
public:
    //void SimpleFuncTwo(){cout << "BaseTwo"<<endl;}
    void SimpleFunc() {cout << "BaseTwo" << endl;}
};

class MultiDerived : public BaseOne, protected BaseTwo{
public:
    void ComplexFunc(){
        // SimpleFuncOne();
        // SimpleFuncTwo();
        BaseOne::SimpleFunc();
        BaseTwo::SimpleFunc();
    }
};
class Person{
public:
    Person(){
        cout<< "person creator call" << endl;
    }
    ~Person(){
        cout << "person destructor call" << endl;
    }
    virtual void write() = 0;
    void sleep(){
        cout << "sleep" << endl;
    }
};

//class Chulsoo : public Person{
class Chulsoo : public virtual Person{
public:
    Chulsoo():Person(){
        cout<< "Chulsoo creator call"<<endl;
    }
    ~Chulsoo(){
        cout<< "Chulsoo destructor call"<<endl;
    }
    void write(){
        cout << "Chulsoo wrtie book" << endl;
    }
};

//class Younghee : public Person{
class Younghee : public virtual Person{
public:
    Younghee():Person(){
        cout<< "Younghee creator call"<<endl;
    }
    ~Younghee(){
        cout<< "Younghee destructor call"<<endl;
    }
    void write(){
        cout << "Younghee wrtie book" << endl;
    }
};

class katy : public Chulsoo, public Younghee{
public:
    katy():Chulsoo(),Younghee(){
        cout<< "katy creator call"<<endl;
    }
    ~katy(){
        cout<< "katy destructor call"<<endl;
    }
    void write(){
        Chulsoo::write();
    }
};

template<typename T>
T const add(T const& a, T const& b){
    return a+b;
}

template<class T1, class T2>
void ShowData(double num){
    cout << (T1)num << " , " << (T2)num << endl;
}

template<typename T, typename R>
R MaxValue(const T num1, const R num2){
    if(num1> num2){
        return num1;
    }
    else
    {
        return num2;
    }
}
template<typename R, typename T, typename U>
R const add(T const& a, U const& b){
    return a+b;
}

template < typename T>
T Max(T a, T b){
    return a>b?a:b;
}

template<>
char* Max(char* a, char* b){
    cout << "char max "<<endl;
    return strlen(a) > strlen(b) ? a : b;
}

template <>
const char* Max(const char* a, const char* b){
    cout << "const char max" << endl;
    return strcmp(a,b) > 0 ? a:b;
}

template <>
char* const add<char*>(char* const& a, char* const& b){
    cout << "specialized" << endl;
    return strcat(a,b);
}

// template<typename T>
// class MyArray{
// private:
//     vector<T>list;
// public:
//     void add_list(T const&);
//     void delete_last_list(void);
//     void show_list(void);
// };

//template<typename T,int init /*= 3*/>
template<typename T>
class MyArray{
private:
    vector<T>list;
public:
    // MyArray(){
    //     for(int i= 0; i<init;++i){
    //         list.push_back(i);
    //     }
    // }
    void add_list(T const&);
    void delete_last_list(void);
    void show_list(void);
};

// template <typename T, int init>
// void MyArray<T,init>::add_list(T const& element){
//     list.push_back(element);
// }

// template<typename T, int init>
// void MyArray<T,init>::delete_last_list(void){
//     list.pop_back();
// }
// template<typename T, int init>
// void MyArray<T,init>::show_list(void){
//     cout << "show list"<<endl;
//     for(typename vector<T>::iterator i = list.begin(); i!=list.end(); ++i){
//         cout << *i << endl;
//     }
// }


template<typename T>
void MyArray<T>::add_list(T const& element){
    list.push_back(element);
}

template<typename T>
void MyArray<T>::delete_last_list(void){
    list.pop_back();
}
template<typename T>
void MyArray<T>::show_list(void){
    cout << "MyArray list look up" << endl;
    for(typename vector<T>::iterator i = list.begin(); i!=list.end(); ++i){
        cout << *i << endl;
    }
}

template<>
class MyArray<int>{
private:
    vector<int>list;
public:
    void add_list(int const&);
    void delete_last_list(void);
    void show_list(void);
};

void MyArray<int>::add_list(int const& element){
    list.push_back(element);
}

void MyArray<int>::delete_last_list(void){
    list.pop_back();
}

void MyArray<int>::show_list(void){
    cout << "blank template list look up" << endl;
    for(typename vector<int>::iterator i = list.begin(); i!=list.end(); ++i){
        cout << *i << endl;
    }
}

int main()
{
    // MultiDerived mdr;
    // mdr.ComplexFunc();
    //161page
    // katy ka;
    // ka.write();

    //163page
    // MultiDerived mdr;
    // mdr.ComplexFunc();

    //168 page
    // katy ka;
    // ka.write();
    // ka.sleep();

    //9장
    //14 page
    // double i = 5.1;
    // double j = 10.2;

    // int a = 5;
    // int b = 10;

    // cout << i << " + " << j << " = " << add(i,j) << endl;
    // cout << a << " + " << b << " = " << add(a,b) << endl;

    //19page
    // ShowData<char, int>(65);
    // ShowData<char, int>(67);
    // ShowData<char, double>(68.9);
    // ShowData<short, double>(69.2);
    // ShowData<short, double>(70.4);

    //20page
    // cout << "int contrast result : " << MaxValue(3,5) << endl;
    // cout << "double contrast result : " << MaxValue(9.1,3.6) << endl;

    //21 page
    // double i = 5.1;
    // int a =5;
    // cout << i << " + " << a << " = " << add(i,a) << endl;

    //23page
    // cout << Max(11,15) << endl;
    // cout << Max('T','Q') << endl;
    // cout << Max(3.5,7.5) << endl;
    // cout << Max("simple","Best") << endl;

    // char str1[] = "Simple";
    // char str2[] = "Best";

    // cout << Max(str1,str2) << endl;

    //25page
    // int i = 5;
    // int j = 10;
    // double a = 5.1;
    // double b = 10.2;

    // char m[20] = "Hello";
    // char n[20] = "World!";

    // cout << i << " + " << j << " = " << add(i,j) << endl;
    // cout << a << " + " << a << " = " << add(a,b) << endl;
    // cout << add<char*>(m,n) << endl;

    //40page
    // MyArray<int> array1;
    // array1.add_list(1);
    // array1.add_list(2);
    // array1.add_list(3);
    // array1.add_list(4);
    // array1.add_list(5);
    // array1.show_list();

    // array1.delete_last_list();
    // array1.delete_last_list();
    // array1.show_list();

    // MyArray<double> array2;
    // array2.add_list(1.1);
    // array2.add_list(2.1);
    // array2.add_list(3.1);
    // array2.add_list(4.1);
    // array2.add_list(5.1);
    // array2.show_list();

    // array2.delete_last_list();
    // array2.delete_last_list();
    // array2.show_list();

    //48page
    // MyArray<int,3> array1;
    // array1.add_list(1);
    // array1.add_list(2);
    // array1.add_list(3);
    // array1.add_list(4);
    // array1.add_list(5);
    // array1.show_list();

    // array1.delete_last_list();
    // array1.delete_last_list();
    // array1.show_list();

    // MyArray<double,4> array2;
    // array2.add_list(1.1);
    // array2.add_list(2.1);
    // array2.add_list(3.1);
    // array2.add_list(4.1);
    // array2.add_list(5.1);
    // array2.show_list();

    // array2.delete_last_list();
    // array2.delete_last_list();
    // array2.show_list();

    //54page
    // MyArray<int> array1;
    // array1.add_list(1);
    // array1.add_list(2);
    // array1.add_list(3);
    // array1.add_list(4);
    // array1.add_list(5);
    // array1.show_list();

    // array1.delete_last_list();
    // array1.delete_last_list();
    // array1.show_list();

    // MyArray<double> array2;
    // array2.add_list(1.1);
    // array2.add_list(2.1);
    // array2.add_list(3.1);
    // array2.add_list(4.1);
    // array2.add_list(5.1);
    // array2.show_list();

    // array2.delete_last_list();
    // array2.delete_last_list();
    // array2.show_list();




    system("pause");
    return 0;
}
