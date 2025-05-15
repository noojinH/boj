#include <stdio.h>
#define mx 1000001
int A[mx], B[mx];
void m_s(int l, int r){
    if(l==r) return;
    int m = (l+r)/2;
    m_s(l,m);
    m_s(m+1,r);
    int i=l,j=m+1,k=l;
    while(i<m+1 && j<r+1){
        if(A[i] < A[j]) B[k++] = A[i++];
        else B[k++] = A[j++];
    }
    while(i<m+1) B[k++] = A[i++];
    while(j<r+1) B[k++] = A[j++];
    for(int s=l;s<r+1;s++) A[s] = B[s];
}
int main(void){
    int N;
    scanf("%d", &N);
    for(int i=1;i<=N;i++) scanf("%d", A + i);
    m_s(1,N);
    for(int i=1;i<=N;i++) printf("%d\n", *(A+i));
    return 0;
}