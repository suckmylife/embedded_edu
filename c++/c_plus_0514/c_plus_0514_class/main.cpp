#include <iostream>

using namespace std;

class Younghee;

class Chulsoo{
private:
    int age;
    static int chulsooPrivateCnt;
protected:
    static int chulsooProtectedCnt;
public:
    static int chulsooPublicCnt;
    void introduce(const char* name){
        cout << name <<" is " << age << " year old" << endl;
    }
    Chulsoo(const Chulsoo& source):age(source.age){
        cout << "copy creator call" << endl;
    }
    Chulsoo(int age):age(age){
        cout << "creator call" << endl;
    }
    Chulsoo(){
        cout << "basic creator call" << endl;
    }
    Chulsoo& operator=(const Chulsoo& chulsooObj){
        this->age = chulsooObj.age;
        cout << "operator copy creator" << endl;
        return *this;
    }
    void setAge(int age){
        this->age = age;
    }
    ~Chulsoo(){
        cout << "destroy"<<endl;
    }
    // Chulsoo(int age):age(age){
    //     chulsooPrivateCnt++;
    //     chulsooProtectedCnt++;
    //     chulsooPublicCnt++;
    //     // cout << "private cnt :" << chulsooPrivateCnt << endl;
    //     // cout << "protected cnt :" << chulsooProtectedCnt << endl;
    //     // cout << "public cnt :" << chulsooPublicCnt << endl<<endl;

    //     // cout<< "one more time" <<endl;
    //     // cout << "private cnt :" << chulsooPrivateCnt << endl;
    //     // cout << "protected cnt :" << chulsooProtectedCnt << endl;
    //     // cout << "public cnt :" << chulsooPublicCnt << endl<<endl;
    // }
    // void introduce(){
    //     cout << "chulsoo age is " << age << endl;
    // }
    // friend void howOldAreYou(const Chulsoo &chulsooObj, \
    //                          const Younghee &youngheeObj);
    // friend class Younghee;
    // Chulsoo add(const Chulsoo& chulsooObjg){
    //     cout << "Add func : " << endl;
    //     Chulsoo chulsoo(this->age + chulsooObjg.age);
    //     return chulsoo;
    // }
    // Chulsoo sub(const Chulsoo& chulsooObjg){
    //     cout << "Sub func : " << endl;
    //     Chulsoo chulsoo(this->age - chulsooObjg.age);
    //     return chulsoo;
    // }
    // Chulsoo mul(const Chulsoo& chulsooObjg){
    //     cout << "Multi func : " << endl;
    //     Chulsoo chulsoo(this->age * chulsooObjg.age);
    //     return chulsoo;
    // }
    // Chulsoo div(const Chulsoo& chulsooObjg){
    //     cout << "Div func : " << endl;
    //     Chulsoo chulsoo(this->age / chulsooObjg.age);
    //     return chulsoo;
    // }

    // Chulsoo operator+(const Chulsoo& chulsooObj){
    //     cout << "operator + " << endl;
    //     Chulsoo chul(this->age + chulsooObj.age);
    //     return chul;
    // }
    // Chulsoo operator-(const Chulsoo& chulsooObj){
    //     cout << "operator - " << endl;
    //     Chulsoo chul(this->age - chulsooObj.age);
    //     return chul;
    // }
    // Chulsoo operator*(const Chulsoo& chulsooObj){
    //     cout << "operator * " << endl;
    //     Chulsoo chul(this->age * chulsooObj.age);
    //     return chul;
    // }
    // Chulsoo operator/(const Chulsoo& chulsooObj){
    //     cout << "operator / " << endl;
    //     Chulsoo chul(this->age / chulsooObj.age);
    //     return chul;
    // }

    // friend Chulsoo operator+(const Chulsoo& chulsooObj1, \
    //                          const Chulsoo& chulsooObj2){
    //     cout << "operator + " << endl;
    //     Chulsoo chul(chulsooObj1.age + chulsooObj2.age);
    //     return chul;
    // }

};

class Younghee{
private:
    int age;
public:

    Younghee(int age):age(age){
        Chulsoo::chulsooPublicCnt++;
        cout << "younghee call chulsoo public cnt : " << Chulsoo::chulsooPublicCnt << endl;
    }
    void introduce(){
        cout << "younghee age is" << age << endl;
    }
    void wholsOlder(const Chulsoo &chulsooObj);
    friend void howOldAreYou(const Chulsoo &chulsooObj, \
                             const Younghee &youngheeObj);
};

