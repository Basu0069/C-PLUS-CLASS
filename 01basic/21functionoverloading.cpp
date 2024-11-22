#include<iostream>
using namespace std;

template<class T1, class T2>
int find(T1 c[], int s, T2 d){
for(int i =0;i<s;i++){
    if(c[i]==d){
        return i;
    }
}
    return -1;
}
int main(){

    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);

    int target =9;
    int index=find(arr,size,target);

    if(index != -1){
        cout<<"element found at"<<index<<endl;
    }
    else{
        cout<<"element not found"<<endl;
    }


    return 0;
}

