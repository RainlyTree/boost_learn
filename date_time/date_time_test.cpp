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

    //显示当前日期
    cout << "显示当前日期:" << endl;
    cout << day_clock::local_day() << endl;
    cout << day_clock::universal_day() << endl;


    //日期输出
    cout << "日期输出:" << endl;
    cout << to_simple_string(d2) << endl;
    cout << to_iso_string(d2) << endl;
    cout << to_iso_extended_string(d2) << endl;
    cout << d2 << endl;

    //与tm转换
    cout << "tm 与 date转换:" << endl;
    tm t = to_tm(d6);
    cout << "转换成tm 时的时间: ";
    //转换之后年份有问题
    cout << t.tm_year + 1900 << " " << t.tm_mon << " " << t.tm_mday << 
        " " << t.tm_hour << " " << t.tm_min << " " << t.tm_sec << endl;

    cout << "转换成date 时间:";
    date d8 = date_from_tm(t);
    cout << d8 << endl;

    return 0;
}
