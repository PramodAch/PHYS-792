#include <iostream>
#include <TRandom3.h>
using namespace std;
int main ()
{
  TRandom3 generator(0);
  for(int i=0;i<100;i++)
  std::cout<<generator.PoissonD(10.0)<<std::endl;
  return 0;
}
