#include <iostream>

using namespace std;
//4장 20page
#define NAME_LEN 20
#define SEX_LEN 10
#define JOB_LEN 20
#define CHAR_LEN 20

struct younghee{
    char name[NAME_LEN];
    char sex[SEX_LEN];
    char job[JOB_LEN];
    char character[CHAR_LEN];
    int age;
    void introduce(){cout << "hello!"<<endl;};
    void eat(char* food){cout << "i eat "<<food<<endl;};
    void sleep(){cout <<"sleep"<<endl;};
    void drive(char* dest){cout << "my destination is " << dest << endl;};
};

//4장 21page
class youngman{
public:
    char name[NAME_LEN];
    char sex[SEX_LEN];
    char job[JOB_LEN];
    char character[CHAR_LEN];
    int age;
    void introduce(){cout << "hello! i am " <<name <<" my sex is "<< sex << " my job is "<<job <<" my char is " << character << " my age is " << age <<endl;};
    void eat(char* food){cout << "i eat "<<food<<endl;};
    void sleep(){cout <<"sleep"<<endl;};
    void drive(char* dest){cout << "my destination is " << dest << endl;};
};

//4장 44page
// class Stack{
// public:
//     int m_size;
//     int m_top;
//     int *m_buffer;

//     void initialize(int size = 10);
//     void RemoveAll();
//     bool Push(int value);
//     bool Pop(int& value);
// };

// void Stack::initialize(int size){
//     m_size = size;
//     m_top = -1;
//     m_buffer = new int[m_size];
//     memset(m_buffer,0,sizeof(int)*m_size);
// }

// void Stack::RemoveAll(){
//     m_size = 0;
//     m_top = -1;
//     delete[] m_buffer;
//     m_buffer = NULL;
// }

// bool Stack::Push(int value){
//     if(m_top >= m_size -1) return false;
//     m_buffer[++m_top] = value;
//     return true;
// }

// bool Stack::Pop(int& value){
//     if(m_top <0) return false;
//     value = m_buffer[m_top--];
//     return true;
// }

//52page
class Stack{
private:
    int m_size;
    int m_top;
    int *m_buffer;

    void initialize(int size = 10);
    void RemoveAll();
    bool Push(int value);
    bool Pop(int& value);
public:
    int GetSize();
    int GetTop();
    bool Setsize(int size);
    bool GetData(int index, int& data);
};

int Stack::GetSize(){
    return m_size;
}

int Stack::GetTop(){
    return m_top;
}
void Stack::initialize(int size){
    m_size = size;
    m_top = -1;
    m_buffer = new int[m_size];
    memset(m_buffer,0,sizeof(int)*m_size);
}

void Stack::RemoveAll(){
    m_size = 0;
    m_top = -1;
    delete[] m_buffer;
    m_buffer = NULL;
}

bool Stack::Push(int value){
    if(m_top >= m_size -1) return false;
    m_buffer[++m_top] = value;
    return true;
}

bool Stack::Pop(int& value){
    if(m_top <0) return false;
    value = m_buffer[m_top--];
    return true;
}


class chulsoo{
public:
    void Eat(int SteakWeight);
    inline void Eatinline(int SteakWeight);
};

class human{
public:
    int count;
};

//57 page
class SelfRef{
private:
    int num;

public:
    SelfRef(int n) : num(n){
        cout << "object create" << endl;
    }

    SelfRef& Adder(int n){
        num+=n;
        return *this;
    }
    SelfRef& ShowTwoNumber(){
        cout << "(*this) reference number : " << num <<endl;
        return *this;
    }
};

//58 page
class X{
protected:
    int m_data;

public:
    bool isEquivalent(const X& objec);
    bool isSame(const X& objec);
    bool Set(int num);
};

bool X::isEquivalent(const X& objec){
    return (m_data == objec.m_data);
}

bool X::isSame(const X& objec){
    return (this == &objec);
}

bool X::Set(int num){
    m_data = num;
    return true;
}

//60 page
class chulsoo_this{
private:
    int age;
public:
    chulsoo_this(int age){
        this->age = age;
        cout << "chulsoo_this::chulsoo_this(age) create complete" << endl;
    }

    void setAge(int age){
        this->age = age;
    }

    void introduce(){
        cout << "chulsoo age is " << age << endl;
    }

    chulsoo_this* returnThisPointer(){
        return this;
    }

    chulsoo_this returnThis(){
        return *this;
    }

    chulsoo_this& returnThisRef(){
        return *this;
    }
};

