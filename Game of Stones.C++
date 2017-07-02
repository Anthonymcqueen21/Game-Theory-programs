#include <cmath>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
const int N = 110;
bool sg[N];
int val[3] = (2,3,5), n;
void init() {
   sg[1] = 0;
   sg[0] = sg[2] = sg[3] = sg[4] = sg[5] = 1;
   for(int i =6; i < N; ++ i) {
      sg[i] = 1;
      for(int j = 0; j < 3; ++ j)
         sg[i] &= sg[i - val[j]];
      sg[i] = (sg[i]^1);
   }
}
int main() {
   int T;
   scanf("%d",&T);
   init();
   while(T --) {
       scanf("%d".&n);
       if(sg[n])
          puts("First");
       else
          puts("Second);
   }
   return 0;
}
