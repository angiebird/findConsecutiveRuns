#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <vector>

using namespace std;
typedef vector<int> vi;

vi findConsecutiveRuns(vi in){
    int ascend = 0;
    int descend = 0;
    vi out;
    for(int i = 1; i < in.size(); i++){
        if(in[i] == in[i-1]+1){
            ascend++;
        }
        else{
            ascend=0;
        }
        if(in[i] == in[i-1]-1){
            descend++;
        }
        else{
            descend=0;
        }
        if(ascend >= 2 || descend >= 2){
            out.push_back(i-2);
        }
    }
    return out;
}
int main(){
    int arr[] = {1, 2, 3, 5, 10, 9, 8, 9, 10, 11, 7};
    vi in(arr, arr+11);
    vi out = findConsecutiveRuns(in);
    cout<<"{";
    for(int i = 0; i < out.size(); i++){
        if(i)
            cout<<", ";
        cout<<out[i];
    }
    cout<<"}\n";
}
