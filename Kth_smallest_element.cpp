int kthSmallest(int arr[], int l, int r, int k) {
    
  /*  priority_queue<int> pq;
    for(int i=0;i<r+1;i++)
    {
        pq.push(arr[i]);
        
    }
    for(int i=0;i<k;i++)
    {
        pq.pop();
        
    }
    
    return pq.top(); */
    
    
    sort(arr,arr+r+1);
    return arr[k-1];
}
