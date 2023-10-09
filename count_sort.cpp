#include <iostream>
using namespace std;
class sort
{
    int getmax(int *arr, int n)
    {
        int mx = arr[0];
        for (int i = 1; i < n; i++)
        {
            if (arr[i] > mx)
            {
                mx = arr[i];
            }
        }

        return mx;
    }

public:
    void count_sort(int *arr, int n)
    {
        int k = getmax(arr, n);
        int *count = new int[k+1];
        int *b = new int[n];

        for (int i = 0; i <= k; ++i)
        {
            count[i] = 0;
        }
        for (int i = 0; i < n; i++)
        {
            count[arr[i]]++;
        }
        for (int i = 1; i <= k; i++)
        {
            count[i] = count[i] + count[i - 1];
        }
        for (int i = n - 1; i >= 0; i--)
        {
            b[--count[arr[i]]] = arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            arr[i] = b[i];
        }
    }
};

int main()
{
    int n;
    cout << "Enter the size of your list" << endl;
    cin >> n;

    int *arr = new int[n];
    cout << "Enter values of your list " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort s1;
    s1.count_sort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}