#include <bits/stdc++.h>
using namespace std;


int main()
{   
    // min heap
    priority_queue<int,vector<int>,greater<int>>pq;
    
    // max heap
    // priority_queue<int> pq;
    
    while(true){
        int c;
        cin>>c;
        if(c==0){
            int x;
            cin>>x;
            pq.push(x);  //O(logn)
        }else if(c==1){
            pq.pop(); //O(logn)
        }else if(c==2){
            cout<<pq.top()<<endl; //O(1)
        }else{
            break;
        }
    }

  return 0;
}