// void Younghee::wholsOlder(const Chulsoo &chulsooObj){
//     cout << "younghee is " << ((age>chulsooObj.age)?\
//                                 "older than":"younger than or same with")\
//          << " chulsoo" << endl;
// }

// void howOldAreYou(const Chulsoo &chulsooObj,const Younghee &youngheeObj){
//     cout << "chulsoo is " << chulsooObj.age << " year old" << endl;
//     cout << "younghee is " << youngheeObj.age << " year old" << endl;
// }

class SoSimple{
public:
    static int simObject;
public:
    SoSimple(){
        simObject++;
        cout << simObject << " SoSimple object" << endl;
    }
};
int SoSimple::simObject = 0;

int Chulsoo::chulsooPublicCnt = 0;
int Chulsoo::chulsooPrivateCnt = 0;
int Chulsoo::chulsooProtectedCnt = 0;

// class Point{
// private:
//     int xpos,ypos;
// public:
//     Point(int x=0, int y=0):xpos(x),ypos(y){}
//     void ShowPoint() const{
//         cout << "[ " << xpos << " , " << ypos << " ]" <<endl;
//     }
//     // Point& operator++(){
//     //     xpos+=1;
//     //     ypos+=1;
//     //     return *this;
//     // }
//     // friend Point& operator--(Point &ref){
//     //     ref.xpos -=1;
//     //     ref.ypos -=1;
//     //     return ref;
//     // }
//     // const Point operator++(int){
//     //     const Point retobj(xpos,ypos);
//     //     xpos+=1;
//     //     ypos+=1;
//     //     return retobj;
//     // }
//     // const Point operator--(Point &ref, int){
//     //     const Point retobj(xpos,ypos);
//     //     ref.xpos-=1;
//     //     ref.ypos-=1;
//     //     return retobj;
//     // }
// };
class Point {
private:
    int xpos, ypos;
public:
    Point(int x=0, int y=0) : xpos(x), ypos(y) {  }
    friend ostream& operator<<(ostream& os, const Point& pos);
};

ostream& operator<<(ostream& os, const Point& pos)
{
    os<<'['<<pos.xpos<<", "<<pos.ypos<<']'<<endl;
    return os;
}

class Number{
private:
    int num;
public:
    Number(int n=0) : num(n){
        cout << "creator call" <<endl;
    }
    Number(const Number& n):num(n.num){
       cout << "copy creator call" << endl;
    }
   Number& operator=(const Number& ref){
       cout << " = operator" << endl;
       num = ref.num;
       return *this;
   }
   operator int(){
       return num;
   }
   void showNumber(){cout << "show number : " << num <<endl;}
};

class Person{
private:
    char *name;
    int age;
public:
    Person(const char *myname, int myage){
        int len = strlen(myname)+1;
        name = new char[len];
        strcpy(name,myname);
        age = myage;
    }
    Person& operator=(const Person& ref){
        delete []name;
        int len = strlen(ref.name)+1;
        name = new char[len];
        strcpy(name,ref.name);
        age = ref.age;
        return *this;
    }
    void ShowPersonInfo() const{
        cout << "name : " << name << endl;
        cout << "age : " << age << endl;
    }
    ~Person(){
        delete []name;
        cout << "call destructor!" << endl;
    }
};

class BoundCheckPointArray{
private:
    Point *arr;
    int arrlen;
    BoundCheckPointArray(const BoundCheckPointArray& arr){}
    BoundCheckPointArray& operator=(const BoundCheckPointArray& arr){}

public:
    BoundCheckPointArray(int len):arrlen(len){
        arr= new Point[len];
    }

    Point& operator[](int idx){
        if(idx < 0 || idx >= arrlen){
            cout << "array index out of bound exception"<<endl;
            exit(1);
        }
        return arr[idx];
    }

    Point operator[](int idx)const {
        if(idx < 0 || idx >= arrlen){
            cout << "array index out of bound exception"<<endl;
            exit(1);
        }
        return arr[idx];
    }
    int GetArrLen() const { return arrlen;}
    ~BoundCheckPointArray(){delete []arr;}
};

