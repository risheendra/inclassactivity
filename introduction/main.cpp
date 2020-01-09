//
//  main.cpp
//  introduction
//
//  Created by Risheendra Manikya on 1/7/20.
//  Copyright © 2020 Risheendra Manikya. All rights reserved.
//
//Risheendra Manikya

//#include <iostream>


//using namsespace std;

//int main(){
    //std::cout << "My favourite food is Indian." << std::endl;
  //  return 0;
//}








#include <iostream>
#include <math.h>
using namespace std;
  
double hexagonArea(double s)
{
    return ((3 * sqrt(3) *
            (s * s)) / 2);
}
  
int main()
{
    // Length of a side
    cout << "enter the side";
    double s;
    cin >> s;
    cout << "Area : "
         << hexagonArea(s);
    return 0;
}





#include <cstdlib>
#include <iostream>

using namespace std;

double weightInput(double pounds, double ounces)
{
    
}
double weightCalculating(double pounds, double ounces)
{
   return pounds / 2.2046 && (((ounces * 15)*2.2046)/ 1000);
}
double weightOutput(double pounds, double ounces)
{
    
}
int main(int argc, char** argv) {

    return 0;
}






#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout<<"Enter first number:";
    cin>>num1;
    cout<<"Enter second number:";
    cin>>num2;
    if(num1>num2)
    {
    cout<<"First number "<<num1<<" is the largest";
    }
    else
    {
    cout<<"Second number "<<num2<<" is the largest";
    }
    return 0;
}
