//timer类  毫秒级别
#include<iostream>
#include<boost/timer.hpp>

//progress_time 派生自timer类 析构时自动调用elapsed函数
#include<boost/progress.hpp>
#include<sstream>
using namespace std;
using namespace boost;

int main()
{
    //timer类
    timer t;    //计时器对象
    cout << "max timespan:"   //可度量的最大时间，以小时为单位
        << t.elapsed_max() / 3600 << "h" << endl;
    cout << "min timespan:"   //可度量的最小时间，以秒为单位
        << t.elapsed_min() << "s" << endl;
    cout << "now time elapsed:" //输出已经流失的时间
        << t.elapsed()  << "s" << endl;


    //progress_timer类
    progress_timer t1;
    cout << "progress_timer 调用 : elapsed : " 
        << t1.elapsed() << "s" << endl;
    //do something  
    //注意构造函数progress_timer(std::ostream& os)  允许将析构的输出定向到指定的I/O流
    stringstream ss;
    progress_timer t2(ss);
    cout << ss.str();
    //析构输出时间

    return 0;
}
