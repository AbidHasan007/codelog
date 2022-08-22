/*
To find unique value of vector/array
first sort the vector using sort() function
second find the unique value using unique() function
then resize the vector using resize() funciton
*/
#include<bits/stdc++.h>
using namespace std;
#define ALL(x)x.begin(),x.end() //defining vector iteration begin to end
#define UNIQUE(c) (c).resize(unique(ALL(c))-(c).begin()) // resize the sorted vector

int main()
{
    vector<int> v={5,4,4,4,3,1,5,5,6,7,7};
    sort(ALL(v));
    UNIQUE(v);
    for(auto &x:v) printf("%d\n",x);
    return 0;
}