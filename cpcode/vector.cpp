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

  //sorting a vector
  vector<int>a={5,1,3,2,4};
  sort(a.begin(),a.end());
  for(int u:a)cout<<u<<" "; //printing vector less than to greater than
  cout<<"\n";
  
  sort(a.begin(),a.end(),greater<int>());
  cout<<"------------------------------ \n";
  for(int u:a)cout<<u<<" "; //printing vector greater than to less than
  cout<<"\n";
    return 0;
}