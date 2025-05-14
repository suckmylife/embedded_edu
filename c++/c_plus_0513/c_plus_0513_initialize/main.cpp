#include <iostream>
#include "../../../../c_plus_0512/c_plus_0512_inheritance_basic/chulsoo.h"
#include "../../../../c_plus_0512/c_plus_0512_inheritance_basic/younghee.h"
using namespace std;


class DailyLife{
private:
    Chulsoo chulsoo;
    Younghee younghee;

public:
    DailyLife(const char* chulsooname, const char* chulsoosex, const char* chulsoojob,\
              const char* chulsoomood, int chulsooage, bool chulsoomarriage,\
              const char* youngheename, const char* youngheesex, const char* youngheejob,\
              const char* youngheemood, int youngheeage, bool youngheemarriage)
        :chulsoo(chulsooname,chulsoosex,chulsoojob,chulsoomood,chulsooage,chulsoomarriage),
        younghee(youngheename,youngheesex,youngheejob,youngheemood,youngheeage,youngheemarriage)
    {
        cout<< "creator complete" << endl;
    }
    void run(){
        chulsoo.drive("America");
        chulsoo.eat("sushi");
        younghee.eat("kimbab");
        chulsoo.drive("seoul");
        younghee.sleep();
        chulsoo.write();
        chulsoo.read();
        chulsoo.sleep();

        cout<<endl;
        chulsoo.introduce();

        cout<<endl;
        younghee.introduce();
    }
};

class Person{
private:
    char *name;
    int age;
public:
    Person(const char *anyname, int anyage){
        int len = strlen(anyname)+1; //널 문자때문에 +1 해줌
        name = new char[len];
        strcpy(name, anyname);
        age = anyage;
    }

    void ShowPersonInfo() const{
        cout << "name : " << name <<endl;
        cout << "age : " << age << endl;
    }
    ~Person(){
        delete []name;
        cout << "called destructor " << endl;
    }
};

class MyProfile{
private:
    string name;
public:
    MyProfile(string n){
        name.append(n);
    }
    void SetName(string n){
        name.clear();
        name.append(n);
    }
    void getName(){
        cout << "name : " << name <<endl;
    }
};

class SoSimple{
private:
    int num1;
    int num2;
public:
    SoSimple(int n1, int n2) : num1(n1), num2(n2){

    }
    SoSimple(SoSimple &copy):num1(copy.num1),num2(copy.num2){
        cout << "Called SoSimple copy" <<endl;
    }
    void ShowSimpleData(){
        cout << num1 << endl;
        cout << num2 << endl;
    }
    SoSimple& AddNum(int n){
        num1 += n;
        return *this;
    }
};

class Temporary{
private:
    int num;
public:
    Temporary(int n) : num(n){
        cout << "create obj : " << num << endl;
    }
    ~Temporary(){
        cout << "destroy obj : " << num << endl;
    }
    void ShowTempInfo(){
        cout << "My num is " << num <<endl;
    }
};

void SimpleFunc(SoSimple ob){
    ob.ShowSimpleData();
}


SoSimple SimpleFunc_case2(SoSimple ob){
    cout << "I am SimpleFunc case 2 before return" << endl;
    return ob;
}

class Shallowcpy{
private:
    int *ptrNum;
    int zipcode;
public:
    Shallowcpy(int n, int zc){
        ptrNum = new int;
        *ptrNum = n;
        zipcode = zc;
    }
    void setShallow(int n, int zc){
        *ptrNum = n;
        zipcode = zc;
    }
    void getShallow(){
        cout << "address ptrNum  : " << ptrNum <<endl;
        cout << "pointer *ptrNum : " << *ptrNum << endl;
        cout << "zipcode : " << zipcode << endl;
        cout << endl;
    }
    ~Shallowcpy(){
        delete ptrNum;
        cout << "Destuctor" << endl;
    }
};

void print(int &x){
    cout << " int &x" << endl;
}

void print(const int &x){
    cout << "const int &x" << endl;
}

void print(int &&x){
    cout << "int &&x" << endl;
}

class myclass{
public:
    myclass(){}
    myclass(string str) : m_str(str){}
    void print(){
        cout << "str : " << m_str <<endl;
    }
private:
    string m_str;
};

int Add(int x, int y){
    return x+y;
}

int &inc(int &x){
    return ++x;
}

class Integer{
public:
    int *val;
    Integer() = default;
    Integer(int val){
        this->val = new int(val);
    }
    ~Integer(){
        delete val;
    }
};
Integer Add(const Integer& a, const Integer& b){
    Integer tmp; //defualt
    //tmp.val = new int(a.val + b.val); //메모리 해제 되지 말라고 재할당
    return tmp;
}

class MyArray{
private:
    int num;
public:
    MyArray(int n){
        cout << "call creator" << endl; //생성자
        num = n;
    }
    MyArray(const MyArray& copy){
        cout << "call copy creator" << endl; //복사생성자
        num = copy.num;
    }
    MyArray(MyArray&& move){
        cout << "call move creator" << endl; //이동생성자
        num = move.num;
        move.num = 0;
    }
    MyArray operator = (MyArray&& move){
        cout << "call move operator" << endl;//이동대입생성자
        swap(num,move.num);
        return *this;
    }
    int getNum(){
        return num;
    }
};

