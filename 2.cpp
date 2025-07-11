#include <bits/stdc++.h>
using namespace std;

// ---------- PAIR ----------
void explainPair() {
    // Simple pair of two integers
    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second << endl;  // Output: 1 3

    // Nested pair (pair inside a pair)
    pair<int, pair<int, int>> p1 = {1, {3, 4}};
    cout << p1.first << " " << p1.second.second << " " << p1.second.first << endl;  // Output: 1 4 3

    // Array of pairs
    pair<int, int> ar[] = {{1, 2}, {3, 4}, {5, 6}};
    cout << ar[1].first << endl;  // Output: 3
}

// ---------- VECTOR ----------
void explainVector() {
    // Empty vector and push elements
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);  // faster than push_back

    // Vector of pairs
    vector<pair<int, int>> v1;
    v1.push_back({1, 2});
    v1.emplace_back(3, 4);

    // Vector with fixed size and value
    vector<int> v2(5, 100);  // [100, 100, 100, 100, 100]

    // Vector copy
    vector<int> v3(v2);  // copy of v2

    // Vector with default size (garbage values)
    vector<int> v4(5);  // [0, 0, 0, 0, 0]

    // Accessing elements
    cout << v[1] << " ";        // 2
    cout << v.back() << " ";    // 2

    // Traversing vector
    for (auto it = v.begin(); it != v.end(); it++) cout << *(it) << " ";  // 1 2
    for (auto it : v) cout << it << " ";                                  // 1 2

    // Erase single element
    v = {10, 20, 12, 23};
    v.erase(v.begin() + 1);  // removes 20

    // Erase range
    v = {10, 20, 12, 23, 35};
    v.erase(v.begin() + 2, v.begin() + 4);  // removes 12 and 23

    // Insert elements
    vector<int> v5(2, 100);  // [100, 100]
    v5.insert(v5.begin(), 300);           // [300, 100, 100]
    v5.insert(v5.begin() + 1, 2, 10);     // [300, 10, 10, 100, 100]

    // Insert from another vector
    vector<int> copy(2, 50);
    v5.insert(v5.begin(), copy.begin(), copy.end());

    // Size, pop, swap, clear, empty
    cout << v5.size();    // size
    v5.pop_back();        // remove last element

    vector<int> a = {10, 20}, b = {30, 40};
    a.swap(b);            // swap vectors
    v5.clear();           // remove all elements
    cout << v5.empty();   // check empty
}

// ---------- LIST ----------
void explainList() {
    // Doubly linked list
    list<int> ls;
    ls.push_back(2);     // [2]
    ls.emplace_back(4);  // [2, 4]
    ls.push_front(5);    // [5, 2, 4]
}

// ---------- DEQUE ----------
void explainDeque() {
    deque<int> dq;
    dq.push_back(1);     // [1]
    dq.emplace_back(2);  // [1, 2]
    dq.push_front(4);    // [4, 1, 2]
    dq.emplace_front(3); // [3, 4, 1, 2]
    dq.pop_back();       // remove 2
    dq.pop_front();      // remove 3

    cout << dq.back();   // 1
    cout << dq.front();  // 4
}

// ---------- STACK ----------   LIFO
void explainStack() {
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.emplace(5);

    cout << st.top();    // 5
    st.pop();            // remove 5
    cout << st.top();    // 3
    cout << st.size();   // 2
    cout << st.empty();  // false (0)

    stack<int> st1, st2;
    st1.swap(st2);       // swap stacks
}

// ---------- QUEUE ----------   FIFO
void explainQueue() {
    queue<int> q;
    q.push(1);
    q.push(2);
    q.emplace(4);        // [1, 2, 4]

    q.back() += 5;       // back becomes 9
    cout << q.back();    // 9

    cout << q.front();   // 1
    q.pop();             // remove 1
    cout << q.front();   // 2
}

// ---------- PRIORITY QUEUE ----------
void explainPQ() {
    // Max heap (default)
    priority_queue<int> pq;
    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.emplace(10);

    cout << pq.top();  // 10
    pq.pop();          // remove 10
    cout << pq.top();  // 8

    // Min heap
    priority_queue<int, vector<int>, greater<int>> mpq;
    mpq.push(5);
    mpq.push(2);
    mpq.push(8);
    mpq.emplace(10);

    cout << mpq.top();  // 2
}

// ---------- SET ----------
void explainSet() {
    set<int> st = {1, 2, 2, 4, 3};  // stores in sorted, unique

    auto it = st.find(3);  // returns iterator to 3
    st.erase(5);           // does nothing (5 not in set)

    int cnt = st.count(1);  // returns 1 if exists, else 0

    if (it != st.end()) st.erase(it);  // erase 3

    auto it1 = st.find(2);
    auto it2 = st.find(4);
    if (it1 != st.end() && it2 != st.end())
        st.erase(it1, it2);  // erase 2

    it = st.lower_bound(2);  // >= 2
    it = st.upper_bound(3);  // > 3
}

// ---------- MULTISET ----------
void explainMultiSet() {
    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);  // allows duplicates

    ms.erase(1);  // remov es all 1s

    ms.insert(1);
    ms.insert(1);
    ms.erase(ms.find(1));  // removes only one 1
}

// ---------- UNORDERED SET ----------
void explainUSet() {
    unordered_set<int> ust;
    ust.insert(1);
    ust.insert(2);
    ust.insert(3);  // unordered and unique
}

// ---------- MAP ----------
void explainMap() {
    map<int, int> mpp;
    mpp[1] = 2;
    mpp.emplace(3, 1);
    mpp.insert({2, 4});

    for (auto it : mpp)
        cout << it.first << " " << it.second << endl;

    // Map with pair as key
    map<pair<int, int>, int> pairMap;
    pairMap[{2, 3}] = 10;

    auto it = mpp.find(3);  // returns iterator to (3, 1)
    if (it != mpp.end())
        cout << it->second;

    it = mpp.lower_bound(2);  // >= 2
    it = mpp.upper_bound(3);  // > 3
}

// ---------- MULTIMAP ----------
void explainMultiMap() {
    multimap<int, string> mmap;
    mmap.insert({1, "A"});
    mmap.insert({1, "B"});  // allows duplicate keys
}

// ---------- UNORDERED MAP ----------
void explainUnorderedMap() {
    unordered_map<int, int> ump;
    ump[1] = 2;
    ump[3] = 4;
}

// ---------- COMPARATOR ----------
bool comp(pair<int, int> p1, pair<int, int> p2) {
    // sort by second ascending, if equal by first descending
    if (p1.second < p2.second) return true;
    if (p1.second > p2.second) return false;
    return p1.first > p2.first;
}

// ---------- EXTRA ----------
void explainExtra() {
    int a[] = {1, 3, 4, 2};

    // sort array ascending
    sort(a, a + 4);

    // sort array descending
    sort(a, a + 4, greater<int>());

    // sort vector
    vector<int> v = {3, 2, 1};
    sort(v.begin(), v.end());

    // sort using comparator
    pair<int, int> p[] = {{1, 2}, {2, 1}, {4, 1}};
    sort(p, p + 3, comp);

    // next permutation
    string s = "123";
    do {
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end()));

    // maximum element
    int maxi = *max_element(a, a + 4);
    cout << maxi; 
}

int main() {
    explainPair();
    explainVector();
    explainList();
    explainDeque();
    explainStack();
    explainQueue();
    explainPQ();
    explainSet();
    explainMultiSet();
    explainUSet();
    explainMap();
    explainMultiMap();
    explainUnorderedMap();
    explainExtra();

    return 0;
}
