#include<bits/stdc++.h>
using namespace std;

void bubble_sort(vector<int>&v1){
    int n=v1.size();
    for(int i=0;i<n-1;++i){
        for(int j=0;j<n-i-1;++j){
            
            if(v1[j]>v1[j+1]){
             swap(v1[j],v1[j+1]);
            }
            else{
                
            }
        }
    }
}

int main(){
int n;
cout<<"Enter the no. of elements"<<endl;
cin>>n;
vector<int>v1(n);
cout<<"Enter the elements "<<endl;
for(int i=0;i<n;++i){
cin>>v1[i];
}
bubble_sort(v1);
for(auto i:v1){
cout<<i<<endl;
}
}
  
  

  
