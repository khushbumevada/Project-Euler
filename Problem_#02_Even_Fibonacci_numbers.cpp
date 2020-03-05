#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long long n;
        cin >> n;
        long long t1 = 0, t2 = 1, nextTerm;
        long long sum = 0;
        for(int i = 1; t1 <= n; i++) {
            if(t1 % 2 == 0) {
                sum += t1;
            }
            nextTerm = t1 + t2;
            t1 = t2;
            t2 = nextTerm;
        }
        printf("%lld\n", sum);
    }
    return 0;
}

