#include <bits/stdc++.h>
using namespace std;
void update(int *a,int *b) {
    int c;
    c=(*a)+(*b);
    cout<< c<<endl;
    if((*a)>(*b))
    {
        cout<<(*a)-(*b);
    }
    else{
        cout<<(*b)-(*a);
    }
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    scanf("%d %d", &a, &b);
    update(pa, pb);
    return 0;
}
