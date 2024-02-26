int maximumFrequency(vector<int> &arr, int n)
{
    //Write your code here
    unordered_map<int,int> m;
    int maxfreq = 0; //or max frequency
    int ans  = 0;
    for(int i = 0;i<arr.size();i++){
       m[arr[i]]++;
       maxfreq = max(maxfreq,m[arr[i]]);
    }
    int maxi = INT_MIN;
    int mini = INT_MAX;


    for(int i = 0;i<arr.size();i++){
        if(maxfreq == m[arr[i]]){
          ans = arr[i];
          break;
        }
    }
    
    return ans;
    
}
