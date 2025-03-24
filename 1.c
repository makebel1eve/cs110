#include<stdio.h>
struct term
{
    int coef;
    int exp;
};
struct polynomial
{
    struct term pol[201];
};
struct term add_terms(struct term term1, struct term term2){
    struct term res;
    res.coef=term1.coef+term2.coef;
    res.exp=term1.exp;
    return res; 
}
struct term multiply(struct term term1, struct term term2){
    struct term res;
    res.coef=term1.coef*term2.coef;
    res.exp=term1.exp+term2.exp;
    return res;

}
struct polynomial add(struct polynomial p1,struct polynomial p2)
{
    struct polynomial res;
    for(int i=0;i<201;i++){
        res.pol[i]=add_terms(p1.pol[i],p2.pol[i]);
    }
    return res;

};
struct polynomial mul(struct polynomial p1,struct polynomial p2){
    struct polynomial res;
    struct term init;
    init.coef=0;
    for (int i=0;i<201;i++){
        init.exp=i;
        res.pol[i]=init;
    }
    for (int i=0;i<201;i++){
        for (int j=0;j<201;j++){
            struct term temp=multiply(p1.pol[i],p2.pol[j]);
            res.pol[temp.exp]=add_terms(temp,res.pol[temp.exp]);
        }
    }
    return res;

}


int main(){
    int n;
    scanf("%d",&n);
    struct polynomial x;
    struct term init;
    init.coef=0;
    for (int i=0;i<201;i++){
        init.exp=i;
        x.pol[i]=init;
    }
    for (int i=0;i<n;i++){
        struct term u;
        scanf("%d",&u.coef);
        scanf("%d",&u.exp);
        x.pol[u.exp]=add_terms(x.pol[u.exp],u);
    }
    scanf("%d",&n);
    struct polynomial y;
    for (int i=0;i<201;i++){
        init.exp=i;
        y.pol[i]=init;
    }
    for (int i=0;i<n;i++){
        struct term u;
        scanf("%d",&u.coef);
        scanf("%d",&u.exp);
        y.pol[u.exp]=add_terms(y.pol[u.exp],u);
    }
    struct polynomial ad=add(x,y);
    struct polynomial mull=mul(x,y);
    for (int i=201; i>=0; i--){
        if (ad.pol[i].coef){
            printf("(%d,%d) ",ad.pol[i].coef,ad.pol[i].exp);
        }
    }
    printf("\n");
    for (int i=201; i>=0; i--){
        if (mull.pol[i].coef){
            printf("(%d,%d) ",mull.pol[i].coef,mull.pol[i].exp);
        }
    }
    printf("\n");

}

