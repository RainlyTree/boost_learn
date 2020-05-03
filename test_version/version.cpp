#include<boost/version.hpp>
#include<boost/config.hpp>
#include<iostream>

int main()
{
    std::cout << "Boost 版本:" << BOOST_VERSION << std::endl;      //Boost版本号
    std::cout << "Boost Lib 版本:" <<BOOST_LIB_VERSION << std::endl;  //Boost版本号
    std::cout << "操作系统 版本:" <<BOOST_PLATFORM << std::endl;     //操作系统
    std::cout << "编译库 版本:"<< BOOST_COMPILER << std::endl;     //编译库
    std::cout << "标准库 版本:"<< BOOST_STDLIB  << std::endl;      //标准库

    return 0;
}
