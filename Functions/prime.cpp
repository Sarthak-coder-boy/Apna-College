 #include <bits/stdc++.h>
using namespace std;

int primeDiff(int L, int R)
{
    if (L == R){
        return 0;
    }
    
	int i, j, flag;
    int low = 0, high = 0;

	for (i = L; i <= R; i++) 
    {
        if (i == 1 || i == 0)
			continue;
		// to check if number is prime or not, we assume it is prime
        flag = 1;
        
        // now we check if number is really prime or not
		for (j = 2; j <= i / 2; ++j) {
			if (i % j == 0) {
				flag = 0;
				break;
			}
		}

		if (flag == 1){
            low = i;
            // break, as we need not to find any number in lower range now, we will go from end-> low now
            // to find the maximum prime one
            break;
        }
	}

    for (i = R; i >= L; i--) 
    {
        if (i == 1 || i == 0)
			continue;
		// to check if number is prime or not, we assume it is prime
        flag = 1;
        
        // now we check if number is really prime or not
		for (j = 2; j <= i / 2; ++j) {
			if (i % j == 0) {
				flag = 0;
				break;
			}
		}

		if (flag == 1){
            high = i;
            break;
        }
	}

    if(low == high && high == 0)
        return (-1);
    else
        return (high-low);
}


int main()
{
 
    int t;
    cin >> t;
    while(t--){
        int start,end;
        cin >> start >> end;
        cout << primeDiff(start,end) << endl;
    }
    return 0;
}