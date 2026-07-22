#include <iostream>
#include <algorithm>   // For swap()
using namespace std;

int f(int n){
    int last =f(n-1);
    int slast=(n-2);
    return last+slast;
}

int main()
{
    cout<<f(4);
    return 0;

}

