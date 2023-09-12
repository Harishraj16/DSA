#include <iostream>
using namespace std;
int main() {
    int n;
    int temp;
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=1;j<=n;j++){
            if(j+i<=n){
                temp = j+i ;
            }
            if(temp > n){
                temp = 1;
            }
            cout << temp << " ";
            temp++;
        }
        cout<<"\n";
    }
    return 0;
}
