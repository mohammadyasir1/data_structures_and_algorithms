#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> printDivisors(int n){
        vector<int>v;

        for(int i=1; i*i<=n; i++) {
                if(n%i==0) {
                        v.push_back(i);
                        if(i!=n/i){
                                v.push_back(n/i);
                        }
                }
        }

        sort(v.begin(), v.end());
        return v;
}

void print(vector<int>arr, int size) {
        for(int i=0; i<size; i++) {
                cout<<arr[i]<<" ";
        }
        cout<<endl;
}

int main(){
        int n;
        cout<<"Enter the number: ";
        cin>>n;
        vector<int> temp = printDivisors(n);
        int size = temp.size();
        print(temp, size);

        return 0;
}
