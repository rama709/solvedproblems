 long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        int maxsum=INT_MIN,sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            maxsum=max(maxsum,sum);
            if(sum<0){
                sum=0;
            }
        }
       
        return maxsum;
        
    }
};
