/*
The structure of petrolPump is 
struct petrolPump
{
    int petrol;
    int distance;
};*/

class Solution{
  public:
  
    //Function to find starting point where the truck can start to get through
    //the complete circle without exhausting its petrol in between.
    int tour(petrolPump p[],int n)
    {
       //Your code here
       int start = 0;
       int requiredfuel = 0;
       int extrafuel = 0;
       for(int i=0;i<n;i++){
           extrafuel += p[i].petrol - p[i].distance;
           if(extrafuel < 0 ){
               start = i+1;
               requiredfuel += extrafuel;
               extrafuel = 0;
            }
       }
       if(requiredfuel+extrafuel >=0) return start;
       return -1;
    }
};

//circular tour