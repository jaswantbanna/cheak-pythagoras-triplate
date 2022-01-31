#include<iostream>
#include<cmath>
using namespace std;
  
int main()
{    
    int n1,n2,n3;
    cout<<"enter valueof n1,n2 and n3:";
    cin>>n1>>n2>>n3;
    if(n1>n2 &&n1>n3)
    {   
        
        
        if(pow(n1,2) ==pow(n2,2)+pow(n3,2))
      {
        cout<<"number are pythagoras triplet";
    } 
      else
      cout<<"number is not pythagoras triplet";
  }
  else if(n2>n1 && n2>n3)
  {   
     
     if(pow(n2,2)==pow(n1,2)+pow(n3,2))
     {    
         
      cout<<"number are pythogo triplet";
  }
  else
  cout<<"number are not pythogras triplet";
}
         else if(n3>n1 && n3>n2)
  {   
     
     if(pow(n3,2)==pow(n1,2)+pow(n2,2))
     {    
         
      cout<<"number are pythogo triplet";
  }
  else
  cout<<"number are not pythogras triplet";
}
return 0;
}
        


