#include <iostream>
#include <string>
using namespace std;

int len(char arr[]) {
    int i;
    for(i=0; arr[i]!='\0'; i++) {}
    return i;
}


int main() {
    char arr[] = "Sanasultana";
    cout<<len(arr)<<endl;
}