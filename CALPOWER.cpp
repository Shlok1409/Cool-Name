#include <bits/stdc++.h>
using namespace std;

int order(char x)
{
    switch(x)
    {
        case 'a':  return 1; break;
        case 'b':  return 2; break;
        case 'c':  return 3; break;
        case 'd':  return 4; break;
        case 'e':  return 5; break;
        case 'f':  return 6; break;
        case 'g':  return 7; break;
        case 'h':  return 8; break;
        case 'i':  return 9; break;
        case 'j':  return 10; break;
        case 'k':  return 11; break;
        case 'l':  return 12; break;
        case 'm':  return 13; break;
        case 'n':  return 14; break;
        case 'o':  return 15; break;
        case 'p':  return 16; break;
        case 'q':  return 17; break;
        case 'r':  return 18; break;
        case 's':  return 19; break;
        case 't':  return 20; break;
        case 'u':  return 21; break;
        case 'v':  return 22; break;
        case 'w':  return 23; break;
        case 'x':  return 24; break;
        case 'y':  return 25; break;
        case 'z':  return 26; break;
        default : break;
    }
}

long long calculatePower(string S)
{
    sort(S.begin(),S.end());
    long long sum = 0;
    
    for(long long i = 0; i < S.size() ; i++)
        sum = sum + ((i + 1)*order(S[i]));
        
    return sum;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    string S;
	    cin>>S;
	    cout<<calculatePower(S)<<endl;
	}
	return 0;
}
