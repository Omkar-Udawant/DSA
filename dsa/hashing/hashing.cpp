#include <iostream>
#include<vector>
#include <algorithm>   // For swap()
using namespace std;


int main(){
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //precompute frequency array
    int hash[13] = {0};
    for (int i=0;i<n;i++){
        hash[arr[i]]+=1;

    }
    int q;
    cin>>q;
    while (q--)
    {
        int number;
        cin>>number;
        cout<<hash[number]<<endl;
        /* code */
    }
    return 0;
    
}