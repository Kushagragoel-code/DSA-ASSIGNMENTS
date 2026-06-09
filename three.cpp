// #include<iostream>
// #include<stack>
// using namespace std;
// int main(){
//     stack<int> s;
//     int n =6;
    
//     int arr[6];
//     for(int i =0;i<n;i++){
//         cin>>arr[i];
//     }
//     int maxi =0;
//     for(int i =n-1;i>=0;i--){
//         if(arr[i]<maxi){
//             s.push(maxi);
//         }else{
//             s.push(-1);
//             maxi=arr[i];

//         }
        
//     }
//     for(int i =0;i<n;i++){
//         cout<<s.top()<<" ";
//         s.pop();
//     }
   



    


// }
// #include<iostream>
// #include<stack>
// using namespace std;

// int main(){
//     stack<int> s;
//     int n = 6;
    
//     int arr[6];
//     for(int i = 0; i < n; i++){
//         cin >> arr[i];
//     }
    
//     int max1 = -1; 
//     int max2 = -1;
    
//     for(int i = n - 1; i >= 0; i--){
//         if(arr[i] < max2){
//             s.push(max2);
//         } else {
//             s.push(-1);
//         }
        
//         if(arr[i] > max1){
//             max2 = max1;      
//             max1 = arr[i];     
//         } else if(arr[i] > max2){
//             max2 = arr[i];    
//         }
//     }
    
//     for(int i = 0; i < n; i++){
//         cout << s.top() << " ";
//         s.pop();
//     }
    
// }





// #include<iostream>
// using namespace std;

// int main(){
//     int n = 6;
//     int arr[6];
//     for(int i = 0; i < n; i++){
//         cin >> arr[i];
//     }
    
//     int maxi = -1; 
//     int ans[6]; 
    
//     for(int i = 0; i < n; i++){
//         if(arr[i] < maxi){
//             ans[i] = maxi;
//         } else {
//             ans[i] = -1;
//             maxi = arr[i];
//         }
//     }
    
//     for(int i = 0; i < n; i++){
//         cout << ans[i] << " ";
//     }
    
//     return 0;
// }



