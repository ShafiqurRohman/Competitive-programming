    #include<bits/stdc++.h>
    #define dbug printf("I am here\n");
    #define Fast ios_base::sync_with_stdio(false); cin.tie(0);
    #define vs            v.size()
    #define ss             s.size()
    #define be            v.begin(),v.end()
    #define pii             pair<int,int>
    #define ll               long long
    #define pb             push_back
    #define mpp            make_pair
    const int m = 10000;
    using namespace std;
    int ar[m];

    void makeMerge(int l, int mid, int r){
        int lsize = mid-l+1;//eikhane 1 besi deyar karon index 1 kom thake.
        int rsize = r-mid;

        int la[lsize];
        int ra[rsize];
        for(int i =0;i<lsize;i++)la[i] = ar[l+i];//mid er left er element gula ami array la te rakhi.
        for(int i =0;i<rsize;i++)ra[i] = ar[mid+1+i];//mid er right er element gula ami array ra te rakhi.

        int i = 0;
        int j =0;
        int k = l;
        while(i < lsize && j < rsize){//je kono akta array shesh na hoyar porjonto compare kore mul array te rakhi.
            if(la[i]<ra[j]){
                ar[k++] = la[i++];
            }
            else {
                ar[k++] = ra[j++];
            }
        }

        while (i < lsize) {//left array te jodi kono element jodi compare er por baki thake sigula mul array te rakhi.
        ar[k++] = la[i++];
    }
        while (j < rsize) {//right array te jodi kono element jodi compare er por baki thake sigula mul array te rakhi.
        ar[k++] = ra[j++];
    }

}


    void marge(int l, int r){
        if(l >= r){
            return;
        }
        int mid = l+(r-l)/2;

        marge(l, mid);
        marge(mid+1, r);

        makeMerge(l,mid,r);
    }


    void printar(int n){
        for(int i = 0;i<n;i++){
            cout<<ar[i]<<" ";
        }
        cout<<endl;
    }

    int main(){
       int n;

       cin>>n;
       for(int i=0;i<n;i++){
        cin>>ar[i];
       }
       marge(0,n-1);
       printar(n);

    return 0;
    }

