#include<bits/stdc++.h>
#define dbug printf("I am here\n");
#define Fast ios_base::sync_with_stdio(false); cin.tie(0);
#define vs              v.size()
#define sot(v)        sort(v.begin(),v.end())
#define rev(v)        reverse(v.begin(),v.end())
#define ii                pair<int,int>
#define int              long long
#define ll                 long long
#define ull              unsigned long long
#define pb              push_back
#define mpp          make_pair
#define Okay         0
#define pi               3.14159

static int inf = 1e9;
const int cont = 10e6+7;
using namespace std;

class Worker {
	public:
		int id;
        long long nextFreeTime;
	    Worker (int id) {
            this->id = id;
            nextFreeTime = 0;
        }
};

struct WorkerCompare {
	bool operator()(const Worker &w1, const Worker &w2) const {
		if(w1.nextFreeTime == w2.nextFreeTime)
			return w1.id > w2.id;
		else
            return w1.nextFreeTime > w2.nextFreeTime;
	}
};

class JobQueue {
 private:
  int num_workers_;
  vector<int> jobs_;

  vector<int> assigned_workers_;
  vector<long long> start_times_;

  void WriteResponse() const {
    for (int i = 0; i < jobs_.size(); ++i) {
      cout << assigned_workers_[i] << " " << start_times_[i] << "\n";
    }
  }

  void ReadData() {
    int m;
    //freopen("02","r",stdin);
    cin >> num_workers_ >> m;
    jobs_.resize(m);
    for(int i = 0; i < m; ++i)
      cin >> jobs_[i];
  }

  void FastAssignJobs() {
	assigned_workers_.resize(jobs_.size());
    start_times_.resize(jobs_.size());
	priority_queue<Worker, vector<Worker>, WorkerCompare> pq;
	for(int i = 0; i < num_workers_; i++) {
		pq.push(Worker(i));

	}
	for (int i = 0; i < jobs_.size(); i++) {
		Worker freeThread = pq.top();
		pq.pop();
		assigned_workers_[i] = freeThread.id;
		start_times_[i] = freeThread.nextFreeTime;
		freeThread.nextFreeTime += jobs_[i];
		pq.push(freeThread);
	}
  }

 public:
  void Solve() {
    ReadData();
	FastAssignJobs();
    WriteResponse();
  }
};

int32_t main() {
  Fast;
  JobQueue job_queue;
  job_queue.Solve();
  return Okay;
}

