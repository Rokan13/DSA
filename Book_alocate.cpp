#include<bits/stdc++.h>
using namespace std;

bool isValid(vector<int> &arr, int n,int m,int maxAllowedpage)
{
    int student=1, page=0;
    for(int i = 0; i < n; i++){
            if(arr[i]> maxAllowedpage){
        return false;
    }

    if(page + arr[i] <= maxAllowedpage){
        page = page+arr[i];
    }else
    {
        student++;
        page=arr[i];
    }
 }
 return student > m? false: true;
}

int allocateBook(vector<int> &arr,int n,int m) {
  if(m>n){
    return -1;
}
int sum=0;
for(int i = 0; i < n; i++){
    sum+= arr[i];
}

int ans = -1;
int st = 0, end=sum;//range of posible ans

while(st<= end){
    int mid = st + (end - st)/2;

    if(isValid(arr,n,m,mid)){
        ans = mid;
        end = mid - 1;
    } else{
        st = mid + 1;
    }
 }
 return ans;
}

int main()
{
    vector<int> arr={ 2, 1, 3, 4};
    int n = 4, m = 2;

    cout<< allocateBook(arr,n,m)<<endl;

}
