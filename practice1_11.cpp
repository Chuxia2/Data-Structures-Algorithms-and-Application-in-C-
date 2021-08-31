// practice1_11.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;

template<class T>

T& Tcount(const T arr[], const T value, int& num, int n);


int main()
{
    int n = 0;
    int num = 0;
    int arr[5] = { 2,2,2,4,5 };
    try
    {
        Tcount(arr, 2, num, n);
    }
    catch (const char* e)   //不加const会报错为异常未处理
    {
        cout << "n should be > 1" << endl;
    }
    cout << num << endl;
    return 0;
}


//声明和实现都需要有template<class T>,否则会报错
template<class T>
T& Tcount(const T arr[], const T value, int& num, int n)
{
    int i;
    if (n < 1)
    {
        throw "abc";
    }
    for (i = 0; i < n; i++)
    {
        if (arr[i] == value)
        {
            num++;
        }
    }
    return num;
}


// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
