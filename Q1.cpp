#include <iostream>



using namespace std;

bool sum3numbers(int arr[], int n, int num)
{
    int i,k,r;
    for(i=0;i<n-2;i++){
    k=i+1;
    r=n-1;
    while(k<r){
            int sum=arr[i]+arr[k]+arr[r];
        if(sum>num){
            k++;
        }else if(sum<num){
            r--;
        }else if(sum==num){
        return true ;}
    }

    }
    return false;
}


int main(  )
{
    int n,i,j,k,m;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
     for (int j = 0; j < n; j++)
    {

      for (int k = 0; k < n - j - 1; k++)
      {
        if (arr[k] <= arr[k + 1])
        {
          swap(arr[k], arr[k + 1]);
        }
      }
    }
    /* for(i=0;i<n;i++){
        cout<<arr[i];
    }*/
    cin>>m;
    int num;
    for(i=0;i<m;i++){
        cin>>num;
        bool ans=false;
        ans=sum3numbers( arr, n, num);
        if(ans){
            cout<<"Yes"<<"\n";
        }else{
            cout<<"No"<<"\n";
        }

    }
    return 0;

}


