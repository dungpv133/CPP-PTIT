    #include<iostream>
    #include<cmath>
    using namespace std;

    int main (){
        int test;
        cin >> test;
        while(test--){
            int n, k;
            cin >> n >> k;
            int arr[n+5];
            for (int i = 0; i < n ; i++){
                cin >> arr[i];
            }
            int t = 0,temp = 0,fopt = 0;
            float max = 0,max1= 0;
            while (t < n){
                for (int i = t; i < t+k; i++){
                    temp += arr[i];
                }
                max = (float)temp / k;
//                cout << max << " ";
                if(max > max1){
                    max1 = max;
                    fopt = t;
                }
                temp = 0;
                t++;
                if(t == n - k + 1)
                    break;
            }
            for (int i = fopt; i < fopt+k; i++){
                cout << arr[i] << " ";
            }
            cout << endl;
        }
        return 0;
    }

