class Solution {
public:
    double Pow(double x, long long n)
    {
        if(n==0) return 1.0;
        if(n==1) return x;

        if(n%5==0) return Pow(x*x*x*x*x,n/5);
        if(n%2==0) return Pow(x*x,n/2);
        if(n%3==0) return Pow(x*x*x,n/3);


        return x*Pow(x,n-1);
        
    }


public:
    double myPow(double x, int n) {
        
        long long N=n;

        if(N<0)
        {
            x=1/x;
            N=-N;
        }

        return Pow(x,N);
        
    }
};