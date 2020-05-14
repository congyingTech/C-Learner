#include<iostream>
using namespace std;
class Line
{
    private:
       double length;

    public:
       Line(double len);
       ~Line();
       void setLength(double len);
       
       double getLength(void);
};

Line::Line(double len)
{
    cout << "Object is being created" << endl;
    length = len;
}

Line::~Line()
{
    cout << "Object is being deleted" << endl;
}

void Line::setLength(double len)
{
    length = len;
}

double Line::getLength()
{
    return length;
}


int main()
{
    //带参数的构造函数可以初始化一个值
    Line line(10.0);
    cout << "Length of line: " << line.getLength() << endl;
    // 再次设置length
    line.setLength(6.0);
    cout << "Length of line: " << line.getLength() << endl;

    return 0;
}


