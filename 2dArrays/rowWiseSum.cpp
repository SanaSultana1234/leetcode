#include <iostream>
#include <limits.h>
using namespace std;

int main() {
    int arr[4][3];
    int m=4, n=3, row, sum, col, ansIndex, maxi, i, j;
    for(i=0; i<m; i++) {
        for(j=0; j<n; j++) {
            cin>>arr[i][j];
        }
    }

    for(i=0; i<m; i++) {
        for(j=0; j<n; j++) {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //Row wise sum
    for(row=0; row<m; row++) {
        sum=0;
        for(col=0; col<n; col++) {
            sum+=arr[row][col];
        }
        cout<<"Sum of row "<<row<<" is: "<<sum<<endl;
    }
    cout<<endl;

    //column wise sum
    for(col=0; col<n; col++) {
        sum=0;
        for(row=0; row<m; row++) {
            sum+=arr[row][col];
        }
        cout<<"Sum of col "<<col<<" is: "<<sum<<endl;
    }
    cout<<endl;

    //largest row sum
   maxi=INT_MIN, ansIndex=-1;
    for( row=0; row<m; row++) {
        sum=0;
        for(col=0; col<n; col++) {
            sum+=arr[row][col];
        }
        if(sum>maxi) {
            maxi=sum;
            ansIndex=row;
        }
    }
    cout<<"Maximum Sum of row "<<ansIndex<<" is: "<<maxi<<endl;
}