#include <bits/stdc++.h>
using namespace std;

int main() {
    int len, n;
    cin >> len >> n;

    set<int> st;
    multiset<int> gaps;

    st.insert(0);
    st.insert(len);
    gaps.insert(len);

    while (n--) {
        int p;
        cin >> p;

        auto it = st.upper_bound(p);
        int next = *it;
        --it;
        int prev = *it;

        st.insert(p);
        gaps.erase(gaps.find(next - prev));
        gaps.insert(next - p);
        gaps.insert(p - prev);

        cout << *gaps.rbegin() << ' ';
    }

    return 0;
}
