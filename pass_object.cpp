#include<iostream>
using namespace std;

class rectangle{
    private:
        int length;
        int width;
    public:
        rectangle(int l=0,int w=0){
            length=l;
            width=w;
        }
        rectangle(rectangle *r){
            length=r->length;
            width=r->width;
        }
        void show(){
            cout<< (length*width)<<endl;
        }    
};

int main(){
    rectangle r1(5,4);
    r1.show();
    rectangle r2(&r1);
    r2.show();

}