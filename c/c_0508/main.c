#include <stdio.h>

int foo() //초기화 안했을때
{
    int i,j;
    j=i+2;
    //printf("i = %d j = %d \n",i,j);
    return j;
}
// int foo() //초기화 했을때
// {
//     int i = 0,j;
//     j=i+2;
//     return j;
// }


int main()
{
    for(int i=0; i<10; i++)
    {
        printf("Result #%d : %d \n",i,foo());
    }

    return 0;
}