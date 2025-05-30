
// Problem Statement – An automobile company manufactures both a two wheeler (TW) and a four wheeler (FW). A company manager wants to make the production of both types of vehicle according to the given data below:

// 1st data, Total number of vehicle (two-wheeler + four-wheeler)=v
// 2nd data, Total number of wheels = W
// The task is to find how many two-wheelers as well as four-wheelers need to manufacture as per the given data.
// Example :

// Input :
// 200  -> Value of V
// 540   -> Value of W

// Output :
// TW =130 FW=70

// Explanation:
// 130+70 = 200 vehicles
// (70*4)+(130*2)= 540 wheels

// Constraints :

// 2<=W
// W%2=0
// V<W
// Print “INVALID INPUT” , if inputs did not meet the constraints.

// The input format for testing 
// The candidate has to write the code to accept two positive numbers separated by a new line.

// First Input line – Accept value of V.
// Second Input line- Accept value for W.
// The output format for testing 

// Written program code should generate two outputs, each separated by a single space character(see the example)
// Additional messages in the output will result in the failure of test case


//Brute-force:

#include <bits/stdc++.h>
using namespace std;

int main() {
    int v,w;
    cout<<"Number of vehicles: ";
    cin>>v;
    cout<<"Number of wheels: ";
    cin>>w;
    int t=0,f=v;
    while((t+f)<=v){
        if((t*2+f*4) == w){
            cout<< "TW = " <<t<<endl<<"FW = "<<f;
            break;
        }
        t++;
        f--;
    }
    return 0;
}

//optimal:

#include <bits/stdc++.h>
using namespace std;

int main() {
    int v,w;
    cout<<"Number of vehicles: ";
    cin>>v;
    cout<<"Number of wheels: ";
    cin>>w;
    int x = (v*4-w)/2;
    if((w&1) || w<2 || w<=v){
        cout<<"INVALID INPUT";
        return 0;
    }
    cout<<"TW = "<< x << "\nFW = "<< v-x;
    return 0;
}
