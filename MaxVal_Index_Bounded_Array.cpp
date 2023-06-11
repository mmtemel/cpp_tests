class Solution {
public:
    //long sumArr(int arr[], int n)
    //{
    //    long t = 0;
    //    for(int i = 0; i < n; i++)
    //    {
    //        t += arr[i];
    //    }
    //    return t;
    //}
    long sumArr(long n)
    {
        return (n*(n+1)/2);
    }
    int maxValue(int n, int index, int maxSum)
    {
        int arr[n];
        int maxV;
        if(maxSum / n > 10)
            maxV = maxSum / n + n;
        else
            maxV = maxSum;
        for(int i = 0; i < n; i++)
            arr[i] = maxSum;
        while(sumArr(n) > maxSum && maxV > 0)
        {
            int i = 1;
            while(index - i >= 0 || index + i < n)
            {
                arr[index] = maxV;
                if(index - i >= 0)
                {
                    if(maxV-i > 0)
                        arr[index-i] = maxV-i;
                    else
                        arr[index-i] = 1;
                }
                if(index + i < n)
                {
                    if(maxV-i > 0)
                        arr[index+i] = maxV-i;
                    else
                        arr[index+i] = 1;
                }
                i++;
            }
            maxV--;
        }
        return arr[index];
    }
};