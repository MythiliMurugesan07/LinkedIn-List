
#include <stdio.h>
int main() {
    char a[100], b[100];
    scanf("%s %s", a, b);
    int f[256] = {0};
    for(int i=0; a[i]; i++) f[(unsigned char)a[i]]++;
    for(int i=0; b[i]; i++) f[(unsigned char)b[i]]--;
    for(int i=0;i<256;i++){
        if(f[i]!=0){
            printf("NO");
            return 0;
        }
    }
    printf("YES");
}
