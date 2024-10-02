#include <stdio.h>
#include <stdlib.h>

int main()
{ int t,n,i;

scanf("%d",&t);

while(t--){

scanf("%d",&n);

int tab[n];


for(i=1 ; i<=n ; i++){
    scanf("%d",&tab[i]);
}

int maxeven = 0;
int maxodd = 0;
int countodd=0;
int counteven=0;

for(i=1 ; i<=n ; i+=2){

    if(maxodd <= tab[i]){
        maxodd = tab[i];
    }
     countodd++;
    }


for(i=2 ; i<=n ; i+=2){
    if(maxeven <= tab[i]){
        maxeven = tab[i];
    }
     counteven++;
}
int odd = maxodd+countodd;
int even = maxeven+counteven;

int res = (even>odd)?even:odd;
printf("%d\n",res);

}
    return 0;
}
