#include <stdio.h>
int n,k,a[1000001],q[1000001],head,rear;
void getmin(){
    head=rear=0;
    for(int i=1;i<k;i++){
        while(rear>=head&&a[q[rear]]>=a[i])rear--;
        q[++rear]=i;
    }
    for(int i=k;i<=n;i++){
        while(rear>=head&&a[q[rear]]>=a[i])rear--;
        q[++rear]=i;
        if(i-q[head]>=k)head++;
        printf("%d ",a[q[head]]);
    }
    printf("\n");
}
void getmax(){
    head=rear=0;
    for(int i=1;i<k;i++){
        while(rear>=head&&a[q[rear]]<=a[i])rear--;
        q[++rear]=i;
    }
    for(int i=k;i<=n;i++){
        while(rear>=head&&a[q[rear]]<=a[i])rear--;
        q[++rear]=i;

        if(i-q[head]>=k)head++;
        printf("%d ",a[q[head]]);
    }
}
int main(){
    scanf("%d %d",&n,&k);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    getmin();
    getmax();
    return 0;
}