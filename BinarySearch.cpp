//二分查找
#include<iostream>
using namespace std;

int BinarySearch(double ary[],int n);
int main(){
    double ary[]={1,2,3,4,5,34,45,65,78};
    int m=BinarySearch(ary,34);
    cout<<m<<endl;
    system("pause");
    return 0;
}

//二分查找的非递归算法
int BinarySearch(double ary[],int n){
    int low=0,high=8;
    while(high>=low){
        int mid=(low+high)/2;
        if(mid=n){return n;}
        else if(mid<n){
            high=mid-1;
        }else{
            low=mid+1;
        }
    return 0;
    }

}