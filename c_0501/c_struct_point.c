#include <stdio.h>
void ClearLineFromReadBuffer(void)
{
    while (getchar() != '\n');
}

struct point
{
    int xpos;
    int ypos;
};

struct point2
{
    int xpos;
    int ypos;
    struct point2* ptr;
};

typedef struct point3
{
    int xpos;
    int ypos;
} Point;

struct person
{
    char name[20];
    char phoneNum[20];
    int age;
};

struct person2
{
    char name[20];
    char phoneNum[20];
    int age;
};

typedef struct person2 Person;

struct circle
{
    double radius;
    struct point* center;
};

void ShowPosition(Point pos)
{
    printf("[%d %d] \n", pos.xpos, pos.ypos);
}

Point GetCurrentPosition(void)
{
    Point cen;
    printf("Input current pos : ");
    scanf_s("%d %d", &cen.xpos, &cen.ypos);
    return cen;
}

//void SwapPoint(Point pos)
//{
//    int temp;
//    temp = pos.xpos;
//    pos.xpos = pos.ypos;
//    pos.ypos = temp;
//    printf("스왑 : [ %d , %d ] \n",pos.xpos,pos.ypos);
//}
//void SwapPoint(Point* pos)
//{
//    int temp;
//    temp = pos->xpos;
//    pos->xpos = pos->ypos;
//    pos->ypos = temp;
//    printf("스왑 : [ %d , %d ] \n", pos->xpos, pos->ypos);
//}

Point SwapPoint(Point* pos) //원본을 바꾸지 않는 방법
{
    int temp;
    temp = pos->xpos;
    pos->xpos = pos->ypos;
    pos->ypos = temp;

    return *pos;
}
void OrgSymTrans(Point* ptr)
{
    ptr->xpos = (ptr->xpos) * -1;
    ptr->ypos = (ptr->ypos) * -1;
}

int rect_cal(Point ptr1, Point ptr2)
{
    int x = ptr2.xpos - ptr1.xpos;
    int y = ptr2.ypos - ptr1.ypos;
    return x * y / 2;
}

typedef struct
{
    Point ptr1;
    Point ptr2;
} Point_Point;

Point_Point rect_vertex(Point ptr1, Point ptr2)
{
    Point ptr3 = {(ptr1.xpos),ptr2.ypos};
    Point ptr4 = { ptr2.xpos,ptr1.ypos };

    Point_Point result = { ptr3,ptr4 };

    return result;
}

typedef union box
{
    int mem1;
    int mem2;
    double mem3;
} UBox;

typedef struct dbshort
{
    unsigned short upper;
    unsigned short lower;
} DBShort;

typedef union rdbuf
{
    int iBuf;
    char bBuf[4];
    DBShort sBuf;
}RDBuf;

typedef enum syllable
{
    Do = 1, Re = 2, Mi = 3, Fa = 4, Sol = 5, La = 6, Ti = 7
}Syllable;
void Sound(Syllable sy)
{
    switch (sy)
    {
    case Do:
        puts("도는 하얀 도화지 ");
        return;
    case Re:
        puts("레는 둥근 레코드 ");
        return;
    case Mi:
        puts("미는 파란 미나리 ");
        return;
    case Fa:
        puts("파는 예쁜 파랑새 ");
        return;
    case Sol:
        puts("솔은 작은 솔방울 ");
        return;
    case La:
        puts("라는 라디오 ");
        return;
    case Ti:
        puts("시는 졸졸 시냇물 ");
        return;
    }
    puts("다함께 부르세 도레미파 솔라시도");

}
typedef int INT;
typedef int* PTR_INT;

typedef unsigned int UINT;
typedef unsigned int* PTR_UNIT;
typedef unsigned char UCHAR;
typedef unsigned char *PTR_UCHAR;

