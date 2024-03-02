int findDuplicate(int A[])
{
    for(int i=0;i<7;i++){
        if(A[i]==A[i+1]) return A[i];
    }
}

//Optimal Way:
int findDuplicate(int A[])
{
    return (A[0]==A[4]?A[0]:A[5]);
}
