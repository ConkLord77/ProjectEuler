#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    long long int sum = 2, sum2 = 0;
    string result = "10715086071862673209484250490600018105614048117055336074437503883703510511249361224931983788156958581275946729175531468251871452856923140435984577574698574803934567774824230985421074605062371141877954182153046474983581941267398767559165543946077062914571196477686542167660429831652624386837205668069376";

    for(int j = 0; j < 999; j++)
    {
        sum = sum * 2;
        cout << sum << endl;
    }
    cout << sum << endl;
    //result = to_string(sum);
    cout << result << endl;
    
    for(int i = 0; i < result.length(); i++)
    {
        sum2 += result[i] - 48;
    }

    cout << sum2 << endl;

}