int main()
{
    // chulsoo chul;
    // chul.Eat(500);
    // chul.Eatinline(500);

    //113 page
    // chulsoo chul;
    // chul.Eat(500);
    // chul.Eatinline(500);
    // [](int steakWeight){cout<<"eatLambda()::chulsoo eat " \
    //                            << steakWeight \
    //                            << "g steak"<<endl;}(1000);

    //117 page
    // human hu;
    // hu.count = 1;
    // for(int i= 0; i<10; i++){
    //     [=](int seatkweight)mutable{ cout << "Lambda human eat  no." << hu.count++ \
    //                                << " " <<seatkweight << "g steak" << endl;}(1000);
    // }
    // cout << hu.count;

    //118 page
    // human hu;
    // hu.count = 1;
    // for(int i= 0; i<10; i++){
    //     [&](int seatkweight){ cout << "Lambda human eat  no." << hu.count++ \
    //                                 << " " << seatkweight << "g steak" << endl;}(1000);
    // }
    // cout << hu.count;

    //120page
    // human hu;
    // hu.count = 1;
    // //return char
    // cout << [=](int steakWeight)mutable->char{cout << "lambda : human eat no." << hu.count++ << " "\
    //                                                     <<steakWeight <<"g steak"<<endl; return steakWeight;}(67)<<endl;
    // //return int
    // cout << [=](int steakWeight)mutable->int{cout << "lambda : human eat no." << ++hu.count << " "\
    //                                                     <<steakWeight <<"g steak"<<endl; return steakWeight;}(67)<<endl;
    // //auto return
    // cout << [=](int steakWeight)mutable{cout << "lambda : human eat no." << hu.count++ << " "\
    //                                                    <<steakWeight <<"g steak"<<endl; return steakWeight;}(67)<<endl;

    //4장 20page
    // younghee young = {"chulsoo", "man","writer","digigent",32};
    // young.drive("restaurant");
    // young.eat("steak");

    //21 page
    // youngman young = {"chulsoo", "man","writer","digigent",32};
    // young.drive("restaurant");
    // young.eat("steak");

    //38 page
    // youngman young = {"chulsoo", "man","writer","digigent",32};
    // char dest[20] = "restaurant";
    // char food[20] = "steak";
    // young.drive(dest);
    // young.eat(food);


    //48 page
    // Stack s1; //지역변수
    // s1.initialize(5);
    // Stack *p = new Stack; //delete로만 메모리 해제 가능
    // p->initialize(100);

    //49 page
    // Stack s1;
    // s1.initialize(5);
    // s1.m_top = 1;
    // int data;
    // s1.Pop(data);
    // delete[] s1.m_buffer;
    // s1.Push(123);


    //57 page
    // SelfRef obj(3);
    // SelfRef &ref = obj.Adder(2);
    // obj.ShowTwoNumber();
    // ref.ShowTwoNumber();
    // ref.Adder(1).ShowTwoNumber().Adder(2).ShowTwoNumber();

    //58 page
    // X obj1;
    // obj1.Set(100);

    // X obj2 = obj1;

    // if(obj1.isSame(obj2))
    //     cout << "obj1 == obj2" << endl;
    // else
    //     cout << "obj1 != obj2" << endl;

    // X &obj3 = obj1;
    // if(obj1.isSame(obj3))
    //     cout << "obj1 == obj3" << endl;
    // else
    //     cout << "obj1 != obj3" << endl;

    //60 page
    chulsoo_this chul_this1(32);
    cout << "chulsoo_this 1 object is introduce" <<endl;
    chul_this1.introduce();
    chul_this1.setAge(50);
    chul_this1.introduce();

    chulsoo_this chul_this2(32);
    cout << "chulsoo_this 2 Pointer is introduce" <<endl;
    chul_this2.returnThisPointer()->introduce();
    chul_this2.returnThisPointer()->setAge(50);
    chul_this2.returnThisPointer()->introduce();

    chulsoo_this chul_this3(32);
    cout << "introduce" <<endl;
    chul_this3.returnThis().introduce();
    chul_this3.returnThis().setAge(50);
    chul_this3.returnThis().introduce();

    chulsoo_this chul_this4(32);
    cout << "reference" <<endl;
    chul_this3.returnThisRef().introduce();
    chul_this3.returnThisRef().setAge(50);
    chul_this3.returnThisRef().introduce();

    system("pause");

    return 0;
}


void chulsoo::Eat(int SteakWeight){
    cout << "Eat()::chulsoo eat " << SteakWeight << "g steak" << endl;
}

inline void chulsoo::Eatinline(int SteakWeight){
    cout << "Inline : Eat()::chulsoo eat " << SteakWeight << "g steak" << endl;
}
