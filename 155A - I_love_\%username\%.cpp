    #include <bits/stdc++.h>
    using namespace std;
     
    int main()
    {
        // input and allocation of memory
        int n;
        cin >> n;
        int *arr = new int[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
     
        // logic
        int min = arr[0];
        int max = arr[0];
        int count = 0;
        for (int i = 1; i < n; i++)
        {
            if (arr[i] > max)
            {
                count += 1;
                max = arr[i];
            }
            else if (arr[i] < min)
            {
                count += 1;
                min = arr[i];
            }
        }
     
        cout << count << endl;
     
        // deallocartion of memory
        delete[] arr;
        return 0;
    }
