#include<bits/stdc++.h>
#define dbug printf("I am here\n");
#define Fast ios_base::sync_with_stdio(false); cin.tie(0);
#define vs             v.size()
#define ss             s.size()
#define sot(v)       sort(v.begin(),v.end())
#define rev(v)       reverse(v.begin(),v.end())
#define ii             pair<int,int>
#define ll               long long
#define ull             unsigned long long
#define pb             push_back
#define mpp          make_pair
#define Okay         0

    const int m = 10+10e3;
    using namespace std;


    int get_max_index (vector<int> weights, vector<int> values) {
    int max_i = 0;
    double max = 0;

    for (int i = 0; i < weights.size(); i++) {
        if (weights[i] != 0 && (double)values[i]/weights[i] > max) {
            max = (double)values[i]/weights[i];
            max_i = i;
        }
    }
    return max_i;
}

double get_optimal_value(int capacity, vector<int> weights, vector<int> values) {
    double value = 0.0;

    for (int i = 0; i < weights.size(); i++) {
        if (capacity == 0) return value;
        int index = get_max_index(weights, values);
        int a = min(capacity, weights[index]);
        value += a * (double)values[index]/weights[index];
        weights[index] -= a;
        capacity -= a;
    }

    return value;
}


int main() {
    int n;
    int capacity;
    cin >> n >> capacity;
    vector<int> values(n);
    vector<int> weights(n);
    for (int i = 0; i < n; i++) {
        cin >> values[i] >> weights[i];
    }

    double optimal_value = get_optimal_value(capacity, weights, values);

    cout.precision(10);
    cout << optimal_value << endl;

    return Okay;
}

