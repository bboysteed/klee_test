#include <klee/klee.h>
#include <assert.h>
int main()
{
    int n,hun,ten,ind;
  //  count=0;
    //while(count<3){
    klee_make_symbolic(&n,sizeof(n),"num");
    klee_assume(n>100);
    klee_assume(n<1000);
    hun = n / 100;
    ten = (n-hun*100) / 10;
    ind = n % 10;
    if(n == hun*hun*hun + ten*ten*ten + ind*ind*ind)  /*�~P~D�~M�~J�~Z~D�~K�~V�*/
    {
//      count++;    
        klee_assert(0);

    //  if(count>3){
    //  klee_assert(0);
    //}
    }
   // }
    return 0;
}
