#include <stdio.h>
#include <stdlib.h>



int main()
{

    int* p;///һ��ָ�����p�����Դ���������͵ĵ�ַ
    int i = 5;///��5��ֵ��i
     p =&i;     ///��i�ĵ�ַ����p������ͬʱpָ����i
    *p = i;     ///*p����i��i����*p
    printf("%d",*p);
    return 0;
}




///��������ε��õģ�ע���������ڱ�������������
/*void max1(int i,int j)      ///��������c��d����ʼִ�й���
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
    max1(c,d);         ///���ú�����ת���������ܿ�


    return 0;
}
*/
