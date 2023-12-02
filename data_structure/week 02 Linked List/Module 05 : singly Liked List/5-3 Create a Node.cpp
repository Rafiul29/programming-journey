#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int value;
     Node* next;
};
int main()
{
    Node a,b;
    a.value=20;
    b.value=30;
    a.next=&b;
    b.next=NULL;

    cout<<a.value<<endl;
    // cout<<b.value<<endl;
    cout<<a.next->value<<endl;
    return 0;
}