int main()
{
    //464 page
    /*struct point pos1={1,20};
    struct point pos2={100,200};
    struct point *pptr=&pos1;
    (*pptr).xpos += 4;
    (*pptr).ypos += 5;

    printf("[ %d, %d] \n",pptr->xpos,pptr->ypos);

    pptr=&pos2;
    pptr->xpos +=1;
    pptr->ypos +=2;
    printf("[%d %d] \n", (*pptr).xpos,(*pptr).ypos);*/

    //465 page
   /* struct point cen = { 2,7 };
    double rad = 5.5;
    struct circle ring = { rad,&cen };
    printf("원의 반지름 : %g \n", ring.radius);
    printf("원의 중심 : [%d, %d] \n", (ring.center)->xpos, (ring.center)->ypos);*/

    //467 page
    /*struct point2 pos1 = { 1,1};
    struct point2 pos2 = { 2,2 };
    struct point2 pos3 = { 3,3 };

    pos1.ptr = &pos2;
    pos2.ptr = &pos3;
    pos3.ptr = &pos1;

    printf("점의 연결관계... \n");
    printf("[%d, %d]와 [%d, %d]연결\n",
            pos1.xpos, pos1.ypos, (pos1.ptr)->xpos, pos1.ptr->ypos);
    printf("[%d, %d]와 [%d, %d]연결\n",
        pos2.xpos, pos2.ypos, pos2.ptr->xpos, pos2.ptr->ypos);
    printf("[%d, %d]와 [%d, %d]연결\n",
        pos3.xpos, pos3.ypos, pos3.ptr->xpos, pos3.ptr->ypos);*/

        //472 page
        /*INT num1 = 120;
        PTR_INT pnum1 = &num1;

        UINT num2 = 190;
        PTR_UNIT pnum2 = &num2;

        UCHAR ch = 'Z';
        PTR_UCHAR pch = &ch;

        printf("%d %u %c \n", *pnum1, *pnum2, *pch);*/

        //475 page
       /* Point pos = { 10,20 };
        Person man = { "이승기", "010-1234-5678",21 };

        printf("%d %d \n", pos.xpos, pos.ypos);
        printf("%s %s %d \n", man.name, man.phoneNum, man.age);*/

        //478 page
       /* Point curPos = GetCurrentPosition();
        ShowPosition(curPos);*/

        //482 page
       /* Point pos1 = { 1,1 };
        Point pos2;
        pos2 = pos1;
        printf("크기 : %d \n", sizeof(pos1));
        printf("[%d %d] \n", pos1.xpos, pos1.ypos);
        printf("크기 : %d \n", sizeof(pos2));
        printf("[%d %d] \n", pos2.xpos, pos2.ypos);*/

        //481 page
        /*Point pos = { 7,-5 };
        OrgSymTrans(&pos);
        ShowPosition(pos);

        OrgSymTrans(&pos);
        ShowPosition(pos);*/

        //484page 문제 23-1
        ///*Point pos1 = { 2,4 };
        //Point pos2 = { 5,7 };
        //SwapPoint(&pos1);
        //SwapPoint(&pos2);*/
        //Point pos1 = { 2,4 };
        //Point pos2 = { 5,7 };
        ///*Point swap1 = SwapPoint(&pos1);
        //Point swap2 = SwapPoint(&pos2);*/
        //SwapPoint(&pos1);
        //SwapPoint(&pos2);
        ////printf("pos1 swap : %d %d \n", swap1.xpos, swap1.ypos);
        ////printf("pos2 swap : %d %d \n", swap2.xpos, swap2.ypos);
        //printf("pos1 swap : %d %d \n", pos1.xpos, pos1.ypos);
        //printf("pos2 swap : %d %d \n", pos2.xpos, pos2.ypos);

        //488 page 문제 23-2번 
        /*Point ptr1 = { 0,0 };
        Point ptr2 = { 100,100 };
        int x3 = rect_vertex(ptr1, ptr2).ptr1.xpos;
        int y3 = rect_vertex(ptr1, ptr2).ptr1.ypos;
        int x4 = rect_vertex(ptr1, ptr2).ptr2.xpos;
        int y4 = rect_vertex(ptr1, ptr2).ptr2.ypos;

        printf("사각형의 넓이 : %d\n", rect_cal(ptr1, ptr2));
        printf("네 점의 좌표 : [ %d,%d ] [ %d,%d ] [ %d,%d ] [ %d,%d ]\n",
                ptr1.xpos, ptr1.ypos, ptr2.xpos, ptr2.ypos,
                x3, y3, x4, y4);*/

        //달팽이
        /*int num;

        printf("n x n의 길이 입력 : ");
        scanf_s("%d", num);
        int len = 2 * num + 1;
        for (int i = 0; i < len; i++)
        {
            for()
        }*/

        //491 page
        /*UBox ubx;
        ubx.mem1 = 20;
        printf("%d \n", ubx.mem2);
        ubx.mem3 = 7.15;
        printf("%d \n", ubx.mem1);
        printf("%d \n", ubx.mem2);
        printf("%g \n", ubx.mem3);*/

        //492 page
        /*RDBuf buf;
        printf("정수 입력 : ");
        scanf_s("%d", &(buf.iBuf));

        printf("상위 2바이트 : %u \n", buf.sBuf.upper);
        printf("하위 2바이트 : %u \n", buf.sBuf.lower);
        printf("상위 1바이트 아스키코드 : %c \n", buf.bBuf[0]);
        printf("상위 2바이트 아스키코드 : %c \n", buf.bBuf[3]);*/

    /*Syllable sy;
    for (sy = Do; sy <= Ti; sy++)
    {
        Sound(sy);
    }*/

    //506page
   /* FILE* fp = fopen("data.txt", "wt");
    if (fp == NULL)
    {
        puts("파일오픈 실패!");
        return -1;
    }
    fputc('A', fp);
    fputc('B', fp);
    fputc('C', fp);
    fclose(fp);*/

    //509 page
    /*FILE* fp = fopen("data.txt", "rt");
    int ch;
    if (fp == NULL)
    {
        puts("파일오픈 실패!");
        return -1;
    }
    
    for (int i = 0; i < 3; i++)
    {
        ch = fgetc(fp);
        printf("%c\n",ch);
    }
    fclose(fp);*/

    

    return 0;
}
