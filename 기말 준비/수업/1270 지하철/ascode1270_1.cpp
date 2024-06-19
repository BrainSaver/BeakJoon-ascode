#include <iostream>
using namespace std;
#define Max 100
 
struct speed_train
{
    int si[Max], vi[Max];
};
 
int find_min(int si[], int vi[], int n)
{
    int min_of_si = si[0]; // !!!!초기 최소값은 항상 배열의 첫번째 항으로 하도록 한다
    int result = 0;
    for (int i = 0; i < n; i++)
    {
        if (si[i] < min_of_si)
        {
            min_of_si = si[i];
            result = i;
        }
    }
    return result;
}
 
int main()
{
    int t, n, m, min;
    struct speed_train train;
    cin >> t;
    for (int i = 0; i < t; i++) 
    {
        cin >> n >> m;
        for (int i = 0; i < n; i++)
        {
            cin >> train.si[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> train.vi[i];
        }
        for (int i = 0; i < m; i++)
        {
            min = find_min(train.si, train.vi, n);
            train.si[min] += train.vi[min];
        }
        cout << train.si[find_min(train.si, train.vi, n)] << endl;
    }
}