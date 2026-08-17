#include <iostream>
#include <vector>
#include <set>
using namespace std;

vector<int> unionArray(vector<int>& a, vector<int>& b)
{
    set<int> st;

    // Insert elements of first array
    for(int i = 0; i < a.size(); i++)
    {
        st.insert(a[i]);
    }

    // Insert elements of second array
    for(int i = 0; i < b.size(); i++)
    {
        st.insert(b[i]);
    }

    vector<int> ans;

    // Copy set elements to vector
    for(auto it : st)
    {
        ans.push_back(it);
    }

    return ans;
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