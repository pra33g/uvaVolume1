// #include <algorithm>
// #include <vector>
// using namespace std;
// int main(){
//     #ifndef ONLINE_JUDGE
//     freopen("inputs/i100.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
//     #endif
//     return 0;
// }
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int steps;
int problem(long long n){
    // cout << n << " ";
    steps++;
    if (n == 1) {
        return steps;
    }
    else if (n % 2) return problem(3 * n + 1) ;
    else return problem(n / 2);
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("inputs/i100.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    long _beg, _end;
    long beg, end;
    while (cin >> _beg >> _end){
        beg = _beg;
        end = _end;
        if (beg > end) swap(beg, end);
        vector<long> v;
        for(int i = beg; i <= end; i++){
            steps = 0;
            v.push_back(problem(i));
        }
        cout << _beg << " " << _end << " " << *max_element(v.begin(), v.end()) << endl;
    }
    return 0;
}
