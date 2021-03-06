#include<iostream>
using namespace std;

//solving using recursion
int maxPrice(int *wines,int i,int j,int day)
{
    ///base case
    if(i>j)
    {
        return 0;
    }

    /// rec case
    int op1 = wines[i]*day + maxPrice(wines,i+1,j,day+1);
    int op2 = wines[j]*day + maxPrice(wines,i,j-1,day+1);
    return max(op1,op2);
}

int main()
{

    int wines[] = {2,3,5,1,4};
    int n = 5;
    cout<<maxPrice(wines,0,n-1,1);

    return 0;
}
