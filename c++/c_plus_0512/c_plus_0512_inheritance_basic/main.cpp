#include <iostream>
#include "younghee.h"
#include "chulsoo.h"
#include "intsample.h"
using namespace std;

//121 page
class DailyLife{
private:
    Chulsoo chulsoo;
    Younghee younghee;

public:
    DailyLife(Chulsoo chulsooObject, Younghee youngheeObject){
        cout << "DailyLife creator start "<<endl;
        chulsoo = chulsooObject;
        younghee = youngheeObject;

        cout << "DailyLife creator Complete" <<endl;
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

int main()
{

    // Chulsoo chulsoo;
    // Younghee younghee;

    // chulsoo.constructor("chulsoo","male","writer","diligent",32,true);
    // younghee.constructor("younghee","female","housewife","impatient",50,true);

    // chulsoo.drive("restaurant");
    // chulsoo.eat("steak");

    // younghee.eat("bread");

    // chulsoo.drive("home");

    // younghee.sleep();

    // chulsoo.write();
    // chulsoo.read();
    // chulsoo.sleep();

    // cout<< endl;

    // chulsoo.introduce();
    // cout<<endl;

    // younghee.introduce();

    //75 page
    // IntSample obj;
    // obj.setScore(100);
    // cout << "Score : " << obj.getScore() <<endl;

    //104 page
    Chulsoo chulsoo("chulsoo","male","writer","diligent",32,true);
    Younghee younghee("younghee","female","housewife","impatient",50,true);
    DailyLife dailylife(chulsoo, younghee);
    dailylife.run();

    system("pause");


    return 0;
}
