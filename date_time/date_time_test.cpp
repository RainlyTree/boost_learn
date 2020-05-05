#include <boost/date_time/gregorian/gregorian.hpp>  //处理日期的组件
using namespace boost::gregorian;

#include <boost/date_time/posix_time/posix_time.hpp>  //处理时间的组件
using namespace boost::posix_time;

#include<iostream>
using namespace std;

int main()
{
    date d1;      //无效的日期
    date d2(2010, 1, 1);  //数字构造日期
    date d3(2020, Jan, 1);  //英文指定月份
    date d4(d2);  //拷贝构造
    //使用工厂函数 from_string()  fron_undelimited_string()
    date d5 = from_string("1999-12-31");
    date d6(from_string("2015/1/1"));
    date d7 = from_undelimited_string("20011118");

    cout << day_clock::local_day() << endl;
    cout << day_clock::universal_day() << endl;
    return 0;
}
