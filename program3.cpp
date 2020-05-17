#include <iostream> 
#include <string> 
#include <vector> 
#include <algorithm> 
using namespace std; 
  
int chk(string X, string Y) 
{ 
    
    string XY = X.append(Y); 
    string YX = Y.append(X); 
    return XY.compare(YX) > 0 ? 1: 0; 
} 
 
void max(vector<string> arr) 
{ 
    sort(arr.begin(), arr.end(), chk); 
    for (int i=0; i < arr.size() ; i++ ) 
        cout << arr[i]; 
} 
int main() 
{ 
    vector<string> arr; 
  
   int n,i;
   string s;
   cin>>n;
   for(i=0;i<n;i++)
   {
       cin>>s;
       arr.push_back(s);
   }
   max(arr);
 
   return 0; 
} 
