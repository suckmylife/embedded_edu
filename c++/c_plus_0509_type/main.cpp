#include <iostream>
#include <cmath>
#include <fstream>
#include <iomanip>
//page 81
#include "compare.h"
using namespace std;
//129 page
class Chulsoo{
public:
    void Eat();
};

void Chulsoo::Eat(){
    cout << "chulsool eat" << endl;
}
char *NumberToString(int n)
{
    char *p = new char[20];
    sprintf(p, "%d", n);
    return p;
}

//3장 31page
int assignValue(int n){
    n = 10;
    return n;
}

//3장 33page
class Restaurant{
public:
    int Steak;
};

class Man{
public:
    int Eat(int);
};

int Man::Eat(int SteakNum){
    SteakNum = 10000;
    cout << "man eat" << endl;
    return SteakNum;
}

//3장 39page
void Swap(int &x, int &y) //레퍼런스에 의한 전달
{
    int temp = x; // 레퍼런스를 직접 사용
    x = y;
    y = temp;
}

//3장 40page call by reference 주소에 의한 호출
int callbyadress(int *n){ //변수에 값을 할당하는 함수
    *n = 10;
    return *n;
}

//3장 43page call by reference with class
class FoodShop{
public:
    int meat;
};

class customer{
public:
    int Eat(int&);
};

int customer::Eat(int& meat)
{
    meat = 10000;
    cout << "<he eat>" << endl;
    return meat;
}

//48page
int RefRetFuncTwo(int &ref){
    ref++;
    return ref;
}

//67 page
int BoxVolum(int length, int width=1, int height =1)
{
    return length*width*height;
}

//70 page
class default_man{
public:
    int Eat(int steaknum = 20000, int waternum = 1000, int coffeenum = 5000);
};

