#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
    stringstream ostr("ccc");
    ostr.put('d');
    ostr.put('e');
    ostr << "fg";
    cout << "stringstream ostr :";
    string gstr = ostr.str();
    cout << gstr << endl;                            

    char a;
    ostr >> a; //可以看到stringstream对象既可以做输入流也可以做输出流
    cout << "a:" << a << endl;
    return 0;

}
