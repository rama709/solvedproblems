{
    return x>y?x:y;
}
int min(int x, int y)
{
    return x<y?x:y;
}
long long maxArea(long long A[], int len)
{
    // Your code goes here
    int l=0,r=len-1,area=0;
    while(l<r)
    {
        area=max(area, min(A[l],A[r])*(r-l));
        if(A[l]<A[r])
        {
            l++;
        }else{
            r--;
        }
    }
    return area;
}
