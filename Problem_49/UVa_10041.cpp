#include <stdio.h>
#include <math.h>

using namespace std;

int bubble_sort(int r,int arr[]){
    int mid;
    for(int i = 0; i < r-1;i++){
        for(int j = 0;j < r-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    if(r % 2 == 0){
        mid = (arr[r/2] + arr[(r/2)-1])/2;
    }
    else{
        mid = arr[r/2];
    }
        return mid;
}
int main() {
    int t;
    scanf("%d",&t);
    while(t--){
        int r;
        scanf("%d",&r);
        int arr [505] ={0};
        int ans = 0;
        for(int i = 0; i < r;i++){
            scanf("%d",&arr[i]);
        }
        int mid = bubble_sort(r,arr);
        for(int j = 0; j < r; j++){
            int sum = abs(arr[j] - mid);
            ans += sum;
        }
        printf("%d\n",ans);
    }
    return 0;
}