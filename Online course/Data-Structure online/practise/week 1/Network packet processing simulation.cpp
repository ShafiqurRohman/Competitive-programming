#include<bits/stdc++.h>
#define dbug printf("I am here\n");
#define Fast ios_base::sync_with_stdio(false); cin.tie(0);
#define vs              v.size()
#define sot(v)        sort(v.begin(),v.end())
#define rev(v)        reverse(v.begin(),v.end())
#define ii                pair<int,int>
#define ll                long long
#define ull              unsigned long long
#define pb              push_back
#define mpp          make_pair
#define Okay         0
#define pi               3.14159

const int inf = 1e9;
const int cont = 1e9+7;
using namespace std;

struct Request {
    int arrival_time;
    int process_time;
    Request(int _arrival_time, int _process_time){
        arrival_time = _arrival_time;
        process_time = _process_time;
    }
};


struct Response {
    bool dropped;
    int start_time;
    Response(bool _dropped, int _start_time){
        dropped = _dropped;
        start_time = _start_time;
    }
};


class Buffer {
    public:
        Buffer(int size):
            size_(size),
            finish_time_()
        {}

        Response Process(const Request &request) {
            //write your code here
            while (!finish_time_.empty()) {
                if (finish_time_.front() <= request.arrival_time)
                    finish_time_.pop();
                else
                    break;
            }

            if (finish_time_.size() == size_)
                return Response(true, -1);

            if (finish_time_.empty()){
                finish_time_.push(request.arrival_time + request.process_time);
                return Response(false, request.arrival_time);
            }

            int last_element = finish_time_.back();
            finish_time_.push(last_element + request.process_time);
            return Response(false, last_element);
        }
    private:
        int size_;
        queue <int> finish_time_;
};


int main() {
    int S;
    cin >> S;
    vector <Request> requests;
    int N;
    cin>>N;
    int a, b;
    for(int i=0; i<N; i++){
        cin>>a>>b;
        requests.pb(Request(a,b));
    }

    Buffer buffer(S);

    vector <Response> responses;
     for (int i = 0; i < N; ++i){
        responses.pb(buffer.Process(requests[i]));
     }

    for(int i=0; i<N; i++){
         cout << (responses[i].dropped ? -1 : responses[i].start_time) << endl;
    }

    return Okay;
}

