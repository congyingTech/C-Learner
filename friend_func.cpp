# include<iostream>
using namespace std;

class Box
{
    private:
        double width;
    public:
        double length;
        friend void printWidth(Box box);
        void setWidth(double wid);
        double getWidth(void);
};

//成员函数定义
void Box::setWidth(double wid)
{
    width = wid;
}

double Box::getWidth()
{
    return width;
}

// printWidth不是任何类的成员函数，它可以访问所在类的私有和保护成员
void printWidth(Box box)
{
    cout << "Width of Box:" << box.width << endl; 
}


int main()
{
    Box box;
    box.setWidth(10.0);
    printWidth(box);
}


