//timer类  毫秒级别
#include<iostream>
#include<boost/timer.hpp>
using namespace std;
using namespace boost;

int main()
{
    timer t;    //计时器对象
    cout << "max timespan:"   //可度量的最大时间，以小时为单位
        << t.elapsed_max() / 3600 << "h" << endl;
    cout << "min timespan:"   //可度量的最小时间，以秒为单位
        << t.elapsed_min() << "s" << endl;
    cout << "now time elapsed:" //输出已经流失的时间
        << t.elapsed() * 3600 << "s" << endl;
    return 0;
}
