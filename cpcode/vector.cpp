#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    vector<int>v;
    
//geting input from user to store data in vector

     cin>>n;
     for(int i =0; i<n; i++)
     {
        int a;
        cin>>a;
        v.push_back(a);
     }
//printing all the element of a vector
    
   for(int i = 0; i<n; i++)
    {

        cout<<v[i]<<" ";
    }
    cout<<"\n";
    

//printing vector
 cout<<v[2]<<"\n";
 //printing vector size
 cout<<v.size()<<"\n";
 //declaring vector iterator
 vector<int>::iterator it;
//printing vector value using vector iterator

for(it=v.begin(); it != v.end(); it++)
{
    cout<<*it<<" ";
}
cout<<"\n";
//printing vector using for each loop
 cout<<"---------------------------- \n";
 cout<<"printing vector using for each loop \n";
 for(auto u:v)
  {
    cout<<u<<" ";
  }
  cout<<"\n";
    return 0;
}