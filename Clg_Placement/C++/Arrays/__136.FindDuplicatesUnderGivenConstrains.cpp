int findDuplicate(int A[])
{
    for(int i=0;i<7;i++){
        if(A[i]==A[i+1]) return A[i];
    }
}
