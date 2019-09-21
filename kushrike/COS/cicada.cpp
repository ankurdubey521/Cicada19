#include<iostream>
#include<bits/stdc++.h>
#include<ctime>
using namespace std;
int main()
{ 
    srand(time(0));
    int a,b,c;
    int counter=0;// STORES THE NUMBER OF CONSECUTIVE CORRECT INPUTS
    clock_t start=clock();
    while(true)
    {

   int a= (rand()%100)+1;
   int b= (rand()%100)+1;
   int c=(std::max(a,b)+(a+b))/2;
    cout << a << " " << b << " " << c << "\n";
    
   // c is biggest integer

    int in;
    cin >> in;
    // CALCULATE THE COSINE VALUE
   int cos=floor((((b*b)+(a*a)-(c*c))/(1.00*2*a*b))*100);
   if(clock()-start < 2000) // ENSURE THE TIME ELAPSED IS WITHIN 2 SECONDS
   {
      if(cos==in)
      {
        counter++;// CORRECT INPUT OBTAINED
       if(counter==6)
       {
           cout << "3301{C0ngr475, y0u kn0w t0 c0n7r0l T!M3}" ;
           break;
       }
      }
      else
        exit(0);       
   }
   else
   {
       cout << "Sorry kiddo, you gotta get the Timestone !";
       return 0;
       exit(5000);
   }

    }

}