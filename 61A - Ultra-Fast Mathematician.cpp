    #include <bits/stdc++.h>
    using namespace std;
     
    int main()
    {
        // input section
        string s1, s2;
        cin >> s1 >> s2;
     
        for (int i = 0; i < s1.length(); i++)
        {
            if (s1[i] != s2[i])
                s1[i] = '1';
            else
                s1[i] = '0';
        }
     
        // output
        cout << s1 << endl;
        return 0;
    }
