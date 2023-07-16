#include <iostream>
#include <string>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string N;
    cin >> N;
    int val=0;
    for(int i=0; i<N.length(); i++){
        if(N[i]=='c'){
            if(N[i+1]=='=' || N[i+1]=='-') {
                i++;
            }
        }
        else if(N[i]=='d'){
            if((N[i+1]=='z'&&N[i+2]=='=')){
                i+=2;
            }
            else if(N[i+1]=='-'){
                i++;
            }
        }
        else if(N[i]=='l'){
            if(N[i+1]=='j') i++;
        }
        else if(N[i]=='n'){
            if(N[i+1]=='j') i++;
        }
        else if(N[i+1] =='='){
            if(N[i]=='s'|| N[i]=='z') i++;
        }
        val++;
    }
    cout << val << endl;
    
}