int main()
{
    //6장 9page
    // Chulsoo chulsoo(32);
    // chulsoo.introduce();
    // Younghee younghee(50);
    // younghee.introduce();
    // younghee.wholsOlder(chulsoo);

    //11page
    // Chulsoo chulsoo(32);
    // Younghee younghee(50);
    // howOldAreYou(chulsoo,younghee);

    //21 page
    // cout << "no. " << SoSimple::simObject << " object" <<endl;
    // SoSimple sim1;
    // SoSimple sim2;
    // cout << "no. " << SoSimple::simObject << " object" <<endl;
    // cout << "no. " << sim1.simObject << " object" <<endl;
    // cout << "no. " << sim2.simObject << " object" <<endl;

    //27 page
    // Chulsoo chul1(32);
    // Chulsoo chul2(42);
    // Younghee young1(50);
    // Younghee young2(60);

    //7장 8page
    // Chulsoo katy(30);
    // Chulsoo sally(40);

    // katy.introduce("katy");
    // sally.introduce("sally");

    // Chulsoo katyAdd = katy.add(sally);
    // katyAdd.introduce("katy Add");

    // Chulsoo katySub = katy.sub(sally);
    // katySub.introduce("katy Sub");

    // Chulsoo katyMul = katy.mul(sally);
    // katyMul.introduce("katy Mul");

    // Chulsoo katyDiv = katy.div(sally);
    // katyDiv.introduce("katy Div");

    //15page
    // Chulsoo chul1(30);
    // Chulsoo chul2(15);

    // chul1.introduce("chul1");
    // chul2.introduce("chul2");

    // Chulsoo chulAdd = chul1+chul2;
    // chulAdd.introduce("chul add");

    // Chulsoo chulSub = chul1-chul2;
    // chulSub.introduce("chul sub");

    // Chulsoo chulMul = chul1*chul2;
    // chulMul.introduce("chul Mul");

    // Chulsoo chulDiv = chul1/chul2;
    // chulDiv.introduce("chul div");

    //23 page
    // Chulsoo sally(30);
    // Chulsoo katy(15);
    // sally.introduce("sally");
    // katy.introduce("katy");
    // Chulsoo Add = 3 + sally;
    // Add.introduce("Sally Add");

    //30 page
    // Point pos(1,2);
    // ++pos;
    // cout << "++pos" <<endl;
    // pos.ShowPoint();
    // cout << endl;
    // --pos;
    // cout << "--pos" <<endl;
    // pos.ShowPoint();
    // cout << endl;
    // ++(++pos);
    // cout << "++(++pos)" <<endl;
    // pos.ShowPoint();
    // cout << endl;
    // --(--pos);
    // cout << "--(--pos)" <<endl;
    // pos.ShowPoint();

    //33 page
    // Point pos(3,5);
    // (pos++)++;
    // (pos--)--;

    //38 page

    //40 page
    // Number num1;
    // num1 =30;
    // Number num2 = num1+20;
    // //Number num2(num1);
    // num2.showNumber();

    //50 page
    // Chulsoo chul1(32);
    // Chulsoo chul2(50);
    // chul1.introduce("chul1");
    // chul2.introduce("chul2");
    // cout << "============before operator============" << endl;
    // chul1 = chul2;
    // cout << "============ after operator============"<<endl;
    // chul1.introduce("chul1");
    // chul2.introduce("chul2");

    //54 page
    // Chulsoo chul1(32);
    // Chulsoo chul2(50);
    // Chulsoo chul3(100);

    // chul1.introduce("chul1");
    // chul2.introduce("chul2");
    // chul3.introduce("chul3");

    // cout << "============before operator============" << endl;
    // chul1 = chul2 = chul3;
    // cout << "============ after operator============"<<endl;
    // chul1.introduce("chul1");
    // chul2.introduce("chul2");
    // chul3.introduce("chul3");

    //55page
    // Person man1("lee dong woo",29);
    // Person man2("Yoon ji yul",22);
    // man2 =man1;
    // man1.ShowPersonInfo();
    // man2.ShowPersonInfo();

    //64 page
    // //Chulsoo *ptr1 = (Chulsoo*)malloc(sizeof(Chulsoo));
    // Chulsoo *ptr1 = new Chulsoo(32);
    // ptr1->setAge(32);
    // ptr1->introduce("ptr1");
    // //free(ptr1);
    // delete ptr1;

    //70page
    BoundCheckPointArray arr(3);
    arr[0] = Point(3,4);
    arr[1] = Point(5,6);
    arr[2] = Point(7,8);
    for(int i = 0; i<arr.GetArrLen(); i++){
        cout << arr[i];
    }


    system("pause");

    return 0;
}
