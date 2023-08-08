#include <iostream> //preprocessor directive

#define PI 3.14 // macros

int a = 30;

using namespace std;

int func(int a)
{
    cout << a << endl;
}

int func1()
{
    cout << a << endl;
}

inline int getMax(int a, int b)
{
    return a > b ? a : b;
}

// default arguments
void print(int arr[], int n=5, int start = 0)
{
    for (int i = start; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
//invalid case of default arguments
// void print(int arr[], int n=0, int start)
// {
//     for (int i = start; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

int main()
{
    cout << PI << endl;
    cout << a << endl;
    func(a);
    func(1);
    func1();
    int ans = getMax(300, 200);
    cout << "ans: " << ans << endl;
    int arr[] = {1, 2, 3, 4, 5};
    print(arr, 5);
    print(arr, 5, 3);

}