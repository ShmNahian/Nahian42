#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class base
{
private:
    int pr_va = 100;
protected:
    int p_v = 200;
public:
    friend void siam(base&obj);
};
void siam(base&obj)
{
    cout<<"Private Variable : "<<obj.pr_va+10<<endl;
    cout<<"Protected Variable : "<<obj.p_v+10<<endl;
}
int main()
{
    base a;
    siam(a);
    return 0;
}
