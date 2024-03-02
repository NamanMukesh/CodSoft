#include <iostream>
class sample;
class test
{
    int a;
    public:
    set1()
    {
        return a=623;
    }
    friend modify(test,sample);
};
class sample
{
    int b;
    public:
    set2()
    {
        int b=333;
        return b=s1.a;
    }
}
int main(){
    sample s1;
    cout<<s1.set2;
}
