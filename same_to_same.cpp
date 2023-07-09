#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack <int> st;
    queue <int> q;

    int n, m;
    cin >> n>>m;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        st.push(x);
    }

    for (int i = 0; i < m; i++)
    {
        int y;
        cin >> y;

        q.push(y);
    }
    
    int sz1 = st.size();
    int sz2 = q.size();

    if (sz1 != sz2)
    {
        cout<<"NO";
    }else{
        int flag = 1;

        while (!st.empty())
        {
            if (st.top() != q.front())
            {
                flag = 0;
            }
            st.pop();
            q.pop();
        }

        if (flag == 0)
        {
           cout<<"NO";
        }else{
            cout<<"YES";
        }
        
    }
    return 0;
}