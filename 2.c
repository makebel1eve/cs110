#include <stdio.h>
#include <stdlib.h>

#define MAX_ENVELOPES 100000

typedef struct Envelope {
    int w, h;
} Envelope;

int compare(const void *a, const void *b) {
    Envelope e1 = *(Envelope *)a;
    Envelope e2 = *(Envelope *)b;

    if (e1.w != e2.w)
        return e1.w - e2.w;
    else
        return e1.h - e2.h; 
}

// 
int main() {
    FILE *file = fopen("input.txt", "r");
    if (!file) {
        return 1;
    }

    Envelope envelopes[MAX_ENVELOPES];
    int n = 0;

    while (fscanf(file, "%d %d", &envelopes[n].w, &envelopes[n].h)==2) {
        n++;
    }
    fclose(file);

    qsort(envelopes, n, sizeof(Envelope), compare);

    int dp[MAX_ENVELOPES];
    int length = 0;
    int lastw=0,lasth=0,ans=0;
    
    for (int i = 0; i < n; i++) {
        if (envelopes[i].w>lastw && envelopes[i].h>lasth){
            ans+=1;
            lastw=envelopes[i].w;
            lasth=envelopes[i].h;
        }

    }

    printf("%d\n", ans);
    return 0;
}
