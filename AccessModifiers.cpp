#include<iostream>
using namespace std;
class accessModifiers{
    private:
    int x=10;
    public:
    int y=12;
    protected:
    int z=14;
    public:
    void showdata(){
        cout<<"Private x: "<<x<<endl;
        cout<<"Public y: "<<y<<endl;
        cout<<"protected z: "<<z<<endl;

    }

};
class derived:public accessModifiers{
    public:
    void showDervied(){
        //cout<<"private x"<<x<<endl; this line will show error
        cout<<"protected z D: "<<z<<endl;
        cout<<"public y D: "<<y<<endl;

    }

};
int main(){
    accessModifiers obj;
    obj.showdata();
    cout<<obj.y<<endl;

    derived oj;
    oj.showdata();



}