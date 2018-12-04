#include <stdio.h>
#include <stdlib.h>


///函数是如何调用的，注意主函数于被调函数的联动
void max1(int i,int j)      ///函数代入c，d，开始执行功能
{
    if(i>j)
    {
        printf("%d",i);
    }
    else
    {
        printf("%d",j);
    }
}

int main()
{
    int a, b, c, d;
    a=1,b=2,c=3,d=4;
    max1(c,d);         ///调用函数，转到函数功能块


    return 0;
}





///初识指针
/*int main()
{

    int* p;///一个指针变量p，可以存放整型类型的地址
    int i = 5;///把5赋值给i
     p =&i;     ///把i的地址赋给p变量，同时p指向了i
    *p = i;     ///*p等于i，i等于*p
    printf("%d",*p);
    return 0;
}*/



