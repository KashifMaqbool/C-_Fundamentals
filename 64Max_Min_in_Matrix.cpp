#include<iostream>
using namespace std;
int main(){
    // int arr[3][3], i,j,max, min;
    // for(i=0; i<3; i++){
    //     for(j=0; j<3; j++){
    //         cout<<"Enter value row "<<i<<" and column "<<j<<" = ";
    //         cin>>arr[i][j];
    //     }
    // }
    // cout<<"Array in Matrix Form."<<endl;
    // for(i=0; i<3; i++){
    //     for(j=0; j<3; j++){
    //         cout<<arr[i][j]<<"\t";
    //     }
    //     cout<<endl;
    // }
    // max=min=arr[0][0];
    // for(i=0; i<3; i++){
    //     for(j=0; j<3; j++){
    //         if(max<arr[i][j]){
    //             max = arr[i][j];
    //         }
    //         if(min>arr[i][j]){
    //             min= arr[i][j];
    //         }
    //     }
    // }
    // cout<<"Maximum Number is : "<<max<<endl;
    // cout<<"Minimum Number is : "<<min<<endl;


    int arr[3][3], i,j,max,max_r, max_c, min,min_r, min_c;
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            cout<<"Enter value row "<<i<<" and column "<<j<<" = ";
            cin>>arr[i][j];
        }
    }
    cout<<"Array in Matrix Form."<<endl;
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }
    max=min=arr[0][0];
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            if(max<arr[i][j]){
                max = arr[i][j];
                max_r= i;
                max_c= j;
            }
            if(min>arr[i][j]){
                min= arr[i][j];
                min_r= i;
                min_c= j;
            }
        }
    }
    
    cout<<"Maximum Number is : "<<max<<endl;
    cout<<"Location of max: ["<<max_r+1<<"]["<<max_c+1<<"]"<<endl;  // understand why 1 is added with max_r and max_c
    cout<<"Minimum Number is : "<<min<<endl;
    cout<<"Location of min: ["<<min_r+1<<"]["<<min_c+1<<"]"<<endl;
}