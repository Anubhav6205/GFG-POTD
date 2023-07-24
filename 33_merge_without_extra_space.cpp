class Solution{
    public:
        //Function to merge the arrays.
        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            // code here 
            int start =0,end = n-1;
            while(start<m && end>=0)
            {
                if(arr1[end]>arr2[start])
                {
                    swap(arr1[end],arr2[start]);
                    start++;
                    end--;
                }
                else
                {
                    break;
                    
                }
            }
            sort(arr1,arr1+n);
            sort(arr2,arr2+m);
        } 
};