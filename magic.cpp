#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        stack<char> main;
        stack<char> ltr;

        int n;
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            char s;
            cin >> s; // R G B only__________

            if (ltr.empty())
            {
                ltr.push(s);
            }
            else
            {
                if (ltr.top() == 'R' && s == 'G')
                {
                    if (ltr.top() == 'Y')
                    {
                        ltr.pop();
                    }
                    else
                    {
                        ltr.push('Y');

                        if (main.empty())
                        {
                            main.push(ltr.top());
                            ltr.pop();
                        }else{
                            if (main.top() == ltr.top())
                            {
                                main.pop();
                            }else{
                                main.push(ltr.top());
                                ltr.pop();
                            }  
                        }
                    }
                }
                else if (ltr.top() == 'G' && s == 'R')
                {
                    if (ltr.top() == 'Y')
                    {
                        ltr.pop();
                    }
                    else
                    {
                        ltr.push('Y');

                        if (main.empty())
                        {
                            main.push(ltr.top());
                            ltr.pop();
                        }else{
                            if (main.top() == ltr.top())
                            {
                                main.pop();
                            }else{
                                main.push(ltr.top());
                                ltr.pop();
                            }  
                        }
                    }
                }

                if (ltr.top() == 'R' && s == 'B')
                {
                    if (ltr.top() == 'P')
                    {
                        ltr.pop();
                    }
                    else
                    {
                        ltr.push('P');

                        if (main.empty())
                        {
                            main.push(ltr.top());
                            ltr.pop();
                        }else{
                            if (main.top() == ltr.top())
                            {
                                main.pop();
                            }else{
                                main.push(ltr.top());
                                ltr.pop();
                            }  
                        }
                    }
                }
                else if (ltr.top() == 'B' && s == 'R')
                {
                    if (ltr.top() == 'P')
                    {
                        ltr.pop();
                    }
                    else
                    {
                        ltr.push('P');

                        if (main.empty())
                        {
                            main.push(ltr.top());
                            ltr.pop();
                        }else{
                            if (main.top() == ltr.top())
                            {
                                main.pop();
                            }else{
                                main.push(ltr.top());
                                ltr.pop();
                            }  
                        }
                    }
                }

                if (ltr.top() == 'B' && s == 'G')
                {
                    if (ltr.top() == 'C')
                    {
                        ltr.pop();
                    }
                    else
                    {
                        ltr.push('C');

                        if (main.empty())
                        {
                            main.push(ltr.top());
                            ltr.pop();
                        }else{
                            if (main.top() == ltr.top())
                            {
                                main.pop();
                            }else{
                                main.push(ltr.top());
                                ltr.pop();
                            }  
                        }
                    }
                }
                else if (ltr.top() == 'G' && s == 'B')
                {
                    if (ltr.top() == 'C')
                    {
                        ltr.pop();
                    }
                    else
                    {
                        ltr.push('C');

                        if (main.empty())
                        {
                            main.push(ltr.top());
                            ltr.pop();
                        }else{
                            if (main.top() == ltr.top())
                            {
                                main.pop();
                            }else{
                                main.push(ltr.top());
                                ltr.pop();
                            }  
                        }
                    }
                }
            }
        }

        // main.push(ltr.top());
        // ltr.pop();

        while (!main.empty())
        {
            cout << main.top();
            main.pop();
        }
        cout << endl;
    }
    return 0;
}