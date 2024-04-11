#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class A
{
    public:
        A(){
            callA = 0;
        }
    private:
        int callA;
        void inc(){
            callA++;
        }

    protected:
        void func(int & a)
        {
            a = a * 2;
            inc();
        }
    public:
        int getA(){
            return callA;
        }
};

class B{
    public:
        B(){
            callB = 0;
        }
    private:
        int callB;
        void inc(){
            callB++;
        }
    protected:
        void func(int & a)
        {
            a = a * 3;
            inc();
        }
    public:
        int getB(){
            return callB;
        }
};

class C{
    public:
        C(){
            callC = 0;
        }
    private:
        int callC;
        void inc(){
            callC++;
        }
    protected:
        void func(int & a)
        {
            a = a * 5;
            inc();
        }
    public:
        int getC(){
            return callC;
        }
};

class D : public A, public B, public C
{

    int val;
    public:
        //Initially val is 1
         D()
         {
             val = 1;
         }


         //Implement this function
         void update_val(int new_val)
         {
            std::cout<<"Value = "<<new_val<<std::endl;
            while(new_val % 2 == 0){
                new_val /= 2;
                A::func(val);
            }
            
            while(new_val % 3 == 0){
                new_val /= 3;
                B::func(val);
            }
            
            while(new_val % 5 == 0){
                new_val /= 5;
                C::func(val);
            }
            std::cout<<"A's func called "<<getA()<<" times"<<std::endl;
            std::cout<<"B's func called "<<getB()<<" times"<<std::endl;
            std::cout<<"C's func called "<<getC()<<" times"<<std::endl;
       // new_val = new_val * 5;
         }
         //For Checking Purpose
         void check(int); //Do not delete this line.
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int val_new;
    std::cin>>val_new;
    D d;
    d.update_val(val_new); 
    return 0;
}