int main()
{
    //105 page
    // float i = 100.12345; //초기화 중 double 에서 float으로 잘립니다..
    // double j = 200.12345;
    // float count = static_cast<float>(j/i);

    // cout << "float count : float i x double j = " << count << endl;

    // double d = 1212;
    // void* p = &d;
    // double* dp = static_cast<double*>(p);
    // cout << "double *dp = " << *dp << endl;

    // double d = 4.24;
    // int* i1 = (int*)&d; //컴파일 성공 하지만 에러유발 잠재 요인
    // int* i2 = static_cast<int*>(&d); // 컴파일 실패
    // int  i3 = dynamic_cast<int>(d); //컴파일 에러, 기본 자료형은 안된다.

    //106 page
    // int num = 0x040204;
    // char *ptr = reinterpret_cast<char*>(&num);
    // //static_cast로 강제 형변환을 한것.
    // cout << "static_cast<int>(*(ptr+1)) = " << static_cast<int>(*(ptr+1)) << endl;
    // //2출력

    //107 page
    // const char *cp;
    // char *q = static_cast<char*>(cp);
    // const_cast<string>(cp);

    // const char *str = "Hello";
    // char *str2 = const_cast<char*>(str);
    // cout << "str2 = " << str2 << endl;

    // char *str3 = const_cast<char*>(str);
    // str3[2] = 'a'; // 에러발생
    // cout << "str3 = " << str3 << endl;

    //124 page
    // int *p = NULL;
    // p = new int(0); //동적 메모리 할당 및 초기화
    // if(p == NULL)
    // {
    //     cout << "failed"<<endl;
    //     return -1;
    // }
    // cout << "input number : ";
    // cin >> *p; //동적 메모리 사용
    // cout << "input number is " << p[0] << endl;
    // delete p; //동적 메모리 삭제
    // p = NULL;


    //125 page
    // int num;
    // cin >> num;
    // int *data = new int[num];
    // for(int i = 0; i<num; i++)
    //     cin >> data[i];
    // //delete data;
    // //일단 실행됨 경고뜸 무슨 pointer로 선언했는데 괄호 안붙이냐고
    // //이렇게 하게되면 동적할당을 여러개 했는데 그냥 data만 삭제하라고 하면
    // //어떤 컴파일러은 다 지워주고 어떤 컴파일러는 첫번째만 삭제함.
    // //그러니 정확하게 delete해주는게 중요
    // delete [] data;


    //delete 를 또 delete 하지 말아라
    // int *p = nullptr;
    // p = new int{12};
    // if(p == nullptr)
    // {
    //     cout << "failed" << endl;
    //     return -1;
    // }

    // cout << "input number : ";
    // cin >> *p;
    // cout << "input number is : " << p[0] << endl;

    // delete p;
    // p = nullptr;

    //129 page
    // int num;
    // cout << "input number : ";
    // cin >> num;

    // char *str = NumberToString(num);
    // cout << "convert char : " << str << endl;
    // delete [] str;

    //146 page
    // int a =0, b=0, sum1, sum2;
    // sum1 = a++ + a++ + a++;
    // sum2 = ++b + ++b + ++b;

    // cout << "a : " << a << endl;
    // cout << "b : " << b << endl;
    // cout << "sum1 : " << sum1 << endl;
    // cout << "sum2 : " << sum2 << endl;

    //159 page
    // int i = 3.65;
    // long l = M_PI;
    // float f = M_PI;
    // double d = M_PI;

    //178 page //이거 안됨
    // ofstream output;
    // output.open("text.txt");
    // output << "Hello World!" << endl;
    // output.close();

    //182 page
    // string str = "INPUT FILE PLEASE";
    // ofstream ofs("text.txt");
    // ofs << str;
    // ofs.close();
    // ifstream ifs("text.txt");
    // ifs >> str;
    // cout << str << endl;
    // ifs.close();

    //184 page
    // fstream fs;
    // fs.open("text.txt", ios::out);
    // if(fs.fail())
    //     return 0;
    // fs << "keyboard" << endl;
    // fs << "monitor" <<endl;
    // fs.close();

    // fs.open("text.txt",ios::out|ios::trunc);
    // fs << "desk" <<endl;
    // fs.close();

    // fs.open("text.txt", ios::in);
    // string temp;
    // while(fs >> temp, !fs.eof()){
    //     cout << temp << endl;
    // }
    // fs.close();

    //188 page
    // fstream fp;
    // int data, score[5] = {78,96,100,25,96};

    // fp.open("sample.txt", ios::out | ios::binary);
    // fp.write((char*)score,20);
    // fp.close();

    // fp.open("sample.txt",ios::in|ios::binary);
    // if(fp.fail()) return 1;

    // fp.read((char*)&data,4);
    // cout << setw(3) << right << data << endl;

    // fp.seekg(4,ios::cur);
    // fp.read((char*)&data,4);
    // cout << setw(3) << right << data << endl;

    // fp.close();

    //191 page
    // int a = 1234, b=0x12345678;
    // cout << hex << "16진수 a = " << a;
    // cout << dec << "\t10진수 a = " << a << endl;
    // cout << hex << "16진수 b = " << b;
    // cout << dec << "\t10진수 b = " << b << endl;

    //193 page
    // ofstream ofs;

    // ofs.open("file.txt");

    // ofs.write("This is an apple",16);

    // //tellp() 멤버함수를 이용해 파일의 현재 위치를 얻는다.
    // //현재 위치는 this is an apple의 맨끝일 것이다.
    // long pos = ofs.tellp();

    // //현재 위치에서 7만큼 위치를 뒤로 이동 시킨다.
    // //현재 위치를 앞뒤로 조정하는 것을 오프셋을 조정한다고 한다.
    // // 오프셋을 -7로 조정한 위치는 문자 'n'이다.
    // ofs.seekp(pos-7);

    // //조정한 위치부터 문자열 "sam"을 쓴다.
    // ofs.write(" sam",4);

    // ofs.close();

    //3장

    //23 page
    // Chulsoo chulsoo;
    // chulsoo.Eat();

    //31 page call by value
    // int num = 0;
    // int value;
    // value = assignValue(num);
    // cout << "[intput] : " << num <<endl;
    // cout << "[output] : " << value << endl;


    //33page
    // Man man;
    // Restaurant food;

    // food.Steak = 20000;

    // cout << "man was eat " << man.Eat(food.Steak) << "but it is lie" << endl;
    // cout << "restaurant know man was eat" << food.Steak << " won steak" <<endl;

    //39 page
    // int a, b;
    // cout << "input two number : ";
    // cin >> a >> b;
    // cout << "before swap a : " << a << endl;
    // cout << "before swap b : " << b << endl;
    // Swap(a,b);
    // cout << "after swap a : " << a << endl;
    // cout << "after swap b : " << b << endl;

    //40page
    // int num = 0, value;
    // value = callbyadress(&num);
    // cout << "[input] : " << num << endl;
    // cout << "[output] : " << value << endl;

    //43page
    // customer cus;
    // FoodShop shop;

    // shop.meat = 20000;
    // cout << "he eat " << cus.Eat(shop.meat) << " won steak. it is lie" << endl;
    // cout << "show know he eat " << shop.meat << "won steak." << endl;

    //48 page
    // int num1 = 1;
    // int num2 = RefRetFuncTwo(num1);
    // num1+=1;
    // num2+=100;
    // cout << "num1 : " << num1 << endl;
    // cout << "num2 : " << num2 << endl;


    //67 page
    // cout << "[in, in ,in ] : " << BoxVolum(3,3,3) << endl;
    // cout << "[in, in ,no ] : " << BoxVolum(5,5) << endl;
    // cout << "[in, no ,no ] : " << BoxVolum(7) << endl;
    // //cout << "[no, no ,no ] : " << BoxVolum() << endl; //에러발생

    //70 page
    // default_man dman;
    // dman.Eat();
    // dman.Eat(30000);
    // dman.Eat(1500);
    // dman.Eat(20000,1500);

    //81page
    // int a =34, b =4;
    // float c = 1.234f, d = 98.34f;
    // char e = 'H', f='K';
    // char str1[] = "computer", str2[] = "hello";

    // cout << "int compare version :" << Compare(a,b) << endl;
    // cout << "float compare version :" << Compare(c,d) << endl;
    // cout << "char compare version :" << Compare(e,f) << endl;
    // cout << "char list compare version :" << Compare(str1,str2) << endl;

    system("pause");
    return 0;
}
