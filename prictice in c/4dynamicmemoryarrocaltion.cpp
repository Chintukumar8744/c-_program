#include<cstdio>
#include<iostream>
using namespace std;
int main() {
    int n, q, k;                  // n = num of elements, q = queries (i and j), k = arr[i] length
    scanf("%d %d", &n, &q);
    int *a[n];                       // 2D array, rows are variable-length arrays, col are elements for
                                    // each variable-length array
    
    // Array construction stage
    for (int i = 0; i < n; i++){
        scanf("%d", &k);
        a[i] = new int[k];
        for (int j = 0; j < k; j++){
            scanf("%d ", &a[i][j]);
        }
    }
    
    // Output stage
    for (int i = 0; i < q; i++) {
        int x, y;   // x = specific row, y = specific col
        
        scanf("%d %d", &x, &y);
        printf("%d\n", a[x][y]);
    }
    
    return 0;
}