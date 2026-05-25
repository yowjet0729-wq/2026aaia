///week14-2.cpp
#include <stdio.h>

int f1(int x,int y)
{
    printf("f1函式吃到參數x:%d y:%d\n",x,y);
    x=x+10;///在函式裡，加10
    printf("f1()函式裡修改後x:%d y:%d\n",x,y);
}
int main()///定義main()函式
{
    printf("Hello World\n");
    int x=100, y=200;
    f1(x,y);///呼叫f1()函式，裡面動的，跟外面沒關係
    printf("main()函式裡，現在 x:%d y:%\n",x,y);
    return 0;///以前都沒寫，但現在應該要寫。main()會幫你加


}
