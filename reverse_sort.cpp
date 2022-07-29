#include <bits/stdc++.h>
using namespace std;
int reversesort(vector<int> &l)
{
    int cost = 0;
    for (int i = 0; i < l.size() ; i++)
    {
        int m = *min_element(l.begin() + i, l.end());
        auto x = find(l.begin(), l.end(), m);
        reverse(l.begin() + i, x + 1);
        cost += distance(l.begin(), x) - i + 1;
        printf("%d ",cost);
    }
  printf("\n");
    return cost;
}
int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("outp.txt", "w", stdout);
    int t;
    cin >> t;
    vector<int> l;
    for (int c = 1; c < t + 1; c++)
    {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            l.push_back(num);
        }
        cout << "Case #" << c << " " << reversesort(l) << "\n";
    }
}