#include <iostream>
#include<stack>
using namespace std;
// // Next Greater
// int main(){
//     int n;
//     cin>>n;
//     vector<int>v(n);
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     vector<int>ans(n);
//     stack<int>st;
//     for(int i=n-1;i>=0;i--){
//         while(st.size()!=0 && st.top()<=v[i]){
//             st.pop();
//         }
//         if(st.empty()){
//             ans[i]= -1;
//         }
//         else{
//                 ans[i]=st.top();
//         }
//         st.push(v[i]);
//     }
//     for(int i=0;i<n;i++){
//         cout<<ans[i]<<" ";
//     }
// }

// Previous Greater
// int main(){
//     int n;
//     cin>>n;
//     vector<int>v(n);
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     vector<int>ans(n);
//     stack<int>st;
//     for(int i=0;i<n;i++){
//         while(!st.empty() && st.top()<=v[i]){
//             st.pop();
//         }
//         if(st.empty()){
//             ans[i]= -1;
//         }
//         else{
//             ans[i]= st.top();
//         }
//         st.push(v[i]);
//     }
//     for(int i=0;i<n;i++){
//         cout<<ans[i]<<" ";
//     }
// }

// Next Smaller
// int main(){
//     int n;
//     cin>>n;
//     vector<int>v(n);
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     vector<int>ans(n);
//     stack<int>st;
//     for(int i=n-1;i>=0;i--){
//         while(!st.empty() && st.top()>=v[i]){
//             st.pop();
//         }
//         if(st.empty()){
//             ans[i]= -1;
//         }
//         else{
//             ans[i]=st.top();
//         }
//         st.push(v[i]);
//     }
//     for(int i=0;i<n;i++){
//         cout<<ans[i]<<" ";
//     }
// }

// Previus Smaller
// int main(){
//     int n;
//     cin>>n;
//     vector<int>v(n);
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     vector<int>ans(n);
//     stack<int>st;
//     for(int i=0;i<n;i++){
//         while(!st.empty() && st.top()>=v[i]){
//             st.pop();
//         }
//         if(st.empty()){
//             ans[i]= -1;
//         }
//         else{
//             ans[i]= st.top();
//         }
//         st.push(v[i]);
//     }
//     for(int i=0;i<n;i++){
//         cout<<ans[i]<<" ";
//     }
// }