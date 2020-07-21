#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Hello Wrold!\n" << endl;

    int a = 5;
    int b (10);
    int c {20};
    int d;

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;

    int e = 0;
    auto ee = e;
    decltype(ee) eee = 1;

    cout << e << endl;
    cout << ee << endl;
    cout << eee << endl;

    string mystring = "This is a string.";
    cout << mystring << endl;

    return 0;
}