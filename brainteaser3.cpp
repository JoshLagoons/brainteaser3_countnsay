#include <iostream>
#include <algorithm>

//COUNT AND SAY SEQUENCE 
void countsay(int n)
{
if (n==1) 
return "1"; //my returns didn't work, got confused on how to make it them work.
if (n==2) 
return "11";

std::string output = "11";
std::cout << output << std::endl;
std::string tempora; //holds my output

for (int a = 1; a<n; a++)
{
    int b = output.length();
    for (int c = 0; c<b; c++)
    {
        int count = 1;
        while (c+1<b && output[c]==output[c+1])
        {
            count++;
            c++;
        }
        tempora+=std::to_string(count) + output[c];
    }
output = tempora;
std::cout<<output<<std::endl;
tempora = "";
}


}

int main()
{
    int n;
    std::cout<<"The count and say sequence. \n";
    std::cout<<"enter a number \n";
    std::cin>>n;
    countsay(n);
    return 0;
}