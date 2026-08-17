#include <iostream>
#include <vector>
#include <set>
using namespace std;

vector<int> unionArray(vector<int>& a, vector<int>& b)
{
    int n1 = a.size();
    int n2 = b.size();
    int i = 0;
    int j = 0;
    vector<int> unionArr;
    while(i < n1 && j < n2)
    {
        if(a[i] < b[j])
        {
            if(unionArr.empty() || unionArr.back() != a[i]) // Avoid duplicates     
            unionArr.push_back(a[i]);
            i++;
        }
        else if(b[j] < a[i])
        {
            if(unionArr.empty() || unionArr.back() != b[j]) // Avoid duplicates
            unionArr.push_back(b[j]);
            j++;
        }
        else
        {
            if(unionArr.empty() || unionArr.back() != a[i]) // Avoid duplicates
            unionArr.push_back(a[i]);
            i++;
            j++;
        }
    }
    while(i < n1)
    {
        if(unionArr.empty() || unionArr.back() != a[i]) // Avoid duplicates
        unionArr.push_back(a[i]);
        i++;
    }
    while(j < n2)
    {
        if(unionArr.empty() || unionArr.back() != b[j]) // Avoid duplicates
        unionArr.push_back(b[j]);
        j++;
    }









    return unionArr;
}

int main()
{
    int n1, n2;

    cout << "Enter size of first array: ";
    cin >> n1;

    vector<int> a(n1);

    cout << "Enter elements of first array: ";
    for(int i = 0; i < n1; i++)
    {
        cin >> a[i];
    }

    cout << "Enter size of second array: ";
    cin >> n2;

    vector<int> b(n2);

    cout << "Enter elements of second array: ";
    for(int i = 0; i < n2; i++)
    {
        cin >> b[i];
    }

    vector<int> result = unionArray(a, b);

    cout << "Union Array: ";

    for(int x : result)
    {
        cout << x << " ";
    }

    return 0;
}