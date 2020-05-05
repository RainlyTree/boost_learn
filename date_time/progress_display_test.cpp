#include<iostream>
#include<vector>
#include<string>
#include<fstream>
#include<boost/progress.hpp>
using namespace std;
using namespace boost;

int main()
{
    vector<string> v(100, "123");            //一个字符串向量
    ofstream fs("./test.txt");        //文件输出流

    //声明一个progress_display对象,基数是v的大小
    progress_display pd(v.size());

    for(auto& e : v)
    {
        fs << e << endl;
        ++pd;                         //更新进度显示
    }

    progress_display pd1(v.size(), cout , "%%%", "+++", "???");

    for(auto& e : v)
    {
        fs << e << endl;
        ++pd1;
    }

    return 0;
}
