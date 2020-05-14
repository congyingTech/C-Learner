#include<iostream>
using namespace std;

class  Box
{
    private:
       double length;
       double breadth;
       double height;

    public:
    //构造函数
       Box(double l=2.0, double b=2.0, double h=2.0)
       {
           cout << "Constructor called." << endl;
           length = l;
           breadth = b;
           height = h;
       }
       double volume(void);
       int compare(Box box);
       
};

double Box::volume()
{
    return length*breadth*height;
}

int Box::compare(Box box){

    return this->volume() > box.volume();
}

int main(){
    Box box1(1.0, 2.0, 3.0);
    Box box2(2.8, 2.3, 4.2);
    if(box1.compare(box2))
    {
        cout << "box2 is smaller" << endl;
    }
    else{
        cout << "box1 is smaller" << endl;
    }

}

