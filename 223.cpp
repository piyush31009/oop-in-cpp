#include<iostream>
using namespace std;
class Nest{};
class Display:private Nest{
    private:
    int s;
    public:
    void sum(int a,int b)
    {
        s=s+a;
    }
    void show(){
        cout<<s;
    }
};
int main()
{Display n;
    n.sum(12,10);
    n.show();
}