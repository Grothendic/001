// MyProject.01.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//这是C++学习的实践场所

#include <iostream>

using namespace std;

int main()
{
    cout << "Hello World!\n";
    /*这里是多行注释
    养成随手注释的好习惯，可以方便他人、甚至自己在之后面对这些代码时进行快速理解、运用
    明晰的注释不仅是对未来的考虑，也是对当下思路和想法的思考、具现、强化，可以帮助我们理清思路
    */
    //打印实验     
    printf("我要成为编程大神\n");
    //常量打印实验     
    printf("the value of 35+48 is %d\n", 35 + 48);
    //变量名大小写区分实验
    int Myclassroom = 1;
    int myclassroom = 6;
    printf("the value of the Myclassroom is %d\n",Myclassroom);
    printf("the value of the myclassroom is %d\n",myclassroom);
    //八进制实验
    int n10;
    n10 = 077;
    printf("the value of the n10 is %d\n", n10);
    //十六进制实验
    int w10;
    w10 = 0x12;
    printf("the value of the w10 is %d\n", w10);
    //变量名占用的内存
    int a = 0;
    printf("the size of the a is %d bit\n", sizeof(a));
    //定义整型变量
    short b = 0;
    b = 190;
    printf("the value of b is %d\n", b);
    //常量也分类
    long test1 = 77L;
    float test2 = 66;
    unsigned test3 = 55u;
    //两种实型数据
    float c = 0;
    double d = 0;
    printf("the size of float number is %d bit\n", sizeof(c));
    printf("the size of double number is %d bit\n", sizeof(d));
}