MyArray CreateMyArray(){
    return MyArray(100);
}

int main()
{
    // DailyLife dailylife("chulsoo","male","writer","diligent",32,true,\
    //                     "younghee","female","housewife","impatient",50,true);
    // dailylife.run();

    //139page
    // Person p("katy",12);
    // p.ShowPersonInfo();

    //5장 6page
    // MyProfile profile1("allen");
    // profile1.getName();

    // MyProfile* ptrProfile1 = new MyProfile("andrew");
    // ptrProfile1->getName();
    // delete ptrProfile1;


    //7 page
    // SoSimple sim1(15,20);
    // SoSimple sim2 = sim1;
    // sim2.ShowSimpleData();

    //9 page
    // SoSimple sim1(15,20);
    // cout<< "before creator" << endl;
    // SoSimple sim2 = sim1;
    // cout<< "after creator" << endl;
    // sim2.ShowSimpleData();

    //18 page copy creator case1
    // SoSimple obj(10,20);
    // SimpleFunc(obj);
    // cout << "after call func " << endl;

    //19 page copy creator case 2
    // SoSimple obj(10,20);
    // cout << "copy call " << endl;
    // SimpleFunc_case2(obj).AddNum(30).ShowSimpleData();
    // cout << "origin call"<< endl;
    // obj.ShowSimpleData();

    //21 page
    // Temporary(100); // 임시객체
    // cout << "********** after first **********" << endl <<endl;
    // Temporary(200).ShowTempInfo();
    // cout<<"********** after second **********" << endl << endl;
    // const Temporary &ref = Temporary(300);
    // cout << "********** assign after **********" << endl << endl;

    //29 page
    // Shallowcpy shall(10,90031);
    // cout << "shall "<<endl <<endl;
    // shall.getShallow();

    // Shallowcpy shall2(shall);

    // cout << "shall "<<endl <<endl;
    // shall.getShallow();

    // cout << "shall 2"<<endl <<endl;
    // shall2.getShallow();

    // shall2.setShallow(500,9000);

    // cout << "shall2 set func after shall "<<endl <<endl;
    // shall.getShallow();

    // cout << "shall 2"<<endl <<endl;
    // shall2.getShallow();

    //42 page
    // const int& x = 3;
    // int y = 1;
    // print(x); // const
    // print(3); // int &&x
    // print(y); // int &x


    //45 page
    // myclass a("aaa");
    // myclass b;
    // myclass c;
    // c = move(a);
    // b = a;
    // cout << "a"<< endl;
    // a.print();
    // cout << "b"<< endl;
    // b.print();
    // cout << "c"<< endl;
    // c.print();

    //40 page
    // int normal =5;
    // int y = normal * 5;
    // ++normal = 7;

    // cout << "int normal -> ++normal = 7 : " << normal << endl;
    // cout << "y = normal * 5 before ++normal : " << y << endl;

    // int &&r1 =10;  //r value reference
    // int &&r2 = Add(1,2); //r value reference
    // int x =1; // l value
    // //int &&r3 = x; // r value 이기때문에 l value로 바꿔줘야 한다.
    // int &ref = x; // l value refernce
    // const int &ref2 = 3; // r value reference

    // cout << "&&r1 = " << r1 << endl;
    // cout << "&&r2 = " << r2 << endl;
    // cout << "&ref = " << ref << endl;
    // cout << "const &ref2 = " << ref2 << endl;

    //47 page
    // string name1 = "allen";
    // cout << "name1 : " << name1 << endl;

    // string name2 = move(name1);
    // cout << "After name 2 = move name1" << endl;
    // cout << "name1 : " << name1 << endl;
    // cout << "name2 : " << name2 << endl << endl;

    // int zipcode1 = 90031;
    // cout << "zipcode1 : " << zipcode1 <<endl;
    // int zipcode2 = move(zipcode1);
    // cout << "After zipcode2 = move zipcode1" << endl;
    // cout << "zipcode1 : " << zipcode1 <<endl;
    // cout << "zipcode2 : " << zipcode2 <<endl;

    //49 page
    // Integer i1(1), i2(3);
    // i1.val = Add(i1,i2).val;
    // cout << i1.val;

    //53 page
    // MyArray ar1(10);
    // MyArray ar2(ar1);

    // cout<< "ar1.getNum : " << ar1.getNum() << endl; // 생성자
    // cout<< "ar2.getNum : " << ar2.getNum() << endl; // 복사생성자
    // cout <<endl;
    // ar2 = CreateMyArray();
    // cout << "ar2 <- CreateMyArray " <<endl;
    // cout<< "ar1.getNum : " << ar1.getNum() << endl; //생성자
    // cout<< "ar2.getNum : " << ar2.getNum() << endl << endl; //복사생성자

    // MyArray ar3(move(ar1));
    // cout << "ar3 <- move ar1 " <<endl;
    // cout<< "ar1.getNum : " << ar1.getNum() << endl; //생성자
    // cout<< "ar3.getNum : " << ar3.getNum() << endl; //이동생성자



    system("pause");
    return 0;
}
